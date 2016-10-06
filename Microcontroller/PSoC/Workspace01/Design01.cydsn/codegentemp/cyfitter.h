#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* SCB_1_rx */
#define SCB_1_rx__0__DR CYREG_GPIO_PRT1_DR
#define SCB_1_rx__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define SCB_1_rx__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define SCB_1_rx__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define SCB_1_rx__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define SCB_1_rx__0__HSIOM_GPIO 0u
#define SCB_1_rx__0__HSIOM_I2C 14u
#define SCB_1_rx__0__HSIOM_I2C_SDA 14u
#define SCB_1_rx__0__HSIOM_MASK 0x000F0000u
#define SCB_1_rx__0__HSIOM_SHIFT 16u
#define SCB_1_rx__0__HSIOM_SPI 15u
#define SCB_1_rx__0__HSIOM_SPI_MOSI 15u
#define SCB_1_rx__0__HSIOM_UART 9u
#define SCB_1_rx__0__HSIOM_UART_RX 9u
#define SCB_1_rx__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define SCB_1_rx__0__INTR CYREG_GPIO_PRT1_INTR
#define SCB_1_rx__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define SCB_1_rx__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define SCB_1_rx__0__MASK 0x10u
#define SCB_1_rx__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define SCB_1_rx__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define SCB_1_rx__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define SCB_1_rx__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define SCB_1_rx__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define SCB_1_rx__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define SCB_1_rx__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define SCB_1_rx__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define SCB_1_rx__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define SCB_1_rx__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define SCB_1_rx__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define SCB_1_rx__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define SCB_1_rx__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define SCB_1_rx__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define SCB_1_rx__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define SCB_1_rx__0__PC CYREG_GPIO_PRT1_PC
#define SCB_1_rx__0__PC2 CYREG_GPIO_PRT1_PC2
#define SCB_1_rx__0__PORT 1u
#define SCB_1_rx__0__PS CYREG_GPIO_PRT1_PS
#define SCB_1_rx__0__SHIFT 4u
#define SCB_1_rx__DR CYREG_GPIO_PRT1_DR
#define SCB_1_rx__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define SCB_1_rx__DR_INV CYREG_GPIO_PRT1_DR_INV
#define SCB_1_rx__DR_SET CYREG_GPIO_PRT1_DR_SET
#define SCB_1_rx__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define SCB_1_rx__INTR CYREG_GPIO_PRT1_INTR
#define SCB_1_rx__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define SCB_1_rx__INTSTAT CYREG_GPIO_PRT1_INTR
#define SCB_1_rx__MASK 0x10u
#define SCB_1_rx__PA__CFG0 CYREG_UDB_PA1_CFG0
#define SCB_1_rx__PA__CFG1 CYREG_UDB_PA1_CFG1
#define SCB_1_rx__PA__CFG10 CYREG_UDB_PA1_CFG10
#define SCB_1_rx__PA__CFG11 CYREG_UDB_PA1_CFG11
#define SCB_1_rx__PA__CFG12 CYREG_UDB_PA1_CFG12
#define SCB_1_rx__PA__CFG13 CYREG_UDB_PA1_CFG13
#define SCB_1_rx__PA__CFG14 CYREG_UDB_PA1_CFG14
#define SCB_1_rx__PA__CFG2 CYREG_UDB_PA1_CFG2
#define SCB_1_rx__PA__CFG3 CYREG_UDB_PA1_CFG3
#define SCB_1_rx__PA__CFG4 CYREG_UDB_PA1_CFG4
#define SCB_1_rx__PA__CFG5 CYREG_UDB_PA1_CFG5
#define SCB_1_rx__PA__CFG6 CYREG_UDB_PA1_CFG6
#define SCB_1_rx__PA__CFG7 CYREG_UDB_PA1_CFG7
#define SCB_1_rx__PA__CFG8 CYREG_UDB_PA1_CFG8
#define SCB_1_rx__PA__CFG9 CYREG_UDB_PA1_CFG9
#define SCB_1_rx__PC CYREG_GPIO_PRT1_PC
#define SCB_1_rx__PC2 CYREG_GPIO_PRT1_PC2
#define SCB_1_rx__PORT 1u
#define SCB_1_rx__PS CYREG_GPIO_PRT1_PS
#define SCB_1_rx__SHIFT 4u

/* SCB_1_SCB */
#define SCB_1_SCB__CTRL CYREG_SCB0_CTRL
#define SCB_1_SCB__EZ_DATA0 CYREG_SCB0_EZ_DATA0
#define SCB_1_SCB__EZ_DATA1 CYREG_SCB0_EZ_DATA1
#define SCB_1_SCB__EZ_DATA10 CYREG_SCB0_EZ_DATA10
#define SCB_1_SCB__EZ_DATA11 CYREG_SCB0_EZ_DATA11
#define SCB_1_SCB__EZ_DATA12 CYREG_SCB0_EZ_DATA12
#define SCB_1_SCB__EZ_DATA13 CYREG_SCB0_EZ_DATA13
#define SCB_1_SCB__EZ_DATA14 CYREG_SCB0_EZ_DATA14
#define SCB_1_SCB__EZ_DATA15 CYREG_SCB0_EZ_DATA15
#define SCB_1_SCB__EZ_DATA16 CYREG_SCB0_EZ_DATA16
#define SCB_1_SCB__EZ_DATA17 CYREG_SCB0_EZ_DATA17
#define SCB_1_SCB__EZ_DATA18 CYREG_SCB0_EZ_DATA18
#define SCB_1_SCB__EZ_DATA19 CYREG_SCB0_EZ_DATA19
#define SCB_1_SCB__EZ_DATA2 CYREG_SCB0_EZ_DATA2
#define SCB_1_SCB__EZ_DATA20 CYREG_SCB0_EZ_DATA20
#define SCB_1_SCB__EZ_DATA21 CYREG_SCB0_EZ_DATA21
#define SCB_1_SCB__EZ_DATA22 CYREG_SCB0_EZ_DATA22
#define SCB_1_SCB__EZ_DATA23 CYREG_SCB0_EZ_DATA23
#define SCB_1_SCB__EZ_DATA24 CYREG_SCB0_EZ_DATA24
#define SCB_1_SCB__EZ_DATA25 CYREG_SCB0_EZ_DATA25
#define SCB_1_SCB__EZ_DATA26 CYREG_SCB0_EZ_DATA26
#define SCB_1_SCB__EZ_DATA27 CYREG_SCB0_EZ_DATA27
#define SCB_1_SCB__EZ_DATA28 CYREG_SCB0_EZ_DATA28
#define SCB_1_SCB__EZ_DATA29 CYREG_SCB0_EZ_DATA29
#define SCB_1_SCB__EZ_DATA3 CYREG_SCB0_EZ_DATA3
#define SCB_1_SCB__EZ_DATA30 CYREG_SCB0_EZ_DATA30
#define SCB_1_SCB__EZ_DATA31 CYREG_SCB0_EZ_DATA31
#define SCB_1_SCB__EZ_DATA4 CYREG_SCB0_EZ_DATA4
#define SCB_1_SCB__EZ_DATA5 CYREG_SCB0_EZ_DATA5
#define SCB_1_SCB__EZ_DATA6 CYREG_SCB0_EZ_DATA6
#define SCB_1_SCB__EZ_DATA7 CYREG_SCB0_EZ_DATA7
#define SCB_1_SCB__EZ_DATA8 CYREG_SCB0_EZ_DATA8
#define SCB_1_SCB__EZ_DATA9 CYREG_SCB0_EZ_DATA9
#define SCB_1_SCB__I2C_CFG CYREG_SCB0_I2C_CFG
#define SCB_1_SCB__I2C_CTRL CYREG_SCB0_I2C_CTRL
#define SCB_1_SCB__I2C_M_CMD CYREG_SCB0_I2C_M_CMD
#define SCB_1_SCB__I2C_S_CMD CYREG_SCB0_I2C_S_CMD
#define SCB_1_SCB__I2C_STATUS CYREG_SCB0_I2C_STATUS
#define SCB_1_SCB__INTR_CAUSE CYREG_SCB0_INTR_CAUSE
#define SCB_1_SCB__INTR_I2C_EC CYREG_SCB0_INTR_I2C_EC
#define SCB_1_SCB__INTR_I2C_EC_MASK CYREG_SCB0_INTR_I2C_EC_MASK
#define SCB_1_SCB__INTR_I2C_EC_MASKED CYREG_SCB0_INTR_I2C_EC_MASKED
#define SCB_1_SCB__INTR_M CYREG_SCB0_INTR_M
#define SCB_1_SCB__INTR_M_MASK CYREG_SCB0_INTR_M_MASK
#define SCB_1_SCB__INTR_M_MASKED CYREG_SCB0_INTR_M_MASKED
#define SCB_1_SCB__INTR_M_SET CYREG_SCB0_INTR_M_SET
#define SCB_1_SCB__INTR_RX CYREG_SCB0_INTR_RX
#define SCB_1_SCB__INTR_RX_MASK CYREG_SCB0_INTR_RX_MASK
#define SCB_1_SCB__INTR_RX_MASKED CYREG_SCB0_INTR_RX_MASKED
#define SCB_1_SCB__INTR_RX_SET CYREG_SCB0_INTR_RX_SET
#define SCB_1_SCB__INTR_S CYREG_SCB0_INTR_S
#define SCB_1_SCB__INTR_S_MASK CYREG_SCB0_INTR_S_MASK
#define SCB_1_SCB__INTR_S_MASKED CYREG_SCB0_INTR_S_MASKED
#define SCB_1_SCB__INTR_S_SET CYREG_SCB0_INTR_S_SET
#define SCB_1_SCB__INTR_SPI_EC CYREG_SCB0_INTR_SPI_EC
#define SCB_1_SCB__INTR_SPI_EC_MASK CYREG_SCB0_INTR_SPI_EC_MASK
#define SCB_1_SCB__INTR_SPI_EC_MASKED CYREG_SCB0_INTR_SPI_EC_MASKED
#define SCB_1_SCB__INTR_TX CYREG_SCB0_INTR_TX
#define SCB_1_SCB__INTR_TX_MASK CYREG_SCB0_INTR_TX_MASK
#define SCB_1_SCB__INTR_TX_MASKED CYREG_SCB0_INTR_TX_MASKED
#define SCB_1_SCB__INTR_TX_SET CYREG_SCB0_INTR_TX_SET
#define SCB_1_SCB__RX_CTRL CYREG_SCB0_RX_CTRL
#define SCB_1_SCB__RX_FIFO_CTRL CYREG_SCB0_RX_FIFO_CTRL
#define SCB_1_SCB__RX_FIFO_RD CYREG_SCB0_RX_FIFO_RD
#define SCB_1_SCB__RX_FIFO_RD_SILENT CYREG_SCB0_RX_FIFO_RD_SILENT
#define SCB_1_SCB__RX_FIFO_STATUS CYREG_SCB0_RX_FIFO_STATUS
#define SCB_1_SCB__RX_MATCH CYREG_SCB0_RX_MATCH
#define SCB_1_SCB__SPI_CTRL CYREG_SCB0_SPI_CTRL
#define SCB_1_SCB__SPI_STATUS CYREG_SCB0_SPI_STATUS
#define SCB_1_SCB__SS0_POSISTION 0u
#define SCB_1_SCB__SS1_POSISTION 1u
#define SCB_1_SCB__SS2_POSISTION 2u
#define SCB_1_SCB__SS3_POSISTION 3u
#define SCB_1_SCB__STATUS CYREG_SCB0_STATUS
#define SCB_1_SCB__TX_CTRL CYREG_SCB0_TX_CTRL
#define SCB_1_SCB__TX_FIFO_CTRL CYREG_SCB0_TX_FIFO_CTRL
#define SCB_1_SCB__TX_FIFO_STATUS CYREG_SCB0_TX_FIFO_STATUS
#define SCB_1_SCB__TX_FIFO_WR CYREG_SCB0_TX_FIFO_WR
#define SCB_1_SCB__UART_CTRL CYREG_SCB0_UART_CTRL
#define SCB_1_SCB__UART_FLOW_CTRL CYREG_SCB0_UART_FLOW_CTRL
#define SCB_1_SCB__UART_RX_CTRL CYREG_SCB0_UART_RX_CTRL
#define SCB_1_SCB__UART_RX_STATUS CYREG_SCB0_UART_RX_STATUS
#define SCB_1_SCB__UART_TX_CTRL CYREG_SCB0_UART_TX_CTRL

/* SCB_1_SCBCLK */
#define SCB_1_SCBCLK__CTRL_REGISTER CYREG_PERI_PCLK_CTL1
#define SCB_1_SCBCLK__DIV_ID 0x00000040u
#define SCB_1_SCBCLK__DIV_REGISTER CYREG_PERI_DIV_16_CTL0
#define SCB_1_SCBCLK__PA_DIV_ID 0x000000FFu

/* SCB_1_tx */
#define SCB_1_tx__0__DR CYREG_GPIO_PRT1_DR
#define SCB_1_tx__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define SCB_1_tx__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define SCB_1_tx__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define SCB_1_tx__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define SCB_1_tx__0__HSIOM_GPIO 0u
#define SCB_1_tx__0__HSIOM_I2C 14u
#define SCB_1_tx__0__HSIOM_I2C_SCL 14u
#define SCB_1_tx__0__HSIOM_MASK 0x00F00000u
#define SCB_1_tx__0__HSIOM_SHIFT 20u
#define SCB_1_tx__0__HSIOM_SPI 15u
#define SCB_1_tx__0__HSIOM_SPI_MISO 15u
#define SCB_1_tx__0__HSIOM_UART 9u
#define SCB_1_tx__0__HSIOM_UART_TX 9u
#define SCB_1_tx__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define SCB_1_tx__0__INTR CYREG_GPIO_PRT1_INTR
#define SCB_1_tx__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define SCB_1_tx__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define SCB_1_tx__0__MASK 0x20u
#define SCB_1_tx__0__OUT_SEL CYREG_UDB_PA1_CFG10
#define SCB_1_tx__0__OUT_SEL_SHIFT 10u
#define SCB_1_tx__0__OUT_SEL_VAL -1u
#define SCB_1_tx__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define SCB_1_tx__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define SCB_1_tx__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define SCB_1_tx__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define SCB_1_tx__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define SCB_1_tx__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define SCB_1_tx__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define SCB_1_tx__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define SCB_1_tx__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define SCB_1_tx__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define SCB_1_tx__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define SCB_1_tx__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define SCB_1_tx__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define SCB_1_tx__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define SCB_1_tx__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define SCB_1_tx__0__PC CYREG_GPIO_PRT1_PC
#define SCB_1_tx__0__PC2 CYREG_GPIO_PRT1_PC2
#define SCB_1_tx__0__PORT 1u
#define SCB_1_tx__0__PS CYREG_GPIO_PRT1_PS
#define SCB_1_tx__0__SHIFT 5u
#define SCB_1_tx__DR CYREG_GPIO_PRT1_DR
#define SCB_1_tx__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define SCB_1_tx__DR_INV CYREG_GPIO_PRT1_DR_INV
#define SCB_1_tx__DR_SET CYREG_GPIO_PRT1_DR_SET
#define SCB_1_tx__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define SCB_1_tx__INTR CYREG_GPIO_PRT1_INTR
#define SCB_1_tx__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define SCB_1_tx__INTSTAT CYREG_GPIO_PRT1_INTR
#define SCB_1_tx__MASK 0x20u
#define SCB_1_tx__PA__CFG0 CYREG_UDB_PA1_CFG0
#define SCB_1_tx__PA__CFG1 CYREG_UDB_PA1_CFG1
#define SCB_1_tx__PA__CFG10 CYREG_UDB_PA1_CFG10
#define SCB_1_tx__PA__CFG11 CYREG_UDB_PA1_CFG11
#define SCB_1_tx__PA__CFG12 CYREG_UDB_PA1_CFG12
#define SCB_1_tx__PA__CFG13 CYREG_UDB_PA1_CFG13
#define SCB_1_tx__PA__CFG14 CYREG_UDB_PA1_CFG14
#define SCB_1_tx__PA__CFG2 CYREG_UDB_PA1_CFG2
#define SCB_1_tx__PA__CFG3 CYREG_UDB_PA1_CFG3
#define SCB_1_tx__PA__CFG4 CYREG_UDB_PA1_CFG4
#define SCB_1_tx__PA__CFG5 CYREG_UDB_PA1_CFG5
#define SCB_1_tx__PA__CFG6 CYREG_UDB_PA1_CFG6
#define SCB_1_tx__PA__CFG7 CYREG_UDB_PA1_CFG7
#define SCB_1_tx__PA__CFG8 CYREG_UDB_PA1_CFG8
#define SCB_1_tx__PA__CFG9 CYREG_UDB_PA1_CFG9
#define SCB_1_tx__PC CYREG_GPIO_PRT1_PC
#define SCB_1_tx__PC2 CYREG_GPIO_PRT1_PC2
#define SCB_1_tx__PORT 1u
#define SCB_1_tx__PS CYREG_GPIO_PRT1_PS
#define SCB_1_tx__SHIFT 5u

/* isr_1 */
#define isr_1__INTC_CLR_EN_REG CYREG_CM0_ICER
#define isr_1__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define isr_1__INTC_MASK 0x20000u
#define isr_1__INTC_NUMBER 17u
#define isr_1__INTC_PRIOR_MASK 0xC000u
#define isr_1__INTC_PRIOR_NUM 3u
#define isr_1__INTC_PRIOR_REG CYREG_CM0_IPR4
#define isr_1__INTC_SET_EN_REG CYREG_CM0_ISER
#define isr_1__INTC_SET_PD_REG CYREG_CM0_ISPR

/* Clock_1 */
#define Clock_1__CTRL_REGISTER CYREG_PERI_PCLK_CTL7
#define Clock_1__DIV_ID 0x00000041u
#define Clock_1__DIV_REGISTER CYREG_PERI_DIV_16_CTL1
#define Clock_1__PA_DIV_ID 0x000000FFu

/* LED_Red */
#define LED_Red__0__DR CYREG_GPIO_PRT2_DR
#define LED_Red__0__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define LED_Red__0__DR_INV CYREG_GPIO_PRT2_DR_INV
#define LED_Red__0__DR_SET CYREG_GPIO_PRT2_DR_SET
#define LED_Red__0__HSIOM CYREG_HSIOM_PORT_SEL2
#define LED_Red__0__HSIOM_MASK 0x0F000000u
#define LED_Red__0__HSIOM_SHIFT 24u
#define LED_Red__0__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define LED_Red__0__INTR CYREG_GPIO_PRT2_INTR
#define LED_Red__0__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define LED_Red__0__INTSTAT CYREG_GPIO_PRT2_INTR
#define LED_Red__0__MASK 0x40u
#define LED_Red__0__PA__CFG0 CYREG_UDB_PA2_CFG0
#define LED_Red__0__PA__CFG1 CYREG_UDB_PA2_CFG1
#define LED_Red__0__PA__CFG10 CYREG_UDB_PA2_CFG10
#define LED_Red__0__PA__CFG11 CYREG_UDB_PA2_CFG11
#define LED_Red__0__PA__CFG12 CYREG_UDB_PA2_CFG12
#define LED_Red__0__PA__CFG13 CYREG_UDB_PA2_CFG13
#define LED_Red__0__PA__CFG14 CYREG_UDB_PA2_CFG14
#define LED_Red__0__PA__CFG2 CYREG_UDB_PA2_CFG2
#define LED_Red__0__PA__CFG3 CYREG_UDB_PA2_CFG3
#define LED_Red__0__PA__CFG4 CYREG_UDB_PA2_CFG4
#define LED_Red__0__PA__CFG5 CYREG_UDB_PA2_CFG5
#define LED_Red__0__PA__CFG6 CYREG_UDB_PA2_CFG6
#define LED_Red__0__PA__CFG7 CYREG_UDB_PA2_CFG7
#define LED_Red__0__PA__CFG8 CYREG_UDB_PA2_CFG8
#define LED_Red__0__PA__CFG9 CYREG_UDB_PA2_CFG9
#define LED_Red__0__PC CYREG_GPIO_PRT2_PC
#define LED_Red__0__PC2 CYREG_GPIO_PRT2_PC2
#define LED_Red__0__PORT 2u
#define LED_Red__0__PS CYREG_GPIO_PRT2_PS
#define LED_Red__0__SHIFT 6u
#define LED_Red__DR CYREG_GPIO_PRT2_DR
#define LED_Red__DR_CLR CYREG_GPIO_PRT2_DR_CLR
#define LED_Red__DR_INV CYREG_GPIO_PRT2_DR_INV
#define LED_Red__DR_SET CYREG_GPIO_PRT2_DR_SET
#define LED_Red__INTCFG CYREG_GPIO_PRT2_INTR_CFG
#define LED_Red__INTR CYREG_GPIO_PRT2_INTR
#define LED_Red__INTR_CFG CYREG_GPIO_PRT2_INTR_CFG
#define LED_Red__INTSTAT CYREG_GPIO_PRT2_INTR
#define LED_Red__MASK 0x40u
#define LED_Red__PA__CFG0 CYREG_UDB_PA2_CFG0
#define LED_Red__PA__CFG1 CYREG_UDB_PA2_CFG1
#define LED_Red__PA__CFG10 CYREG_UDB_PA2_CFG10
#define LED_Red__PA__CFG11 CYREG_UDB_PA2_CFG11
#define LED_Red__PA__CFG12 CYREG_UDB_PA2_CFG12
#define LED_Red__PA__CFG13 CYREG_UDB_PA2_CFG13
#define LED_Red__PA__CFG14 CYREG_UDB_PA2_CFG14
#define LED_Red__PA__CFG2 CYREG_UDB_PA2_CFG2
#define LED_Red__PA__CFG3 CYREG_UDB_PA2_CFG3
#define LED_Red__PA__CFG4 CYREG_UDB_PA2_CFG4
#define LED_Red__PA__CFG5 CYREG_UDB_PA2_CFG5
#define LED_Red__PA__CFG6 CYREG_UDB_PA2_CFG6
#define LED_Red__PA__CFG7 CYREG_UDB_PA2_CFG7
#define LED_Red__PA__CFG8 CYREG_UDB_PA2_CFG8
#define LED_Red__PA__CFG9 CYREG_UDB_PA2_CFG9
#define LED_Red__PC CYREG_GPIO_PRT2_PC
#define LED_Red__PC2 CYREG_GPIO_PRT2_PC2
#define LED_Red__PORT 2u
#define LED_Red__PS CYREG_GPIO_PRT2_PS
#define LED_Red__SHIFT 6u

/* Timer_1_cy_m0s8_tcpwm_1 */
#define Timer_1_cy_m0s8_tcpwm_1__CC CYREG_TCPWM_CNT0_CC
#define Timer_1_cy_m0s8_tcpwm_1__CC_BUFF CYREG_TCPWM_CNT0_CC_BUFF
#define Timer_1_cy_m0s8_tcpwm_1__COUNTER CYREG_TCPWM_CNT0_COUNTER
#define Timer_1_cy_m0s8_tcpwm_1__CTRL CYREG_TCPWM_CNT0_CTRL
#define Timer_1_cy_m0s8_tcpwm_1__INTR CYREG_TCPWM_CNT0_INTR
#define Timer_1_cy_m0s8_tcpwm_1__INTR_MASK CYREG_TCPWM_CNT0_INTR_MASK
#define Timer_1_cy_m0s8_tcpwm_1__INTR_MASKED CYREG_TCPWM_CNT0_INTR_MASKED
#define Timer_1_cy_m0s8_tcpwm_1__INTR_SET CYREG_TCPWM_CNT0_INTR_SET
#define Timer_1_cy_m0s8_tcpwm_1__PERIOD CYREG_TCPWM_CNT0_PERIOD
#define Timer_1_cy_m0s8_tcpwm_1__PERIOD_BUFF CYREG_TCPWM_CNT0_PERIOD_BUFF
#define Timer_1_cy_m0s8_tcpwm_1__STATUS CYREG_TCPWM_CNT0_STATUS
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMD CYREG_TCPWM_CMD
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK 0x01u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT 0u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK 0x100u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT 8u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK 0x1000000u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT 24u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK 0x10000u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT 16u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CTRL CYREG_TCPWM_CTRL
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK 0x01u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT 0u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE CYREG_TCPWM_INTR_CAUSE
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK 0x01u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT 0u
#define Timer_1_cy_m0s8_tcpwm_1__TCPWM_NUMBER 0u
#define Timer_1_cy_m0s8_tcpwm_1__TR_CTRL0 CYREG_TCPWM_CNT0_TR_CTRL0
#define Timer_1_cy_m0s8_tcpwm_1__TR_CTRL1 CYREG_TCPWM_CNT0_TR_CTRL1
#define Timer_1_cy_m0s8_tcpwm_1__TR_CTRL2 CYREG_TCPWM_CNT0_TR_CTRL2

/* LED_Blue */
#define LED_Blue__0__DR CYREG_GPIO_PRT3_DR
#define LED_Blue__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define LED_Blue__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define LED_Blue__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define LED_Blue__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define LED_Blue__0__HSIOM_MASK 0xF0000000u
#define LED_Blue__0__HSIOM_SHIFT 28u
#define LED_Blue__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_Blue__0__INTR CYREG_GPIO_PRT3_INTR
#define LED_Blue__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_Blue__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define LED_Blue__0__MASK 0x80u
#define LED_Blue__0__OUT_SEL CYREG_UDB_PA3_CFG10
#define LED_Blue__0__OUT_SEL_SHIFT 14u
#define LED_Blue__0__OUT_SEL_VAL 2u
#define LED_Blue__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define LED_Blue__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define LED_Blue__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define LED_Blue__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define LED_Blue__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define LED_Blue__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define LED_Blue__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define LED_Blue__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define LED_Blue__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define LED_Blue__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define LED_Blue__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define LED_Blue__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define LED_Blue__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define LED_Blue__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define LED_Blue__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define LED_Blue__0__PC CYREG_GPIO_PRT3_PC
#define LED_Blue__0__PC2 CYREG_GPIO_PRT3_PC2
#define LED_Blue__0__PORT 3u
#define LED_Blue__0__PS CYREG_GPIO_PRT3_PS
#define LED_Blue__0__SHIFT 7u
#define LED_Blue__DR CYREG_GPIO_PRT3_DR
#define LED_Blue__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define LED_Blue__DR_INV CYREG_GPIO_PRT3_DR_INV
#define LED_Blue__DR_SET CYREG_GPIO_PRT3_DR_SET
#define LED_Blue__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_Blue__INTR CYREG_GPIO_PRT3_INTR
#define LED_Blue__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_Blue__INTSTAT CYREG_GPIO_PRT3_INTR
#define LED_Blue__MASK 0x80u
#define LED_Blue__PA__CFG0 CYREG_UDB_PA3_CFG0
#define LED_Blue__PA__CFG1 CYREG_UDB_PA3_CFG1
#define LED_Blue__PA__CFG10 CYREG_UDB_PA3_CFG10
#define LED_Blue__PA__CFG11 CYREG_UDB_PA3_CFG11
#define LED_Blue__PA__CFG12 CYREG_UDB_PA3_CFG12
#define LED_Blue__PA__CFG13 CYREG_UDB_PA3_CFG13
#define LED_Blue__PA__CFG14 CYREG_UDB_PA3_CFG14
#define LED_Blue__PA__CFG2 CYREG_UDB_PA3_CFG2
#define LED_Blue__PA__CFG3 CYREG_UDB_PA3_CFG3
#define LED_Blue__PA__CFG4 CYREG_UDB_PA3_CFG4
#define LED_Blue__PA__CFG5 CYREG_UDB_PA3_CFG5
#define LED_Blue__PA__CFG6 CYREG_UDB_PA3_CFG6
#define LED_Blue__PA__CFG7 CYREG_UDB_PA3_CFG7
#define LED_Blue__PA__CFG8 CYREG_UDB_PA3_CFG8
#define LED_Blue__PA__CFG9 CYREG_UDB_PA3_CFG9
#define LED_Blue__PC CYREG_GPIO_PRT3_PC
#define LED_Blue__PC2 CYREG_GPIO_PRT3_PC2
#define LED_Blue__PORT 3u
#define LED_Blue__PS CYREG_GPIO_PRT3_PS
#define LED_Blue__SHIFT 7u

/* LED_Green */
#define LED_Green__0__DR CYREG_GPIO_PRT3_DR
#define LED_Green__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define LED_Green__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define LED_Green__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define LED_Green__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define LED_Green__0__HSIOM_MASK 0x0F000000u
#define LED_Green__0__HSIOM_SHIFT 24u
#define LED_Green__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_Green__0__INTR CYREG_GPIO_PRT3_INTR
#define LED_Green__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_Green__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define LED_Green__0__MASK 0x40u
#define LED_Green__0__OUT_SEL CYREG_UDB_PA3_CFG10
#define LED_Green__0__OUT_SEL_SHIFT 12u
#define LED_Green__0__OUT_SEL_VAL 2u
#define LED_Green__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define LED_Green__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define LED_Green__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define LED_Green__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define LED_Green__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define LED_Green__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define LED_Green__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define LED_Green__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define LED_Green__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define LED_Green__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define LED_Green__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define LED_Green__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define LED_Green__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define LED_Green__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define LED_Green__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define LED_Green__0__PC CYREG_GPIO_PRT3_PC
#define LED_Green__0__PC2 CYREG_GPIO_PRT3_PC2
#define LED_Green__0__PORT 3u
#define LED_Green__0__PS CYREG_GPIO_PRT3_PS
#define LED_Green__0__SHIFT 6u
#define LED_Green__DR CYREG_GPIO_PRT3_DR
#define LED_Green__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define LED_Green__DR_INV CYREG_GPIO_PRT3_DR_INV
#define LED_Green__DR_SET CYREG_GPIO_PRT3_DR_SET
#define LED_Green__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_Green__INTR CYREG_GPIO_PRT3_INTR
#define LED_Green__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_Green__INTSTAT CYREG_GPIO_PRT3_INTR
#define LED_Green__MASK 0x40u
#define LED_Green__PA__CFG0 CYREG_UDB_PA3_CFG0
#define LED_Green__PA__CFG1 CYREG_UDB_PA3_CFG1
#define LED_Green__PA__CFG10 CYREG_UDB_PA3_CFG10
#define LED_Green__PA__CFG11 CYREG_UDB_PA3_CFG11
#define LED_Green__PA__CFG12 CYREG_UDB_PA3_CFG12
#define LED_Green__PA__CFG13 CYREG_UDB_PA3_CFG13
#define LED_Green__PA__CFG14 CYREG_UDB_PA3_CFG14
#define LED_Green__PA__CFG2 CYREG_UDB_PA3_CFG2
#define LED_Green__PA__CFG3 CYREG_UDB_PA3_CFG3
#define LED_Green__PA__CFG4 CYREG_UDB_PA3_CFG4
#define LED_Green__PA__CFG5 CYREG_UDB_PA3_CFG5
#define LED_Green__PA__CFG6 CYREG_UDB_PA3_CFG6
#define LED_Green__PA__CFG7 CYREG_UDB_PA3_CFG7
#define LED_Green__PA__CFG8 CYREG_UDB_PA3_CFG8
#define LED_Green__PA__CFG9 CYREG_UDB_PA3_CFG9
#define LED_Green__PC CYREG_GPIO_PRT3_PC
#define LED_Green__PC2 CYREG_GPIO_PRT3_PC2
#define LED_Green__PORT 3u
#define LED_Green__PS CYREG_GPIO_PRT3_PS
#define LED_Green__SHIFT 6u

/* Miscellaneous */
#define CY_PROJECT_NAME "Design01"
#define CY_VERSION "PSoC Creator  3.3 CP3"
#define CYDEV_BANDGAP_VOLTAGE 1.024
#define CYDEV_BCLK__HFCLK__HZ 48000000U
#define CYDEV_BCLK__HFCLK__KHZ 48000U
#define CYDEV_BCLK__HFCLK__MHZ 48U
#define CYDEV_BCLK__SYSCLK__HZ 48000000U
#define CYDEV_BCLK__SYSCLK__KHZ 48000U
#define CYDEV_BCLK__SYSCLK__MHZ 48U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 19u
#define CYDEV_CHIP_DIE_PSOC4A 11u
#define CYDEV_CHIP_DIE_PSOC5LP 18u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x0E34119Eu
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 11u
#define CYDEV_CHIP_MEMBER_4C 16u
#define CYDEV_CHIP_MEMBER_4D 7u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 12u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 10u
#define CYDEV_CHIP_MEMBER_4I 15u
#define CYDEV_CHIP_MEMBER_4J 8u
#define CYDEV_CHIP_MEMBER_4K 9u
#define CYDEV_CHIP_MEMBER_4L 14u
#define CYDEV_CHIP_MEMBER_4M 13u
#define CYDEV_CHIP_MEMBER_4N 6u
#define CYDEV_CHIP_MEMBER_4O 5u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 18u
#define CYDEV_CHIP_MEMBER_5B 17u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4F
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4F_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 10u
#define CYDEV_DFT_SELECT_CLK1 11u
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_VDDR 3.3
#define CYDEV_VDDR_MV 3300
#define CYDEV_WDT_GENERATE_ISR 1u
#define CYIPBLOCK_m0s8bless_VERSION 1
#define CYIPBLOCK_m0s8cpussv2_VERSION 1
#define CYIPBLOCK_m0s8csd_VERSION 1
#define CYIPBLOCK_m0s8ioss_VERSION 1
#define CYIPBLOCK_m0s8lcd_VERSION 2
#define CYIPBLOCK_m0s8lpcomp_VERSION 2
#define CYIPBLOCK_m0s8peri_VERSION 1
#define CYIPBLOCK_m0s8scb_VERSION 2
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 2
#define CYIPBLOCK_m0s8udbif_VERSION 1
#define CYIPBLOCK_s8pass4al_VERSION 1
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
