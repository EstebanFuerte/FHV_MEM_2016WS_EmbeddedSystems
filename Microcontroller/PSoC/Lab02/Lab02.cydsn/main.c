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

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    // Task 2. Clk = 10kHz, Periode = 10000, compare value = 500
    // -> periode = 1s; on time = 0.5s
    PWM_1_Enable();
    PWM_1_Start();
    
    //
    isr_1_Enable();
    isr_1_Start();
    
    //
    isr_2_Start();
    
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */
