/*******************************************************************************
* File Name: PrlSM_Clock.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_PrlSM_Clock_H)
#define CY_CLOCK_PrlSM_Clock_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
*        Function Prototypes
***************************************/
#if defined CYREG_PERI_DIV_CMD

void PrlSM_Clock_StartEx(uint32 alignClkDiv);
#define PrlSM_Clock_Start() \
    PrlSM_Clock_StartEx(PrlSM_Clock__PA_DIV_ID)

#else

void PrlSM_Clock_Start(void);

#endif/* CYREG_PERI_DIV_CMD */

void PrlSM_Clock_Stop(void);

void PrlSM_Clock_SetFractionalDividerRegister(uint16 clkDivider, uint8 clkFractional);

uint16 PrlSM_Clock_GetDividerRegister(void);
uint8  PrlSM_Clock_GetFractionalDividerRegister(void);

#define PrlSM_Clock_Enable()                         PrlSM_Clock_Start()
#define PrlSM_Clock_Disable()                        PrlSM_Clock_Stop()
#define PrlSM_Clock_SetDividerRegister(clkDivider, reset)  \
    PrlSM_Clock_SetFractionalDividerRegister((clkDivider), 0u)
#define PrlSM_Clock_SetDivider(clkDivider)           PrlSM_Clock_SetDividerRegister((clkDivider), 1u)
#define PrlSM_Clock_SetDividerValue(clkDivider)      PrlSM_Clock_SetDividerRegister((clkDivider) - 1u, 1u)


/***************************************
*             Registers
***************************************/
#if defined CYREG_PERI_DIV_CMD

#define PrlSM_Clock_DIV_ID     PrlSM_Clock__DIV_ID

#define PrlSM_Clock_CMD_REG    (*(reg32 *)CYREG_PERI_DIV_CMD)
#define PrlSM_Clock_CTRL_REG   (*(reg32 *)PrlSM_Clock__CTRL_REGISTER)
#define PrlSM_Clock_DIV_REG    (*(reg32 *)PrlSM_Clock__DIV_REGISTER)

#define PrlSM_Clock_CMD_DIV_SHIFT          (0u)
#define PrlSM_Clock_CMD_PA_DIV_SHIFT       (8u)
#define PrlSM_Clock_CMD_DISABLE_SHIFT      (30u)
#define PrlSM_Clock_CMD_ENABLE_SHIFT       (31u)

#define PrlSM_Clock_CMD_DISABLE_MASK       ((uint32)((uint32)1u << PrlSM_Clock_CMD_DISABLE_SHIFT))
#define PrlSM_Clock_CMD_ENABLE_MASK        ((uint32)((uint32)1u << PrlSM_Clock_CMD_ENABLE_SHIFT))

#define PrlSM_Clock_DIV_FRAC_MASK  (0x000000F8u)
#define PrlSM_Clock_DIV_FRAC_SHIFT (3u)
#define PrlSM_Clock_DIV_INT_MASK   (0xFFFFFF00u)
#define PrlSM_Clock_DIV_INT_SHIFT  (8u)

#else 

#define PrlSM_Clock_DIV_REG        (*(reg32 *)PrlSM_Clock__REGISTER)
#define PrlSM_Clock_ENABLE_REG     PrlSM_Clock_DIV_REG
#define PrlSM_Clock_DIV_FRAC_MASK  PrlSM_Clock__FRAC_MASK
#define PrlSM_Clock_DIV_FRAC_SHIFT (16u)
#define PrlSM_Clock_DIV_INT_MASK   PrlSM_Clock__DIVIDER_MASK
#define PrlSM_Clock_DIV_INT_SHIFT  (0u)

#endif/* CYREG_PERI_DIV_CMD */

#endif /* !defined(CY_CLOCK_PrlSM_Clock_H) */

/* [] END OF FILE */
