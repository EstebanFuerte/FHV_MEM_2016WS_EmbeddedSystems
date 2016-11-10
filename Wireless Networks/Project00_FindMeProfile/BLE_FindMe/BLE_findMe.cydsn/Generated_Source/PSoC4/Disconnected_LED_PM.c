/*******************************************************************************
* File Name: Disconnected_LED.c  
* Version 2.20
*
* Description:
*  This file contains APIs to set up the Pins component for low power modes.
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "Disconnected_LED.h"

static Disconnected_LED_BACKUP_STRUCT  Disconnected_LED_backup = {0u, 0u, 0u};


/*******************************************************************************
* Function Name: Disconnected_LED_Sleep
****************************************************************************//**
*
* \brief Stores the pin configuration and prepares the pin for entering chip 
*  deep-sleep/hibernate modes. This function must be called for SIO and USBIO
*  pins. It is not essential if using GPIO or GPIO_OVT pins.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None 
*  
* \sideeffect
*  For SIO pins, this function configures the pin input threshold to CMOS and
*  drive level to Vddio. This is needed for SIO pins when in device 
*  deep-sleep/hibernate modes.
*
* \funcusage
*  \snippet Disconnected_LED_SUT.c usage_Disconnected_LED_Sleep_Wakeup
*******************************************************************************/
void Disconnected_LED_Sleep(void)
{
    #if defined(Disconnected_LED__PC)
        Disconnected_LED_backup.pcState = Disconnected_LED_PC;
    #else
        #if (CY_PSOC4_4200L)
            /* Save the regulator state and put the PHY into suspend mode */
            Disconnected_LED_backup.usbState = Disconnected_LED_CR1_REG;
            Disconnected_LED_USB_POWER_REG |= Disconnected_LED_USBIO_ENTER_SLEEP;
            Disconnected_LED_CR1_REG &= Disconnected_LED_USBIO_CR1_OFF;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(Disconnected_LED__SIO)
        Disconnected_LED_backup.sioState = Disconnected_LED_SIO_REG;
        /* SIO requires unregulated output buffer and single ended input buffer */
        Disconnected_LED_SIO_REG &= (uint32)(~Disconnected_LED_SIO_LPM_MASK);
    #endif  
}


/*******************************************************************************
* Function Name: Disconnected_LED_Wakeup
****************************************************************************//**
*
* \brief Restores the pin configuration that was saved during Pin_Sleep().
*
* For USBIO pins, the wakeup is only triggered for falling edge interrupts.
*
* <b>Note</b> This function is available in PSoC 4 only.
*
* \return 
*  None
*  
* \funcusage
*  Refer to Disconnected_LED_Sleep() for an example usage.
*******************************************************************************/
void Disconnected_LED_Wakeup(void)
{
    #if defined(Disconnected_LED__PC)
        Disconnected_LED_PC = Disconnected_LED_backup.pcState;
    #else
        #if (CY_PSOC4_4200L)
            /* Restore the regulator state and come out of suspend mode */
            Disconnected_LED_USB_POWER_REG &= Disconnected_LED_USBIO_EXIT_SLEEP_PH1;
            Disconnected_LED_CR1_REG = Disconnected_LED_backup.usbState;
            Disconnected_LED_USB_POWER_REG &= Disconnected_LED_USBIO_EXIT_SLEEP_PH2;
        #endif
    #endif
    #if defined(CYIPBLOCK_m0s8ioss_VERSION) && defined(Disconnected_LED__SIO)
        Disconnected_LED_SIO_REG = Disconnected_LED_backup.sioState;
    #endif
}


/* [] END OF FILE */
