    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv_trm.inc

; SCB_1_rx
SCB_1_rx__0__DR EQU CYREG_GPIO_PRT1_DR
SCB_1_rx__0__DR_CLR EQU CYREG_GPIO_PRT1_DR_CLR
SCB_1_rx__0__DR_INV EQU CYREG_GPIO_PRT1_DR_INV
SCB_1_rx__0__DR_SET EQU CYREG_GPIO_PRT1_DR_SET
SCB_1_rx__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
SCB_1_rx__0__HSIOM_GPIO EQU 0
SCB_1_rx__0__HSIOM_I2C EQU 14
SCB_1_rx__0__HSIOM_I2C_SDA EQU 14
SCB_1_rx__0__HSIOM_MASK EQU 0x000F0000
SCB_1_rx__0__HSIOM_SHIFT EQU 16
SCB_1_rx__0__HSIOM_SPI EQU 15
SCB_1_rx__0__HSIOM_SPI_MOSI EQU 15
SCB_1_rx__0__HSIOM_UART EQU 9
SCB_1_rx__0__HSIOM_UART_RX EQU 9
SCB_1_rx__0__INTCFG EQU CYREG_GPIO_PRT1_INTR_CFG
SCB_1_rx__0__INTR EQU CYREG_GPIO_PRT1_INTR
SCB_1_rx__0__INTR_CFG EQU CYREG_GPIO_PRT1_INTR_CFG
SCB_1_rx__0__INTSTAT EQU CYREG_GPIO_PRT1_INTR
SCB_1_rx__0__MASK EQU 0x10
SCB_1_rx__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
SCB_1_rx__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
SCB_1_rx__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
SCB_1_rx__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
SCB_1_rx__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
SCB_1_rx__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
SCB_1_rx__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
SCB_1_rx__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
SCB_1_rx__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
SCB_1_rx__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
SCB_1_rx__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
SCB_1_rx__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
SCB_1_rx__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
SCB_1_rx__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
SCB_1_rx__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
SCB_1_rx__0__PC EQU CYREG_GPIO_PRT1_PC
SCB_1_rx__0__PC2 EQU CYREG_GPIO_PRT1_PC2
SCB_1_rx__0__PORT EQU 1
SCB_1_rx__0__PS EQU CYREG_GPIO_PRT1_PS
SCB_1_rx__0__SHIFT EQU 4
SCB_1_rx__DR EQU CYREG_GPIO_PRT1_DR
SCB_1_rx__DR_CLR EQU CYREG_GPIO_PRT1_DR_CLR
SCB_1_rx__DR_INV EQU CYREG_GPIO_PRT1_DR_INV
SCB_1_rx__DR_SET EQU CYREG_GPIO_PRT1_DR_SET
SCB_1_rx__INTCFG EQU CYREG_GPIO_PRT1_INTR_CFG
SCB_1_rx__INTR EQU CYREG_GPIO_PRT1_INTR
SCB_1_rx__INTR_CFG EQU CYREG_GPIO_PRT1_INTR_CFG
SCB_1_rx__INTSTAT EQU CYREG_GPIO_PRT1_INTR
SCB_1_rx__MASK EQU 0x10
SCB_1_rx__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
SCB_1_rx__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
SCB_1_rx__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
SCB_1_rx__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
SCB_1_rx__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
SCB_1_rx__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
SCB_1_rx__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
SCB_1_rx__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
SCB_1_rx__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
SCB_1_rx__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
SCB_1_rx__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
SCB_1_rx__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
SCB_1_rx__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
SCB_1_rx__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
SCB_1_rx__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
SCB_1_rx__PC EQU CYREG_GPIO_PRT1_PC
SCB_1_rx__PC2 EQU CYREG_GPIO_PRT1_PC2
SCB_1_rx__PORT EQU 1
SCB_1_rx__PS EQU CYREG_GPIO_PRT1_PS
SCB_1_rx__SHIFT EQU 4

; SCB_1_SCB
SCB_1_SCB__CTRL EQU CYREG_SCB0_CTRL
SCB_1_SCB__EZ_DATA0 EQU CYREG_SCB0_EZ_DATA0
SCB_1_SCB__EZ_DATA1 EQU CYREG_SCB0_EZ_DATA1
SCB_1_SCB__EZ_DATA10 EQU CYREG_SCB0_EZ_DATA10
SCB_1_SCB__EZ_DATA11 EQU CYREG_SCB0_EZ_DATA11
SCB_1_SCB__EZ_DATA12 EQU CYREG_SCB0_EZ_DATA12
SCB_1_SCB__EZ_DATA13 EQU CYREG_SCB0_EZ_DATA13
SCB_1_SCB__EZ_DATA14 EQU CYREG_SCB0_EZ_DATA14
SCB_1_SCB__EZ_DATA15 EQU CYREG_SCB0_EZ_DATA15
SCB_1_SCB__EZ_DATA16 EQU CYREG_SCB0_EZ_DATA16
SCB_1_SCB__EZ_DATA17 EQU CYREG_SCB0_EZ_DATA17
SCB_1_SCB__EZ_DATA18 EQU CYREG_SCB0_EZ_DATA18
SCB_1_SCB__EZ_DATA19 EQU CYREG_SCB0_EZ_DATA19
SCB_1_SCB__EZ_DATA2 EQU CYREG_SCB0_EZ_DATA2
SCB_1_SCB__EZ_DATA20 EQU CYREG_SCB0_EZ_DATA20
SCB_1_SCB__EZ_DATA21 EQU CYREG_SCB0_EZ_DATA21
SCB_1_SCB__EZ_DATA22 EQU CYREG_SCB0_EZ_DATA22
SCB_1_SCB__EZ_DATA23 EQU CYREG_SCB0_EZ_DATA23
SCB_1_SCB__EZ_DATA24 EQU CYREG_SCB0_EZ_DATA24
SCB_1_SCB__EZ_DATA25 EQU CYREG_SCB0_EZ_DATA25
SCB_1_SCB__EZ_DATA26 EQU CYREG_SCB0_EZ_DATA26
SCB_1_SCB__EZ_DATA27 EQU CYREG_SCB0_EZ_DATA27
SCB_1_SCB__EZ_DATA28 EQU CYREG_SCB0_EZ_DATA28
SCB_1_SCB__EZ_DATA29 EQU CYREG_SCB0_EZ_DATA29
SCB_1_SCB__EZ_DATA3 EQU CYREG_SCB0_EZ_DATA3
SCB_1_SCB__EZ_DATA30 EQU CYREG_SCB0_EZ_DATA30
SCB_1_SCB__EZ_DATA31 EQU CYREG_SCB0_EZ_DATA31
SCB_1_SCB__EZ_DATA4 EQU CYREG_SCB0_EZ_DATA4
SCB_1_SCB__EZ_DATA5 EQU CYREG_SCB0_EZ_DATA5
SCB_1_SCB__EZ_DATA6 EQU CYREG_SCB0_EZ_DATA6
SCB_1_SCB__EZ_DATA7 EQU CYREG_SCB0_EZ_DATA7
SCB_1_SCB__EZ_DATA8 EQU CYREG_SCB0_EZ_DATA8
SCB_1_SCB__EZ_DATA9 EQU CYREG_SCB0_EZ_DATA9
SCB_1_SCB__I2C_CFG EQU CYREG_SCB0_I2C_CFG
SCB_1_SCB__I2C_CTRL EQU CYREG_SCB0_I2C_CTRL
SCB_1_SCB__I2C_M_CMD EQU CYREG_SCB0_I2C_M_CMD
SCB_1_SCB__I2C_S_CMD EQU CYREG_SCB0_I2C_S_CMD
SCB_1_SCB__I2C_STATUS EQU CYREG_SCB0_I2C_STATUS
SCB_1_SCB__INTR_CAUSE EQU CYREG_SCB0_INTR_CAUSE
SCB_1_SCB__INTR_I2C_EC EQU CYREG_SCB0_INTR_I2C_EC
SCB_1_SCB__INTR_I2C_EC_MASK EQU CYREG_SCB0_INTR_I2C_EC_MASK
SCB_1_SCB__INTR_I2C_EC_MASKED EQU CYREG_SCB0_INTR_I2C_EC_MASKED
SCB_1_SCB__INTR_M EQU CYREG_SCB0_INTR_M
SCB_1_SCB__INTR_M_MASK EQU CYREG_SCB0_INTR_M_MASK
SCB_1_SCB__INTR_M_MASKED EQU CYREG_SCB0_INTR_M_MASKED
SCB_1_SCB__INTR_M_SET EQU CYREG_SCB0_INTR_M_SET
SCB_1_SCB__INTR_RX EQU CYREG_SCB0_INTR_RX
SCB_1_SCB__INTR_RX_MASK EQU CYREG_SCB0_INTR_RX_MASK
SCB_1_SCB__INTR_RX_MASKED EQU CYREG_SCB0_INTR_RX_MASKED
SCB_1_SCB__INTR_RX_SET EQU CYREG_SCB0_INTR_RX_SET
SCB_1_SCB__INTR_S EQU CYREG_SCB0_INTR_S
SCB_1_SCB__INTR_S_MASK EQU CYREG_SCB0_INTR_S_MASK
SCB_1_SCB__INTR_S_MASKED EQU CYREG_SCB0_INTR_S_MASKED
SCB_1_SCB__INTR_S_SET EQU CYREG_SCB0_INTR_S_SET
SCB_1_SCB__INTR_SPI_EC EQU CYREG_SCB0_INTR_SPI_EC
SCB_1_SCB__INTR_SPI_EC_MASK EQU CYREG_SCB0_INTR_SPI_EC_MASK
SCB_1_SCB__INTR_SPI_EC_MASKED EQU CYREG_SCB0_INTR_SPI_EC_MASKED
SCB_1_SCB__INTR_TX EQU CYREG_SCB0_INTR_TX
SCB_1_SCB__INTR_TX_MASK EQU CYREG_SCB0_INTR_TX_MASK
SCB_1_SCB__INTR_TX_MASKED EQU CYREG_SCB0_INTR_TX_MASKED
SCB_1_SCB__INTR_TX_SET EQU CYREG_SCB0_INTR_TX_SET
SCB_1_SCB__RX_CTRL EQU CYREG_SCB0_RX_CTRL
SCB_1_SCB__RX_FIFO_CTRL EQU CYREG_SCB0_RX_FIFO_CTRL
SCB_1_SCB__RX_FIFO_RD EQU CYREG_SCB0_RX_FIFO_RD
SCB_1_SCB__RX_FIFO_RD_SILENT EQU CYREG_SCB0_RX_FIFO_RD_SILENT
SCB_1_SCB__RX_FIFO_STATUS EQU CYREG_SCB0_RX_FIFO_STATUS
SCB_1_SCB__RX_MATCH EQU CYREG_SCB0_RX_MATCH
SCB_1_SCB__SPI_CTRL EQU CYREG_SCB0_SPI_CTRL
SCB_1_SCB__SPI_STATUS EQU CYREG_SCB0_SPI_STATUS
SCB_1_SCB__SS0_POSISTION EQU 0
SCB_1_SCB__SS1_POSISTION EQU 1
SCB_1_SCB__SS2_POSISTION EQU 2
SCB_1_SCB__SS3_POSISTION EQU 3
SCB_1_SCB__STATUS EQU CYREG_SCB0_STATUS
SCB_1_SCB__TX_CTRL EQU CYREG_SCB0_TX_CTRL
SCB_1_SCB__TX_FIFO_CTRL EQU CYREG_SCB0_TX_FIFO_CTRL
SCB_1_SCB__TX_FIFO_STATUS EQU CYREG_SCB0_TX_FIFO_STATUS
SCB_1_SCB__TX_FIFO_WR EQU CYREG_SCB0_TX_FIFO_WR
SCB_1_SCB__UART_CTRL EQU CYREG_SCB0_UART_CTRL
SCB_1_SCB__UART_FLOW_CTRL EQU CYREG_SCB0_UART_FLOW_CTRL
SCB_1_SCB__UART_RX_CTRL EQU CYREG_SCB0_UART_RX_CTRL
SCB_1_SCB__UART_RX_STATUS EQU CYREG_SCB0_UART_RX_STATUS
SCB_1_SCB__UART_TX_CTRL EQU CYREG_SCB0_UART_TX_CTRL

; SCB_1_SCBCLK
SCB_1_SCBCLK__CTRL_REGISTER EQU CYREG_PERI_PCLK_CTL1
SCB_1_SCBCLK__DIV_ID EQU 0x00000040
SCB_1_SCBCLK__DIV_REGISTER EQU CYREG_PERI_DIV_16_CTL0
SCB_1_SCBCLK__PA_DIV_ID EQU 0x000000FF

; SCB_1_tx
SCB_1_tx__0__DR EQU CYREG_GPIO_PRT1_DR
SCB_1_tx__0__DR_CLR EQU CYREG_GPIO_PRT1_DR_CLR
SCB_1_tx__0__DR_INV EQU CYREG_GPIO_PRT1_DR_INV
SCB_1_tx__0__DR_SET EQU CYREG_GPIO_PRT1_DR_SET
SCB_1_tx__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
SCB_1_tx__0__HSIOM_GPIO EQU 0
SCB_1_tx__0__HSIOM_I2C EQU 14
SCB_1_tx__0__HSIOM_I2C_SCL EQU 14
SCB_1_tx__0__HSIOM_MASK EQU 0x00F00000
SCB_1_tx__0__HSIOM_SHIFT EQU 20
SCB_1_tx__0__HSIOM_SPI EQU 15
SCB_1_tx__0__HSIOM_SPI_MISO EQU 15
SCB_1_tx__0__HSIOM_UART EQU 9
SCB_1_tx__0__HSIOM_UART_TX EQU 9
SCB_1_tx__0__INTCFG EQU CYREG_GPIO_PRT1_INTR_CFG
SCB_1_tx__0__INTR EQU CYREG_GPIO_PRT1_INTR
SCB_1_tx__0__INTR_CFG EQU CYREG_GPIO_PRT1_INTR_CFG
SCB_1_tx__0__INTSTAT EQU CYREG_GPIO_PRT1_INTR
SCB_1_tx__0__MASK EQU 0x20
SCB_1_tx__0__OUT_SEL EQU CYREG_UDB_PA1_CFG10
SCB_1_tx__0__OUT_SEL_SHIFT EQU 10
SCB_1_tx__0__OUT_SEL_VAL EQU -1
SCB_1_tx__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
SCB_1_tx__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
SCB_1_tx__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
SCB_1_tx__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
SCB_1_tx__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
SCB_1_tx__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
SCB_1_tx__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
SCB_1_tx__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
SCB_1_tx__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
SCB_1_tx__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
SCB_1_tx__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
SCB_1_tx__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
SCB_1_tx__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
SCB_1_tx__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
SCB_1_tx__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
SCB_1_tx__0__PC EQU CYREG_GPIO_PRT1_PC
SCB_1_tx__0__PC2 EQU CYREG_GPIO_PRT1_PC2
SCB_1_tx__0__PORT EQU 1
SCB_1_tx__0__PS EQU CYREG_GPIO_PRT1_PS
SCB_1_tx__0__SHIFT EQU 5
SCB_1_tx__DR EQU CYREG_GPIO_PRT1_DR
SCB_1_tx__DR_CLR EQU CYREG_GPIO_PRT1_DR_CLR
SCB_1_tx__DR_INV EQU CYREG_GPIO_PRT1_DR_INV
SCB_1_tx__DR_SET EQU CYREG_GPIO_PRT1_DR_SET
SCB_1_tx__INTCFG EQU CYREG_GPIO_PRT1_INTR_CFG
SCB_1_tx__INTR EQU CYREG_GPIO_PRT1_INTR
SCB_1_tx__INTR_CFG EQU CYREG_GPIO_PRT1_INTR_CFG
SCB_1_tx__INTSTAT EQU CYREG_GPIO_PRT1_INTR
SCB_1_tx__MASK EQU 0x20
SCB_1_tx__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
SCB_1_tx__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
SCB_1_tx__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
SCB_1_tx__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
SCB_1_tx__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
SCB_1_tx__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
SCB_1_tx__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
SCB_1_tx__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
SCB_1_tx__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
SCB_1_tx__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
SCB_1_tx__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
SCB_1_tx__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
SCB_1_tx__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
SCB_1_tx__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
SCB_1_tx__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
SCB_1_tx__PC EQU CYREG_GPIO_PRT1_PC
SCB_1_tx__PC2 EQU CYREG_GPIO_PRT1_PC2
SCB_1_tx__PORT EQU 1
SCB_1_tx__PS EQU CYREG_GPIO_PRT1_PS
SCB_1_tx__SHIFT EQU 5

; isr_1
isr_1__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
isr_1__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
isr_1__INTC_MASK EQU 0x20000
isr_1__INTC_NUMBER EQU 17
isr_1__INTC_PRIOR_MASK EQU 0xC000
isr_1__INTC_PRIOR_NUM EQU 3
isr_1__INTC_PRIOR_REG EQU CYREG_CM0_IPR4
isr_1__INTC_SET_EN_REG EQU CYREG_CM0_ISER
isr_1__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

; Clock_1
Clock_1__CTRL_REGISTER EQU CYREG_PERI_PCLK_CTL7
Clock_1__DIV_ID EQU 0x00000041
Clock_1__DIV_REGISTER EQU CYREG_PERI_DIV_16_CTL1
Clock_1__PA_DIV_ID EQU 0x000000FF

; LED_Red
LED_Red__0__DR EQU CYREG_GPIO_PRT2_DR
LED_Red__0__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
LED_Red__0__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
LED_Red__0__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
LED_Red__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
LED_Red__0__HSIOM_MASK EQU 0x0F000000
LED_Red__0__HSIOM_SHIFT EQU 24
LED_Red__0__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
LED_Red__0__INTR EQU CYREG_GPIO_PRT2_INTR
LED_Red__0__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
LED_Red__0__INTSTAT EQU CYREG_GPIO_PRT2_INTR
LED_Red__0__MASK EQU 0x40
LED_Red__0__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
LED_Red__0__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
LED_Red__0__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
LED_Red__0__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
LED_Red__0__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
LED_Red__0__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
LED_Red__0__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
LED_Red__0__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
LED_Red__0__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
LED_Red__0__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
LED_Red__0__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
LED_Red__0__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
LED_Red__0__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
LED_Red__0__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
LED_Red__0__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
LED_Red__0__PC EQU CYREG_GPIO_PRT2_PC
LED_Red__0__PC2 EQU CYREG_GPIO_PRT2_PC2
LED_Red__0__PORT EQU 2
LED_Red__0__PS EQU CYREG_GPIO_PRT2_PS
LED_Red__0__SHIFT EQU 6
LED_Red__DR EQU CYREG_GPIO_PRT2_DR
LED_Red__DR_CLR EQU CYREG_GPIO_PRT2_DR_CLR
LED_Red__DR_INV EQU CYREG_GPIO_PRT2_DR_INV
LED_Red__DR_SET EQU CYREG_GPIO_PRT2_DR_SET
LED_Red__INTCFG EQU CYREG_GPIO_PRT2_INTR_CFG
LED_Red__INTR EQU CYREG_GPIO_PRT2_INTR
LED_Red__INTR_CFG EQU CYREG_GPIO_PRT2_INTR_CFG
LED_Red__INTSTAT EQU CYREG_GPIO_PRT2_INTR
LED_Red__MASK EQU 0x40
LED_Red__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
LED_Red__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
LED_Red__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
LED_Red__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
LED_Red__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
LED_Red__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
LED_Red__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
LED_Red__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
LED_Red__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
LED_Red__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
LED_Red__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
LED_Red__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
LED_Red__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
LED_Red__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
LED_Red__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
LED_Red__PC EQU CYREG_GPIO_PRT2_PC
LED_Red__PC2 EQU CYREG_GPIO_PRT2_PC2
LED_Red__PORT EQU 2
LED_Red__PS EQU CYREG_GPIO_PRT2_PS
LED_Red__SHIFT EQU 6

; Timer_1_cy_m0s8_tcpwm_1
Timer_1_cy_m0s8_tcpwm_1__CC EQU CYREG_TCPWM_CNT0_CC
Timer_1_cy_m0s8_tcpwm_1__CC_BUFF EQU CYREG_TCPWM_CNT0_CC_BUFF
Timer_1_cy_m0s8_tcpwm_1__COUNTER EQU CYREG_TCPWM_CNT0_COUNTER
Timer_1_cy_m0s8_tcpwm_1__CTRL EQU CYREG_TCPWM_CNT0_CTRL
Timer_1_cy_m0s8_tcpwm_1__INTR EQU CYREG_TCPWM_CNT0_INTR
Timer_1_cy_m0s8_tcpwm_1__INTR_MASK EQU CYREG_TCPWM_CNT0_INTR_MASK
Timer_1_cy_m0s8_tcpwm_1__INTR_MASKED EQU CYREG_TCPWM_CNT0_INTR_MASKED
Timer_1_cy_m0s8_tcpwm_1__INTR_SET EQU CYREG_TCPWM_CNT0_INTR_SET
Timer_1_cy_m0s8_tcpwm_1__PERIOD EQU CYREG_TCPWM_CNT0_PERIOD
Timer_1_cy_m0s8_tcpwm_1__PERIOD_BUFF EQU CYREG_TCPWM_CNT0_PERIOD_BUFF
Timer_1_cy_m0s8_tcpwm_1__STATUS EQU CYREG_TCPWM_CNT0_STATUS
Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMD EQU CYREG_TCPWM_CMD
Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK EQU 0x01
Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT EQU 0
Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK EQU 0x100
Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT EQU 8
Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK EQU 0x1000000
Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT EQU 24
Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK EQU 0x10000
Timer_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT EQU 16
Timer_1_cy_m0s8_tcpwm_1__TCPWM_CTRL EQU CYREG_TCPWM_CTRL
Timer_1_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK EQU 0x01
Timer_1_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT EQU 0
Timer_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE EQU CYREG_TCPWM_INTR_CAUSE
Timer_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK EQU 0x01
Timer_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT EQU 0
Timer_1_cy_m0s8_tcpwm_1__TCPWM_NUMBER EQU 0
Timer_1_cy_m0s8_tcpwm_1__TR_CTRL0 EQU CYREG_TCPWM_CNT0_TR_CTRL0
Timer_1_cy_m0s8_tcpwm_1__TR_CTRL1 EQU CYREG_TCPWM_CNT0_TR_CTRL1
Timer_1_cy_m0s8_tcpwm_1__TR_CTRL2 EQU CYREG_TCPWM_CNT0_TR_CTRL2

; LED_Blue
LED_Blue__0__DR EQU CYREG_GPIO_PRT3_DR
LED_Blue__0__DR_CLR EQU CYREG_GPIO_PRT3_DR_CLR
LED_Blue__0__DR_INV EQU CYREG_GPIO_PRT3_DR_INV
LED_Blue__0__DR_SET EQU CYREG_GPIO_PRT3_DR_SET
LED_Blue__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
LED_Blue__0__HSIOM_MASK EQU 0xF0000000
LED_Blue__0__HSIOM_SHIFT EQU 28
LED_Blue__0__INTCFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_Blue__0__INTR EQU CYREG_GPIO_PRT3_INTR
LED_Blue__0__INTR_CFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_Blue__0__INTSTAT EQU CYREG_GPIO_PRT3_INTR
LED_Blue__0__MASK EQU 0x80
LED_Blue__0__OUT_SEL EQU CYREG_UDB_PA3_CFG10
LED_Blue__0__OUT_SEL_SHIFT EQU 14
LED_Blue__0__OUT_SEL_VAL EQU 2
LED_Blue__0__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
LED_Blue__0__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
LED_Blue__0__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
LED_Blue__0__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
LED_Blue__0__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
LED_Blue__0__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
LED_Blue__0__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
LED_Blue__0__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
LED_Blue__0__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
LED_Blue__0__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
LED_Blue__0__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
LED_Blue__0__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
LED_Blue__0__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
LED_Blue__0__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
LED_Blue__0__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
LED_Blue__0__PC EQU CYREG_GPIO_PRT3_PC
LED_Blue__0__PC2 EQU CYREG_GPIO_PRT3_PC2
LED_Blue__0__PORT EQU 3
LED_Blue__0__PS EQU CYREG_GPIO_PRT3_PS
LED_Blue__0__SHIFT EQU 7
LED_Blue__DR EQU CYREG_GPIO_PRT3_DR
LED_Blue__DR_CLR EQU CYREG_GPIO_PRT3_DR_CLR
LED_Blue__DR_INV EQU CYREG_GPIO_PRT3_DR_INV
LED_Blue__DR_SET EQU CYREG_GPIO_PRT3_DR_SET
LED_Blue__INTCFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_Blue__INTR EQU CYREG_GPIO_PRT3_INTR
LED_Blue__INTR_CFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_Blue__INTSTAT EQU CYREG_GPIO_PRT3_INTR
LED_Blue__MASK EQU 0x80
LED_Blue__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
LED_Blue__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
LED_Blue__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
LED_Blue__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
LED_Blue__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
LED_Blue__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
LED_Blue__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
LED_Blue__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
LED_Blue__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
LED_Blue__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
LED_Blue__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
LED_Blue__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
LED_Blue__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
LED_Blue__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
LED_Blue__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
LED_Blue__PC EQU CYREG_GPIO_PRT3_PC
LED_Blue__PC2 EQU CYREG_GPIO_PRT3_PC2
LED_Blue__PORT EQU 3
LED_Blue__PS EQU CYREG_GPIO_PRT3_PS
LED_Blue__SHIFT EQU 7

; LED_Green
LED_Green__0__DR EQU CYREG_GPIO_PRT3_DR
LED_Green__0__DR_CLR EQU CYREG_GPIO_PRT3_DR_CLR
LED_Green__0__DR_INV EQU CYREG_GPIO_PRT3_DR_INV
LED_Green__0__DR_SET EQU CYREG_GPIO_PRT3_DR_SET
LED_Green__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
LED_Green__0__HSIOM_MASK EQU 0x0F000000
LED_Green__0__HSIOM_SHIFT EQU 24
LED_Green__0__INTCFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_Green__0__INTR EQU CYREG_GPIO_PRT3_INTR
LED_Green__0__INTR_CFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_Green__0__INTSTAT EQU CYREG_GPIO_PRT3_INTR
LED_Green__0__MASK EQU 0x40
LED_Green__0__OUT_SEL EQU CYREG_UDB_PA3_CFG10
LED_Green__0__OUT_SEL_SHIFT EQU 12
LED_Green__0__OUT_SEL_VAL EQU 2
LED_Green__0__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
LED_Green__0__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
LED_Green__0__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
LED_Green__0__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
LED_Green__0__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
LED_Green__0__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
LED_Green__0__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
LED_Green__0__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
LED_Green__0__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
LED_Green__0__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
LED_Green__0__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
LED_Green__0__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
LED_Green__0__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
LED_Green__0__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
LED_Green__0__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
LED_Green__0__PC EQU CYREG_GPIO_PRT3_PC
LED_Green__0__PC2 EQU CYREG_GPIO_PRT3_PC2
LED_Green__0__PORT EQU 3
LED_Green__0__PS EQU CYREG_GPIO_PRT3_PS
LED_Green__0__SHIFT EQU 6
LED_Green__DR EQU CYREG_GPIO_PRT3_DR
LED_Green__DR_CLR EQU CYREG_GPIO_PRT3_DR_CLR
LED_Green__DR_INV EQU CYREG_GPIO_PRT3_DR_INV
LED_Green__DR_SET EQU CYREG_GPIO_PRT3_DR_SET
LED_Green__INTCFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_Green__INTR EQU CYREG_GPIO_PRT3_INTR
LED_Green__INTR_CFG EQU CYREG_GPIO_PRT3_INTR_CFG
LED_Green__INTSTAT EQU CYREG_GPIO_PRT3_INTR
LED_Green__MASK EQU 0x40
LED_Green__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
LED_Green__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
LED_Green__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
LED_Green__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
LED_Green__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
LED_Green__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
LED_Green__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
LED_Green__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
LED_Green__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
LED_Green__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
LED_Green__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
LED_Green__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
LED_Green__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
LED_Green__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
LED_Green__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
LED_Green__PC EQU CYREG_GPIO_PRT3_PC
LED_Green__PC2 EQU CYREG_GPIO_PRT3_PC2
LED_Green__PORT EQU 3
LED_Green__PS EQU CYREG_GPIO_PRT3_PS
LED_Green__SHIFT EQU 6

; Miscellaneous
CYDEV_BCLK__HFCLK__HZ EQU 48000000
CYDEV_BCLK__HFCLK__KHZ EQU 48000
CYDEV_BCLK__HFCLK__MHZ EQU 48
CYDEV_BCLK__SYSCLK__HZ EQU 48000000
CYDEV_BCLK__SYSCLK__KHZ EQU 48000
CYDEV_BCLK__SYSCLK__MHZ EQU 48
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 19
CYDEV_CHIP_DIE_PSOC4A EQU 11
CYDEV_CHIP_DIE_PSOC5LP EQU 18
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x0E34119E
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 11
CYDEV_CHIP_MEMBER_4C EQU 16
CYDEV_CHIP_MEMBER_4D EQU 7
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 12
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 10
CYDEV_CHIP_MEMBER_4I EQU 15
CYDEV_CHIP_MEMBER_4J EQU 8
CYDEV_CHIP_MEMBER_4K EQU 9
CYDEV_CHIP_MEMBER_4L EQU 14
CYDEV_CHIP_MEMBER_4M EQU 13
CYDEV_CHIP_MEMBER_4N EQU 6
CYDEV_CHIP_MEMBER_4O EQU 5
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 18
CYDEV_CHIP_MEMBER_5B EQU 17
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4F
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4F_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DFT_SELECT_CLK0 EQU 10
CYDEV_DFT_SELECT_CLK1 EQU 11
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_IMO_TRIMMED_BY_USB EQU 0
CYDEV_IMO_TRIMMED_BY_WCO EQU 0
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYDEV_VDDR_MV EQU 3300
CYDEV_WDT_GENERATE_ISR EQU 1
CYIPBLOCK_m0s8bless_VERSION EQU 1
CYIPBLOCK_m0s8cpussv2_VERSION EQU 1
CYIPBLOCK_m0s8csd_VERSION EQU 1
CYIPBLOCK_m0s8ioss_VERSION EQU 1
CYIPBLOCK_m0s8lcd_VERSION EQU 2
CYIPBLOCK_m0s8lpcomp_VERSION EQU 2
CYIPBLOCK_m0s8peri_VERSION EQU 1
CYIPBLOCK_m0s8scb_VERSION EQU 2
CYIPBLOCK_m0s8srssv2_VERSION EQU 1
CYIPBLOCK_m0s8tcpwm_VERSION EQU 2
CYIPBLOCK_m0s8udbif_VERSION EQU 1
CYIPBLOCK_s8pass4al_VERSION EQU 1
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END
