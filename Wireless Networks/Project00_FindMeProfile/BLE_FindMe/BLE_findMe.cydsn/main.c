/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h> 
#include "iprintf.h"
 
#define LED_ON                  (0u) 
#define LED_OFF                 (1u) 
#define NO_ALERT                (0u) 
#define MILD_ALERT              (1u) 
#define HIGH_ALERT              (2u) 
 
#define LED_TOGGLE_TIMEOUT      (100u) 
 
void StackEventHandler(uint32 event, void *eventParam); 
void IasEventHandler(uint32 event, void *eventParam); 
 
uint8 alertLevel; 
uint8 alertLevelOld;
 
int main() {   CYBLE_API_RESULT_T apiResult; 
 
    CyGlobalIntEnable; 
 
    apiResult = CyBle_Start(StackEventHandler); 
 
    if(apiResult != CYBLE_ERROR_OK)   {     
        /* BLE stack initialization failed, check your configuration */     
        CYASSERT(0);   
    } 
 
    CyBle_IasRegisterAttrCallback(IasEventHandler); 
    
    SCB_1_Start();
    iprintf("Hello World!\n\r");
 
    for(;;) {     
        static uint8 toggleTimeout = 0;     
        CYBLE_BLESS_STATE_T blessState;     
        uint8 intrStatus;
        
        /* Single API call to service all the BLE stack events. Must be
        * called at least once in a BLE connection interval */ 
        CyBle_ProcessEvents();
        
        /* Update Alert Level value on the blue LED */     
        switch(alertLevel)     
        {
          
            case NO_ALERT:         
            Alert_LED_Write(LED_OFF);  
            if (alertLevel != alertLevelOld) 
            {
                iprintf("New alert level is 0.\n\r");
                alertLevelOld = alertLevel;
            }
            break; 
 
            case MILD_ALERT:
            toggleTimeout++;         
            if(toggleTimeout == LED_TOGGLE_TIMEOUT)         
            {             
                /* Toggle alert LED after timeout */             
                Alert_LED_Write(Alert_LED_Read() ^ 0x01);
                toggleTimeout = 0;         
            }
            if (alertLevel != alertLevelOld) 
            {
                iprintf("New alert level is 1.\n\r");
                alertLevelOld = alertLevel;
            }
            break; 
 
            case HIGH_ALERT:
            Alert_LED_Write(LED_ON);
            if (alertLevel != alertLevelOld) 
            {
                iprintf("New alert level is 2.\n\r");
                alertLevelOld = alertLevel;
            }
            break;     
        } 
 
        /* Configure BLESS in Deep-Sleep mode */     
        CyBle_EnterLPM(CYBLE_BLESS_DEEPSLEEP);          
        
        /* Prevent interrupts while entering system low power modes */     
        intrStatus = CyEnterCriticalSection();          
        
        /* Get the current state of BLESS block */     
        blessState = CyBle_GetBleSsState();          
        
        /* If BLESS is in Deep-Sleep mode or the XTAL oscillator is turning on,       
        * then PSoC 4 BLE can enter Deep-Sleep mode (1.3uA current consumption) */
        if(blessState == CYBLE_BLESS_STATE_ECO_ON ||          
            blessState == CYBLE_BLESS_STATE_DEEPSLEEP)     
        {         
            CySysPmDeepSleep();     
        }     
        else if(blessState != CYBLE_BLESS_STATE_EVENT_CLOSE)     
        {         
            /* If BLESS is active, then configure PSoC 4 BLE system in
            * Sleep mode (~1.6mA current consumption) */         
            CySysPmSleep();     
        }     
        else     
        {         
            /* Keep trying to enter either Sleep or Deep-Sleep mode */
        }     CyExitCriticalSection(intrStatus);    
        
        /* BLE link layer timing interrupt will wake up the system from Sleep       
        * and Deep-Sleep modes */ 
    }
}

void StackEventHandler(uint32 event, void *eventParam) {     
    switch(event)     {         /* Mandatory events to be handled by Find Me Target design */         
        case CYBLE_EVT_STACK_ON:         
        case CYBLE_EVT_GAP_DEVICE_DISCONNECTED:             
            /* Start BLE advertisement for 30 seconds and update link              
            * status on LEDs */             
            CyBle_GappStartAdvertisement(CYBLE_ADVERTISING_FAST);
            Advertising_LED_Write(LED_ON);             
            alertLevel = NO_ALERT;      
            
            //Indicate that Advertisment started
            iprintf("Advertising is started.\r\n");
            
        break; 
 
        case CYBLE_EVT_GAP_DEVICE_CONNECTED:
            /* BLE link is established */             
            Advertising_LED_Write(LED_OFF);            
            Disconnect_LED_Write(LED_OFF);    
            
            iprintf("BLE link was established.\r\n");
        break;                       
            
        case CYBLE_EVT_GAPP_ADVERTISEMENT_START_STOP:
            if(CyBle_GetState() == CYBLE_STATE_DISCONNECTED)
            {
                iprintf("advertising timed out\r\n");
                /* Advertisement event timed out, go to low power
                * mode (Stop mode) and wait for device reset
                * event to wake up the device again */
                Advertising_LED_Write(LED_OFF);
                Disconnect_LED_Write(LED_ON);
                CySysPmSetWakeupPolarity(CY_PM_STOP_WAKEUP_ACTIVE_HIGH);
                CySysPmStop();                                 
                /* Code execution will not reach here */             
            }         
        break; 
 
        default:         
        break;   
    } 
}

void IasEventHandler(uint32 event, void *eventParam) {     
    /* Alert Level Characteristic write event */     
    if(event == CYBLE_EVT_IASS_WRITE_CHAR_CMD)     
    {         
        /* Read the updated Alert Level value from the GATT database */         
        CyBle_IassGetCharacteristicValue(CYBLE_IAS_ALERT_LEVEL,              
            sizeof(alertLevel), &alertLevel);
    } 
}

/* [] END OF FILE */
