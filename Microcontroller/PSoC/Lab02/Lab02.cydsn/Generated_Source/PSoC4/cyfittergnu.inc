.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu_trm.inc"

/* PWM_1_cy_m0s8_tcpwm_1 */
.set PWM_1_cy_m0s8_tcpwm_1__CC, CYREG_TCPWM_CNT0_CC
.set PWM_1_cy_m0s8_tcpwm_1__CC_BUFF, CYREG_TCPWM_CNT0_CC_BUFF
.set PWM_1_cy_m0s8_tcpwm_1__COUNTER, CYREG_TCPWM_CNT0_COUNTER
.set PWM_1_cy_m0s8_tcpwm_1__CTRL, CYREG_TCPWM_CNT0_CTRL
.set PWM_1_cy_m0s8_tcpwm_1__INTR, CYREG_TCPWM_CNT0_INTR
.set PWM_1_cy_m0s8_tcpwm_1__INTR_MASK, CYREG_TCPWM_CNT0_INTR_MASK
.set PWM_1_cy_m0s8_tcpwm_1__INTR_MASKED, CYREG_TCPWM_CNT0_INTR_MASKED
.set PWM_1_cy_m0s8_tcpwm_1__INTR_SET, CYREG_TCPWM_CNT0_INTR_SET
.set PWM_1_cy_m0s8_tcpwm_1__PERIOD, CYREG_TCPWM_CNT0_PERIOD
.set PWM_1_cy_m0s8_tcpwm_1__PERIOD_BUFF, CYREG_TCPWM_CNT0_PERIOD_BUFF
.set PWM_1_cy_m0s8_tcpwm_1__STATUS, CYREG_TCPWM_CNT0_STATUS
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMD, CYREG_TCPWM_CMD
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK, 0x01
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT, 0
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK, 0x100
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT, 8
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK, 0x1000000
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT, 24
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK, 0x10000
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT, 16
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CTRL, CYREG_TCPWM_CTRL
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK, 0x01
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT, 0
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE, CYREG_TCPWM_INTR_CAUSE
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK, 0x01
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT, 0
.set PWM_1_cy_m0s8_tcpwm_1__TCPWM_NUMBER, 0
.set PWM_1_cy_m0s8_tcpwm_1__TR_CTRL0, CYREG_TCPWM_CNT0_TR_CTRL0
.set PWM_1_cy_m0s8_tcpwm_1__TR_CTRL1, CYREG_TCPWM_CNT0_TR_CTRL1
.set PWM_1_cy_m0s8_tcpwm_1__TR_CTRL2, CYREG_TCPWM_CNT0_TR_CTRL2

/* Pin_1 */
.set Pin_1__0__DR, CYREG_GPIO_PRT2_DR
.set Pin_1__0__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set Pin_1__0__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set Pin_1__0__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set Pin_1__0__HSIOM, CYREG_HSIOM_PORT_SEL2
.set Pin_1__0__HSIOM_MASK, 0xF0000000
.set Pin_1__0__HSIOM_SHIFT, 28
.set Pin_1__0__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set Pin_1__0__INTR, CYREG_GPIO_PRT2_INTR
.set Pin_1__0__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set Pin_1__0__INTSTAT, CYREG_GPIO_PRT2_INTR
.set Pin_1__0__MASK, 0x80
.set Pin_1__0__PA__CFG0, CYREG_UDB_PA2_CFG0
.set Pin_1__0__PA__CFG1, CYREG_UDB_PA2_CFG1
.set Pin_1__0__PA__CFG10, CYREG_UDB_PA2_CFG10
.set Pin_1__0__PA__CFG11, CYREG_UDB_PA2_CFG11
.set Pin_1__0__PA__CFG12, CYREG_UDB_PA2_CFG12
.set Pin_1__0__PA__CFG13, CYREG_UDB_PA2_CFG13
.set Pin_1__0__PA__CFG14, CYREG_UDB_PA2_CFG14
.set Pin_1__0__PA__CFG2, CYREG_UDB_PA2_CFG2
.set Pin_1__0__PA__CFG3, CYREG_UDB_PA2_CFG3
.set Pin_1__0__PA__CFG4, CYREG_UDB_PA2_CFG4
.set Pin_1__0__PA__CFG5, CYREG_UDB_PA2_CFG5
.set Pin_1__0__PA__CFG6, CYREG_UDB_PA2_CFG6
.set Pin_1__0__PA__CFG7, CYREG_UDB_PA2_CFG7
.set Pin_1__0__PA__CFG8, CYREG_UDB_PA2_CFG8
.set Pin_1__0__PA__CFG9, CYREG_UDB_PA2_CFG9
.set Pin_1__0__PC, CYREG_GPIO_PRT2_PC
.set Pin_1__0__PC2, CYREG_GPIO_PRT2_PC2
.set Pin_1__0__PORT, 2
.set Pin_1__0__PS, CYREG_GPIO_PRT2_PS
.set Pin_1__0__SHIFT, 7
.set Pin_1__DR, CYREG_GPIO_PRT2_DR
.set Pin_1__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set Pin_1__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set Pin_1__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set Pin_1__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set Pin_1__INTR, CYREG_GPIO_PRT2_INTR
.set Pin_1__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set Pin_1__INTSTAT, CYREG_GPIO_PRT2_INTR
.set Pin_1__MASK, 0x80
.set Pin_1__PA__CFG0, CYREG_UDB_PA2_CFG0
.set Pin_1__PA__CFG1, CYREG_UDB_PA2_CFG1
.set Pin_1__PA__CFG10, CYREG_UDB_PA2_CFG10
.set Pin_1__PA__CFG11, CYREG_UDB_PA2_CFG11
.set Pin_1__PA__CFG12, CYREG_UDB_PA2_CFG12
.set Pin_1__PA__CFG13, CYREG_UDB_PA2_CFG13
.set Pin_1__PA__CFG14, CYREG_UDB_PA2_CFG14
.set Pin_1__PA__CFG2, CYREG_UDB_PA2_CFG2
.set Pin_1__PA__CFG3, CYREG_UDB_PA2_CFG3
.set Pin_1__PA__CFG4, CYREG_UDB_PA2_CFG4
.set Pin_1__PA__CFG5, CYREG_UDB_PA2_CFG5
.set Pin_1__PA__CFG6, CYREG_UDB_PA2_CFG6
.set Pin_1__PA__CFG7, CYREG_UDB_PA2_CFG7
.set Pin_1__PA__CFG8, CYREG_UDB_PA2_CFG8
.set Pin_1__PA__CFG9, CYREG_UDB_PA2_CFG9
.set Pin_1__PC, CYREG_GPIO_PRT2_PC
.set Pin_1__PC2, CYREG_GPIO_PRT2_PC2
.set Pin_1__PORT, 2
.set Pin_1__PS, CYREG_GPIO_PRT2_PS
.set Pin_1__SHIFT, 7
.set Pin_1__SNAP, CYREG_GPIO_PRT2_INTR

/* isr_1 */
.set isr_1__INTC_CLR_EN_REG, CYREG_CM0_ICER
.set isr_1__INTC_CLR_PD_REG, CYREG_CM0_ICPR
.set isr_1__INTC_MASK, 0x04
.set isr_1__INTC_NUMBER, 2
.set isr_1__INTC_PRIOR_MASK, 0xC00000
.set isr_1__INTC_PRIOR_NUM, 3
.set isr_1__INTC_PRIOR_REG, CYREG_CM0_IPR0
.set isr_1__INTC_SET_EN_REG, CYREG_CM0_ISER
.set isr_1__INTC_SET_PD_REG, CYREG_CM0_ISPR

/* isr_2 */
.set isr_2__INTC_CLR_EN_REG, CYREG_CM0_ICER
.set isr_2__INTC_CLR_PD_REG, CYREG_CM0_ICPR
.set isr_2__INTC_MASK, 0x20000
.set isr_2__INTC_NUMBER, 17
.set isr_2__INTC_PRIOR_MASK, 0xC000
.set isr_2__INTC_PRIOR_NUM, 3
.set isr_2__INTC_PRIOR_REG, CYREG_CM0_IPR4
.set isr_2__INTC_SET_EN_REG, CYREG_CM0_ISER
.set isr_2__INTC_SET_PD_REG, CYREG_CM0_ISPR

/* Clock_1 */
.set Clock_1__CTRL_REGISTER, CYREG_PERI_PCLK_CTL7
.set Clock_1__DIV_ID, 0x00000040
.set Clock_1__DIV_REGISTER, CYREG_PERI_DIV_16_CTL0
.set Clock_1__PA_DIV_ID, 0x000000FF

/* LED_Red */
.set LED_Red__0__DR, CYREG_GPIO_PRT2_DR
.set LED_Red__0__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set LED_Red__0__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set LED_Red__0__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set LED_Red__0__HSIOM, CYREG_HSIOM_PORT_SEL2
.set LED_Red__0__HSIOM_MASK, 0x0F000000
.set LED_Red__0__HSIOM_SHIFT, 24
.set LED_Red__0__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set LED_Red__0__INTR, CYREG_GPIO_PRT2_INTR
.set LED_Red__0__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set LED_Red__0__INTSTAT, CYREG_GPIO_PRT2_INTR
.set LED_Red__0__MASK, 0x40
.set LED_Red__0__PA__CFG0, CYREG_UDB_PA2_CFG0
.set LED_Red__0__PA__CFG1, CYREG_UDB_PA2_CFG1
.set LED_Red__0__PA__CFG10, CYREG_UDB_PA2_CFG10
.set LED_Red__0__PA__CFG11, CYREG_UDB_PA2_CFG11
.set LED_Red__0__PA__CFG12, CYREG_UDB_PA2_CFG12
.set LED_Red__0__PA__CFG13, CYREG_UDB_PA2_CFG13
.set LED_Red__0__PA__CFG14, CYREG_UDB_PA2_CFG14
.set LED_Red__0__PA__CFG2, CYREG_UDB_PA2_CFG2
.set LED_Red__0__PA__CFG3, CYREG_UDB_PA2_CFG3
.set LED_Red__0__PA__CFG4, CYREG_UDB_PA2_CFG4
.set LED_Red__0__PA__CFG5, CYREG_UDB_PA2_CFG5
.set LED_Red__0__PA__CFG6, CYREG_UDB_PA2_CFG6
.set LED_Red__0__PA__CFG7, CYREG_UDB_PA2_CFG7
.set LED_Red__0__PA__CFG8, CYREG_UDB_PA2_CFG8
.set LED_Red__0__PA__CFG9, CYREG_UDB_PA2_CFG9
.set LED_Red__0__PC, CYREG_GPIO_PRT2_PC
.set LED_Red__0__PC2, CYREG_GPIO_PRT2_PC2
.set LED_Red__0__PORT, 2
.set LED_Red__0__PS, CYREG_GPIO_PRT2_PS
.set LED_Red__0__SHIFT, 6
.set LED_Red__DR, CYREG_GPIO_PRT2_DR
.set LED_Red__DR_CLR, CYREG_GPIO_PRT2_DR_CLR
.set LED_Red__DR_INV, CYREG_GPIO_PRT2_DR_INV
.set LED_Red__DR_SET, CYREG_GPIO_PRT2_DR_SET
.set LED_Red__INTCFG, CYREG_GPIO_PRT2_INTR_CFG
.set LED_Red__INTR, CYREG_GPIO_PRT2_INTR
.set LED_Red__INTR_CFG, CYREG_GPIO_PRT2_INTR_CFG
.set LED_Red__INTSTAT, CYREG_GPIO_PRT2_INTR
.set LED_Red__MASK, 0x40
.set LED_Red__PA__CFG0, CYREG_UDB_PA2_CFG0
.set LED_Red__PA__CFG1, CYREG_UDB_PA2_CFG1
.set LED_Red__PA__CFG10, CYREG_UDB_PA2_CFG10
.set LED_Red__PA__CFG11, CYREG_UDB_PA2_CFG11
.set LED_Red__PA__CFG12, CYREG_UDB_PA2_CFG12
.set LED_Red__PA__CFG13, CYREG_UDB_PA2_CFG13
.set LED_Red__PA__CFG14, CYREG_UDB_PA2_CFG14
.set LED_Red__PA__CFG2, CYREG_UDB_PA2_CFG2
.set LED_Red__PA__CFG3, CYREG_UDB_PA2_CFG3
.set LED_Red__PA__CFG4, CYREG_UDB_PA2_CFG4
.set LED_Red__PA__CFG5, CYREG_UDB_PA2_CFG5
.set LED_Red__PA__CFG6, CYREG_UDB_PA2_CFG6
.set LED_Red__PA__CFG7, CYREG_UDB_PA2_CFG7
.set LED_Red__PA__CFG8, CYREG_UDB_PA2_CFG8
.set LED_Red__PA__CFG9, CYREG_UDB_PA2_CFG9
.set LED_Red__PC, CYREG_GPIO_PRT2_PC
.set LED_Red__PC2, CYREG_GPIO_PRT2_PC2
.set LED_Red__PORT, 2
.set LED_Red__PS, CYREG_GPIO_PRT2_PS
.set LED_Red__SHIFT, 6

/* LED_Blue */
.set LED_Blue__0__DR, CYREG_GPIO_PRT3_DR
.set LED_Blue__0__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set LED_Blue__0__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set LED_Blue__0__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set LED_Blue__0__HSIOM, CYREG_HSIOM_PORT_SEL3
.set LED_Blue__0__HSIOM_MASK, 0xF0000000
.set LED_Blue__0__HSIOM_SHIFT, 28
.set LED_Blue__0__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set LED_Blue__0__INTR, CYREG_GPIO_PRT3_INTR
.set LED_Blue__0__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set LED_Blue__0__INTSTAT, CYREG_GPIO_PRT3_INTR
.set LED_Blue__0__MASK, 0x80
.set LED_Blue__0__OUT_SEL, CYREG_UDB_PA3_CFG10
.set LED_Blue__0__OUT_SEL_SHIFT, 14
.set LED_Blue__0__OUT_SEL_VAL, 3
.set LED_Blue__0__PA__CFG0, CYREG_UDB_PA3_CFG0
.set LED_Blue__0__PA__CFG1, CYREG_UDB_PA3_CFG1
.set LED_Blue__0__PA__CFG10, CYREG_UDB_PA3_CFG10
.set LED_Blue__0__PA__CFG11, CYREG_UDB_PA3_CFG11
.set LED_Blue__0__PA__CFG12, CYREG_UDB_PA3_CFG12
.set LED_Blue__0__PA__CFG13, CYREG_UDB_PA3_CFG13
.set LED_Blue__0__PA__CFG14, CYREG_UDB_PA3_CFG14
.set LED_Blue__0__PA__CFG2, CYREG_UDB_PA3_CFG2
.set LED_Blue__0__PA__CFG3, CYREG_UDB_PA3_CFG3
.set LED_Blue__0__PA__CFG4, CYREG_UDB_PA3_CFG4
.set LED_Blue__0__PA__CFG5, CYREG_UDB_PA3_CFG5
.set LED_Blue__0__PA__CFG6, CYREG_UDB_PA3_CFG6
.set LED_Blue__0__PA__CFG7, CYREG_UDB_PA3_CFG7
.set LED_Blue__0__PA__CFG8, CYREG_UDB_PA3_CFG8
.set LED_Blue__0__PA__CFG9, CYREG_UDB_PA3_CFG9
.set LED_Blue__0__PC, CYREG_GPIO_PRT3_PC
.set LED_Blue__0__PC2, CYREG_GPIO_PRT3_PC2
.set LED_Blue__0__PORT, 3
.set LED_Blue__0__PS, CYREG_GPIO_PRT3_PS
.set LED_Blue__0__SHIFT, 7
.set LED_Blue__DR, CYREG_GPIO_PRT3_DR
.set LED_Blue__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set LED_Blue__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set LED_Blue__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set LED_Blue__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set LED_Blue__INTR, CYREG_GPIO_PRT3_INTR
.set LED_Blue__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set LED_Blue__INTSTAT, CYREG_GPIO_PRT3_INTR
.set LED_Blue__MASK, 0x80
.set LED_Blue__PA__CFG0, CYREG_UDB_PA3_CFG0
.set LED_Blue__PA__CFG1, CYREG_UDB_PA3_CFG1
.set LED_Blue__PA__CFG10, CYREG_UDB_PA3_CFG10
.set LED_Blue__PA__CFG11, CYREG_UDB_PA3_CFG11
.set LED_Blue__PA__CFG12, CYREG_UDB_PA3_CFG12
.set LED_Blue__PA__CFG13, CYREG_UDB_PA3_CFG13
.set LED_Blue__PA__CFG14, CYREG_UDB_PA3_CFG14
.set LED_Blue__PA__CFG2, CYREG_UDB_PA3_CFG2
.set LED_Blue__PA__CFG3, CYREG_UDB_PA3_CFG3
.set LED_Blue__PA__CFG4, CYREG_UDB_PA3_CFG4
.set LED_Blue__PA__CFG5, CYREG_UDB_PA3_CFG5
.set LED_Blue__PA__CFG6, CYREG_UDB_PA3_CFG6
.set LED_Blue__PA__CFG7, CYREG_UDB_PA3_CFG7
.set LED_Blue__PA__CFG8, CYREG_UDB_PA3_CFG8
.set LED_Blue__PA__CFG9, CYREG_UDB_PA3_CFG9
.set LED_Blue__PC, CYREG_GPIO_PRT3_PC
.set LED_Blue__PC2, CYREG_GPIO_PRT3_PC2
.set LED_Blue__PORT, 3
.set LED_Blue__PS, CYREG_GPIO_PRT3_PS
.set LED_Blue__SHIFT, 7

/* LED_Green */
.set LED_Green__0__DR, CYREG_GPIO_PRT3_DR
.set LED_Green__0__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set LED_Green__0__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set LED_Green__0__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set LED_Green__0__HSIOM, CYREG_HSIOM_PORT_SEL3
.set LED_Green__0__HSIOM_MASK, 0x0F000000
.set LED_Green__0__HSIOM_SHIFT, 24
.set LED_Green__0__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set LED_Green__0__INTR, CYREG_GPIO_PRT3_INTR
.set LED_Green__0__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set LED_Green__0__INTSTAT, CYREG_GPIO_PRT3_INTR
.set LED_Green__0__MASK, 0x40
.set LED_Green__0__OUT_SEL, CYREG_UDB_PA3_CFG10
.set LED_Green__0__OUT_SEL_SHIFT, 12
.set LED_Green__0__OUT_SEL_VAL, 2
.set LED_Green__0__PA__CFG0, CYREG_UDB_PA3_CFG0
.set LED_Green__0__PA__CFG1, CYREG_UDB_PA3_CFG1
.set LED_Green__0__PA__CFG10, CYREG_UDB_PA3_CFG10
.set LED_Green__0__PA__CFG11, CYREG_UDB_PA3_CFG11
.set LED_Green__0__PA__CFG12, CYREG_UDB_PA3_CFG12
.set LED_Green__0__PA__CFG13, CYREG_UDB_PA3_CFG13
.set LED_Green__0__PA__CFG14, CYREG_UDB_PA3_CFG14
.set LED_Green__0__PA__CFG2, CYREG_UDB_PA3_CFG2
.set LED_Green__0__PA__CFG3, CYREG_UDB_PA3_CFG3
.set LED_Green__0__PA__CFG4, CYREG_UDB_PA3_CFG4
.set LED_Green__0__PA__CFG5, CYREG_UDB_PA3_CFG5
.set LED_Green__0__PA__CFG6, CYREG_UDB_PA3_CFG6
.set LED_Green__0__PA__CFG7, CYREG_UDB_PA3_CFG7
.set LED_Green__0__PA__CFG8, CYREG_UDB_PA3_CFG8
.set LED_Green__0__PA__CFG9, CYREG_UDB_PA3_CFG9
.set LED_Green__0__PC, CYREG_GPIO_PRT3_PC
.set LED_Green__0__PC2, CYREG_GPIO_PRT3_PC2
.set LED_Green__0__PORT, 3
.set LED_Green__0__PS, CYREG_GPIO_PRT3_PS
.set LED_Green__0__SHIFT, 6
.set LED_Green__DR, CYREG_GPIO_PRT3_DR
.set LED_Green__DR_CLR, CYREG_GPIO_PRT3_DR_CLR
.set LED_Green__DR_INV, CYREG_GPIO_PRT3_DR_INV
.set LED_Green__DR_SET, CYREG_GPIO_PRT3_DR_SET
.set LED_Green__INTCFG, CYREG_GPIO_PRT3_INTR_CFG
.set LED_Green__INTR, CYREG_GPIO_PRT3_INTR
.set LED_Green__INTR_CFG, CYREG_GPIO_PRT3_INTR_CFG
.set LED_Green__INTSTAT, CYREG_GPIO_PRT3_INTR
.set LED_Green__MASK, 0x40
.set LED_Green__PA__CFG0, CYREG_UDB_PA3_CFG0
.set LED_Green__PA__CFG1, CYREG_UDB_PA3_CFG1
.set LED_Green__PA__CFG10, CYREG_UDB_PA3_CFG10
.set LED_Green__PA__CFG11, CYREG_UDB_PA3_CFG11
.set LED_Green__PA__CFG12, CYREG_UDB_PA3_CFG12
.set LED_Green__PA__CFG13, CYREG_UDB_PA3_CFG13
.set LED_Green__PA__CFG14, CYREG_UDB_PA3_CFG14
.set LED_Green__PA__CFG2, CYREG_UDB_PA3_CFG2
.set LED_Green__PA__CFG3, CYREG_UDB_PA3_CFG3
.set LED_Green__PA__CFG4, CYREG_UDB_PA3_CFG4
.set LED_Green__PA__CFG5, CYREG_UDB_PA3_CFG5
.set LED_Green__PA__CFG6, CYREG_UDB_PA3_CFG6
.set LED_Green__PA__CFG7, CYREG_UDB_PA3_CFG7
.set LED_Green__PA__CFG8, CYREG_UDB_PA3_CFG8
.set LED_Green__PA__CFG9, CYREG_UDB_PA3_CFG9
.set LED_Green__PC, CYREG_GPIO_PRT3_PC
.set LED_Green__PC2, CYREG_GPIO_PRT3_PC2
.set LED_Green__PORT, 3
.set LED_Green__PS, CYREG_GPIO_PRT3_PS
.set LED_Green__SHIFT, 6

/* Miscellaneous */
.set CYDEV_BCLK__HFCLK__HZ, 48000000
.set CYDEV_BCLK__HFCLK__KHZ, 48000
.set CYDEV_BCLK__HFCLK__MHZ, 48
.set CYDEV_BCLK__SYSCLK__HZ, 48000000
.set CYDEV_BCLK__SYSCLK__KHZ, 48000
.set CYDEV_BCLK__SYSCLK__MHZ, 48
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PANTHER, 19
.set CYDEV_CHIP_DIE_PSOC4A, 11
.set CYDEV_CHIP_DIE_PSOC5LP, 18
.set CYDEV_CHIP_DIE_TMA4, 2
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC4
.set CYDEV_CHIP_JTAG_ID, 0x0E34119E
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 11
.set CYDEV_CHIP_MEMBER_4C, 16
.set CYDEV_CHIP_MEMBER_4D, 7
.set CYDEV_CHIP_MEMBER_4E, 4
.set CYDEV_CHIP_MEMBER_4F, 12
.set CYDEV_CHIP_MEMBER_4G, 2
.set CYDEV_CHIP_MEMBER_4H, 10
.set CYDEV_CHIP_MEMBER_4I, 15
.set CYDEV_CHIP_MEMBER_4J, 8
.set CYDEV_CHIP_MEMBER_4K, 9
.set CYDEV_CHIP_MEMBER_4L, 14
.set CYDEV_CHIP_MEMBER_4M, 13
.set CYDEV_CHIP_MEMBER_4N, 6
.set CYDEV_CHIP_MEMBER_4O, 5
.set CYDEV_CHIP_MEMBER_4U, 3
.set CYDEV_CHIP_MEMBER_5A, 18
.set CYDEV_CHIP_MEMBER_5B, 17
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_4F
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PANTHER_ES0, 0
.set CYDEV_CHIP_REV_PANTHER_ES1, 1
.set CYDEV_CHIP_REV_PANTHER_PRODUCTION, 1
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4C_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_4F_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_READ_ACCELERATOR, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_PROTECT_KILL, 4
.set CYDEV_DEBUG_PROTECT_OPEN, 1
.set CYDEV_DEBUG_PROTECT, CYDEV_DEBUG_PROTECT_OPEN
.set CYDEV_DEBUG_PROTECT_PROTECTED, 2
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DFT_SELECT_CLK0, 10
.set CYDEV_DFT_SELECT_CLK1, 11
.set CYDEV_HEAP_SIZE, 0x80
.set CYDEV_IMO_TRIMMED_BY_USB, 0
.set CYDEV_IMO_TRIMMED_BY_WCO, 0
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 1
.set CYDEV_VDDA_MV, 3300
.set CYDEV_VDDD_MV, 3300
.set CYDEV_VDDR_MV, 3300
.set CYDEV_WDT_GENERATE_ISR, 1
.set CYIPBLOCK_m0s8bless_VERSION, 1
.set CYIPBLOCK_m0s8cpussv2_VERSION, 1
.set CYIPBLOCK_m0s8csd_VERSION, 1
.set CYIPBLOCK_m0s8ioss_VERSION, 1
.set CYIPBLOCK_m0s8lcd_VERSION, 2
.set CYIPBLOCK_m0s8lpcomp_VERSION, 2
.set CYIPBLOCK_m0s8peri_VERSION, 1
.set CYIPBLOCK_m0s8scb_VERSION, 2
.set CYIPBLOCK_m0s8srssv2_VERSION, 1
.set CYIPBLOCK_m0s8tcpwm_VERSION, 2
.set CYIPBLOCK_m0s8udbif_VERSION, 1
.set CYIPBLOCK_s8pass4al_VERSION, 1
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif