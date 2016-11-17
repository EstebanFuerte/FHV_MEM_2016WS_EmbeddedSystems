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
#include "led.h"
#include "BLEProcess.h"
#include "main.h"

void GeneralEventHandler(uint32 event, void * eventParam)
{
    /* Structure to store data written by Client */
    CYBLE_GATTS_WRITE_REQ_PARAM_T *wrReqParam;
    
    /* 'RGBledData[]' is an array to store 4 bytes of RGB LED data*/
    uint8 RGBledData[RGB_CHAR_DATA_LEN];
    switch(event)
    {
        case CYBLE_EVT_STACK_ON:
        /* BLE stack is on. Start BLE advertisement */
        CyBle_GappStartAdvertisement(CYBLE_ADVERTISING_FAST);
        break;
        
        case CYBLE_EVT_GAP_DEVICE_DISCONNECTED:
        /* This event is generated at GAP disconnection. */
        
        /* Reset the color values*/
        RGBledData[RED_INDEX] = FALSE;
        RGBledData[GREEN_INDEX] = FALSE;
        RGBledData[BLUE_INDEX] = FALSE;
        RGBledData[INTENSITY_INDEX] = FALSE;
        
        /* Switch off LEDs */
        UpdateRGBLED(RGBledData, sizeof(RGBledData));
        
        /* Register the new color in GATT DB*/
        UpdateRGBcharacteristic(RGBledData, sizeof(RGBledData),
        CYBLE_RGB_LED_RGB_LED_CONTROL_CHAR_HANDLE);
       
        /* Restart advertisement */
        CyBle_GappStartAdvertisement(CYBLE_ADVERTISING_FAST);
        break;
        
        case CYBLE_EVT_GATTS_WRITE_REQ:
        /* Extract the Write data sent by Client */
        wrReqParam = (CYBLE_GATTS_WRITE_REQ_PARAM_T *) eventParam;
        
        /* If the attribute handle of the characteristic written to
        * is equal to that of RGB_LED characteristic, then extract
        * the RGB LED data */
        if(CYBLE_RGB_LED_RGB_LED_CONTROL_CHAR_HANDLE == wrReqParam->handleValPair.attrHandle)
        {
            /* Store RGB LED data in local array */
            RGBledData[RED_INDEX] =
            wrReqParam->handleValPair.value.val[RED_INDEX];
            RGBledData[GREEN_INDEX] =
            wrReqParam->handleValPair.value.val[GREEN_INDEX];
            RGBledData[BLUE_INDEX] =
            wrReqParam->handleValPair.value.val[BLUE_INDEX];
            RGBledData[INTENSITY_INDEX] =
            wrReqParam->handleValPair.value.val[INTENSITY_INDEX];
            /* Update the PrISM component density value to represent color */
            UpdateRGBLED(RGBledData, sizeof(RGBledData));
            /* Update the GATT DB for RGB LED read characteristics*/
            UpdateRGBcharacteristic(RGBledData,
            sizeof(RGBledData),
            CYBLE_RGB_LED_RGB_LED_CONTROL_CHAR_HANDLE);
        }
        /* Send the response to the write request received. */
        CyBle_GattsWriteRsp(cyBle_connHandle);
        break;
        
        default:
        break;
    }
}

void UpdateRGBLED(uint8* ledData, uint8 len)
{
    /* Local variables to store calculated color components */
    uint8 calc_red;
    uint8 calc_green;
    uint8 calc_blue;
    /* Check if the array has length equal to expected length for
    * RGB LED data */
    if(len == RGB_CHAR_DATA_LEN)
    {
        /* True color to be displayed is calculated on basis of color
        * and intensity value received */
        calc_red = (uint8)
        (((uint16)ledData[RED_INDEX]*ledData[INTENSITY_INDEX])/RGB_LED_MAX_VAL);
        calc_green = (uint8)
        (((uint16)ledData[GREEN_INDEX]*ledData[INTENSITY_INDEX])/RGB_LED_MAX_VAL);
        calc_blue = (uint8)
        (((uint16)ledData[BLUE_INDEX]*ledData[INTENSITY_INDEX])/RGB_LED_MAX_VAL);
        /* Update the density value of the PrISM module */
        PrISM_1_WritePulse0(RGB_LED_MAX_VAL - calc_red);
        PrISM_1_WritePulse1(RGB_LED_MAX_VAL - calc_green);
        PrISM_2_WritePulse0(RGB_LED_MAX_VAL - calc_blue);
    }
}

void UpdateRGBcharacteristic(uint8* ledData, uint8 len, uint16 attrHandle)
{
    /* 'rgbHandle' stores RGB control data parameters */
    CYBLE_GATT_HANDLE_VALUE_PAIR_T rgbHandle;
    /* Update RGB control handle with new values */
    rgbHandle.attrHandle = attrHandle;
    rgbHandle.value.val = ledData;
    rgbHandle.value.len = len;
    /* Update the RGB LED attribute value. This will allow
    * Client device to read the existing color values over
    * RGB LED characteristic */
    CyBle_GattsWriteAttributeValue(&rgbHandle,FALSE,&cyBle_connHandle,CYBLE_GATT_DB_PEER_INITIATED);
}

/* [] END OF FILE */
