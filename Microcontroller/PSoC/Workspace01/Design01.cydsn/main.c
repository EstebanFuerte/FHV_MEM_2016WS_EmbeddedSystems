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

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    //Timer_1_Start();
    //isr_1_Start();
    
    uint8 ch =0;
    uint8 ch_new =0;
    int i=32;
    char8 *s="abcd";
    
    /* Start SCB UART TX+Rx operation*/
    SCB_1_Start();
    SCB_1_UartPutString("CY8CKIT-042 USB-UART");
    iprintf("Test Printf Function: %s,%d,%c,%x \r \n",s,i,i,i);

    for(;;)
    {
        ch_new = SCB_1_UartGetChar();
        if(ch_new != ch && ch_new != 0x00)
        {
            //SCB_1_UartPutChar('x');
            CyDelay(500);
            LED_Red_Write(1);
            CyDelay(500);
            LED_Red_Write(0);
            iprintf("Alternating: %c \r\n",ch_new);
            ch = ch_new;
            
        }

    }
}

/* [] END OF FILE */
