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
/* RGB LED Characteristic data length*/
#include <project.h>
#define RGB_CHAR_DATA_LEN 4

void GeneralEventHandler(uint32 event, void * eventParam);
void UpdateRGBLED(uint8* ledData, uint8 len);
void UpdateRGBcharacteristic(uint8* ledData, uint8 len, uint16 attrHandle);

/* [] END OF FILE */
