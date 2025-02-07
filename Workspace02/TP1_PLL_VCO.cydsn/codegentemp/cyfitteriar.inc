#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* Pin_1 */
Pin_1__0__INTTYPE EQU CYREG_PICU3_INTTYPE3
Pin_1__0__MASK EQU 0x08
Pin_1__0__PC EQU CYREG_PRT3_PC3
Pin_1__0__PORT EQU 3
Pin_1__0__SHIFT EQU 3
Pin_1__AG EQU CYREG_PRT3_AG
Pin_1__AMUX EQU CYREG_PRT3_AMUX
Pin_1__BIE EQU CYREG_PRT3_BIE
Pin_1__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Pin_1__BYP EQU CYREG_PRT3_BYP
Pin_1__CTL EQU CYREG_PRT3_CTL
Pin_1__DM0 EQU CYREG_PRT3_DM0
Pin_1__DM1 EQU CYREG_PRT3_DM1
Pin_1__DM2 EQU CYREG_PRT3_DM2
Pin_1__DR EQU CYREG_PRT3_DR
Pin_1__INP_DIS EQU CYREG_PRT3_INP_DIS
Pin_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
Pin_1__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Pin_1__LCD_EN EQU CYREG_PRT3_LCD_EN
Pin_1__MASK EQU 0x08
Pin_1__PORT EQU 3
Pin_1__PRT EQU CYREG_PRT3_PRT
Pin_1__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Pin_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Pin_1__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Pin_1__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Pin_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Pin_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Pin_1__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Pin_1__PS EQU CYREG_PRT3_PS
Pin_1__SHIFT EQU 3
Pin_1__SLW EQU CYREG_PRT3_SLW

/* Pin_2 */
Pin_2__0__INTTYPE EQU CYREG_PICU0_INTTYPE6
Pin_2__0__MASK EQU 0x40
Pin_2__0__PC EQU CYREG_PRT0_PC6
Pin_2__0__PORT EQU 0
Pin_2__0__SHIFT EQU 6
Pin_2__AG EQU CYREG_PRT0_AG
Pin_2__AMUX EQU CYREG_PRT0_AMUX
Pin_2__BIE EQU CYREG_PRT0_BIE
Pin_2__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Pin_2__BYP EQU CYREG_PRT0_BYP
Pin_2__CTL EQU CYREG_PRT0_CTL
Pin_2__DM0 EQU CYREG_PRT0_DM0
Pin_2__DM1 EQU CYREG_PRT0_DM1
Pin_2__DM2 EQU CYREG_PRT0_DM2
Pin_2__DR EQU CYREG_PRT0_DR
Pin_2__INP_DIS EQU CYREG_PRT0_INP_DIS
Pin_2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Pin_2__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Pin_2__LCD_EN EQU CYREG_PRT0_LCD_EN
Pin_2__MASK EQU 0x40
Pin_2__PORT EQU 0
Pin_2__PRT EQU CYREG_PRT0_PRT
Pin_2__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Pin_2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Pin_2__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Pin_2__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Pin_2__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Pin_2__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Pin_2__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Pin_2__PS EQU CYREG_PRT0_PS
Pin_2__SHIFT EQU 6
Pin_2__SLW EQU CYREG_PRT0_SLW

/* Pin_3 */
Pin_3__0__INTTYPE EQU CYREG_PICU0_INTTYPE7
Pin_3__0__MASK EQU 0x80
Pin_3__0__PC EQU CYREG_PRT0_PC7
Pin_3__0__PORT EQU 0
Pin_3__0__SHIFT EQU 7
Pin_3__AG EQU CYREG_PRT0_AG
Pin_3__AMUX EQU CYREG_PRT0_AMUX
Pin_3__BIE EQU CYREG_PRT0_BIE
Pin_3__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Pin_3__BYP EQU CYREG_PRT0_BYP
Pin_3__CTL EQU CYREG_PRT0_CTL
Pin_3__DM0 EQU CYREG_PRT0_DM0
Pin_3__DM1 EQU CYREG_PRT0_DM1
Pin_3__DM2 EQU CYREG_PRT0_DM2
Pin_3__DR EQU CYREG_PRT0_DR
Pin_3__INP_DIS EQU CYREG_PRT0_INP_DIS
Pin_3__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Pin_3__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Pin_3__LCD_EN EQU CYREG_PRT0_LCD_EN
Pin_3__MASK EQU 0x80
Pin_3__PORT EQU 0
Pin_3__PRT EQU CYREG_PRT0_PRT
Pin_3__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Pin_3__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Pin_3__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Pin_3__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Pin_3__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Pin_3__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Pin_3__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Pin_3__PS EQU CYREG_PRT0_PS
Pin_3__SHIFT EQU 7
Pin_3__SLW EQU CYREG_PRT0_SLW

/* Pin_4 */
Pin_4__0__INTTYPE EQU CYREG_PICU1_INTTYPE7
Pin_4__0__MASK EQU 0x80
Pin_4__0__PC EQU CYREG_PRT1_PC7
Pin_4__0__PORT EQU 1
Pin_4__0__SHIFT EQU 7
Pin_4__AG EQU CYREG_PRT1_AG
Pin_4__AMUX EQU CYREG_PRT1_AMUX
Pin_4__BIE EQU CYREG_PRT1_BIE
Pin_4__BIT_MASK EQU CYREG_PRT1_BIT_MASK
Pin_4__BYP EQU CYREG_PRT1_BYP
Pin_4__CTL EQU CYREG_PRT1_CTL
Pin_4__DM0 EQU CYREG_PRT1_DM0
Pin_4__DM1 EQU CYREG_PRT1_DM1
Pin_4__DM2 EQU CYREG_PRT1_DM2
Pin_4__DR EQU CYREG_PRT1_DR
Pin_4__INP_DIS EQU CYREG_PRT1_INP_DIS
Pin_4__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU1_BASE
Pin_4__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
Pin_4__LCD_EN EQU CYREG_PRT1_LCD_EN
Pin_4__MASK EQU 0x80
Pin_4__PORT EQU 1
Pin_4__PRT EQU CYREG_PRT1_PRT
Pin_4__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
Pin_4__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
Pin_4__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
Pin_4__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
Pin_4__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
Pin_4__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
Pin_4__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
Pin_4__PS EQU CYREG_PRT1_PS
Pin_4__SHIFT EQU 7
Pin_4__SLW EQU CYREG_PRT1_SLW

/* Pin_5 */
Pin_5__0__INTTYPE EQU CYREG_PICU3_INTTYPE7
Pin_5__0__MASK EQU 0x80
Pin_5__0__PC EQU CYREG_PRT3_PC7
Pin_5__0__PORT EQU 3
Pin_5__0__SHIFT EQU 7
Pin_5__AG EQU CYREG_PRT3_AG
Pin_5__AMUX EQU CYREG_PRT3_AMUX
Pin_5__BIE EQU CYREG_PRT3_BIE
Pin_5__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Pin_5__BYP EQU CYREG_PRT3_BYP
Pin_5__CTL EQU CYREG_PRT3_CTL
Pin_5__DM0 EQU CYREG_PRT3_DM0
Pin_5__DM1 EQU CYREG_PRT3_DM1
Pin_5__DM2 EQU CYREG_PRT3_DM2
Pin_5__DR EQU CYREG_PRT3_DR
Pin_5__INP_DIS EQU CYREG_PRT3_INP_DIS
Pin_5__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
Pin_5__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Pin_5__LCD_EN EQU CYREG_PRT3_LCD_EN
Pin_5__MASK EQU 0x80
Pin_5__PORT EQU 3
Pin_5__PRT EQU CYREG_PRT3_PRT
Pin_5__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Pin_5__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Pin_5__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Pin_5__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Pin_5__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Pin_5__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Pin_5__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Pin_5__PS EQU CYREG_PRT3_PS
Pin_5__SHIFT EQU 7
Pin_5__SLW EQU CYREG_PRT3_SLW

/* Pin_6 */
Pin_6__0__INTTYPE EQU CYREG_PICU1_INTTYPE6
Pin_6__0__MASK EQU 0x40
Pin_6__0__PC EQU CYREG_PRT1_PC6
Pin_6__0__PORT EQU 1
Pin_6__0__SHIFT EQU 6
Pin_6__AG EQU CYREG_PRT1_AG
Pin_6__AMUX EQU CYREG_PRT1_AMUX
Pin_6__BIE EQU CYREG_PRT1_BIE
Pin_6__BIT_MASK EQU CYREG_PRT1_BIT_MASK
Pin_6__BYP EQU CYREG_PRT1_BYP
Pin_6__CTL EQU CYREG_PRT1_CTL
Pin_6__DM0 EQU CYREG_PRT1_DM0
Pin_6__DM1 EQU CYREG_PRT1_DM1
Pin_6__DM2 EQU CYREG_PRT1_DM2
Pin_6__DR EQU CYREG_PRT1_DR
Pin_6__INP_DIS EQU CYREG_PRT1_INP_DIS
Pin_6__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU1_BASE
Pin_6__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
Pin_6__LCD_EN EQU CYREG_PRT1_LCD_EN
Pin_6__MASK EQU 0x40
Pin_6__PORT EQU 1
Pin_6__PRT EQU CYREG_PRT1_PRT
Pin_6__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
Pin_6__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
Pin_6__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
Pin_6__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
Pin_6__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
Pin_6__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
Pin_6__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
Pin_6__PS EQU CYREG_PRT1_PS
Pin_6__SHIFT EQU 6
Pin_6__SLW EQU CYREG_PRT1_SLW

/* Pin_7 */
Pin_7__0__INTTYPE EQU CYREG_PICU0_INTTYPE4
Pin_7__0__MASK EQU 0x10
Pin_7__0__PC EQU CYREG_PRT0_PC4
Pin_7__0__PORT EQU 0
Pin_7__0__SHIFT EQU 4
Pin_7__AG EQU CYREG_PRT0_AG
Pin_7__AMUX EQU CYREG_PRT0_AMUX
Pin_7__BIE EQU CYREG_PRT0_BIE
Pin_7__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Pin_7__BYP EQU CYREG_PRT0_BYP
Pin_7__CTL EQU CYREG_PRT0_CTL
Pin_7__DM0 EQU CYREG_PRT0_DM0
Pin_7__DM1 EQU CYREG_PRT0_DM1
Pin_7__DM2 EQU CYREG_PRT0_DM2
Pin_7__DR EQU CYREG_PRT0_DR
Pin_7__INP_DIS EQU CYREG_PRT0_INP_DIS
Pin_7__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Pin_7__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Pin_7__LCD_EN EQU CYREG_PRT0_LCD_EN
Pin_7__MASK EQU 0x10
Pin_7__PORT EQU 0
Pin_7__PRT EQU CYREG_PRT0_PRT
Pin_7__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Pin_7__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Pin_7__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Pin_7__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Pin_7__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Pin_7__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Pin_7__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Pin_7__PS EQU CYREG_PRT0_PS
Pin_7__SHIFT EQU 4
Pin_7__SLW EQU CYREG_PRT0_SLW

/* Comp_1_ctComp */
Comp_1_ctComp__CLK EQU CYREG_CMP1_CLK
Comp_1_ctComp__CMP_MASK EQU 0x02
Comp_1_ctComp__CMP_NUMBER EQU 1
Comp_1_ctComp__CR EQU CYREG_CMP1_CR
Comp_1_ctComp__LUT__CR EQU CYREG_LUT1_CR
Comp_1_ctComp__LUT__MSK EQU CYREG_LUT_MSK
Comp_1_ctComp__LUT__MSK_MASK EQU 0x02
Comp_1_ctComp__LUT__MSK_SHIFT EQU 1
Comp_1_ctComp__LUT__MX EQU CYREG_LUT1_MX
Comp_1_ctComp__LUT__SR EQU CYREG_LUT_SR
Comp_1_ctComp__LUT__SR_MASK EQU 0x02
Comp_1_ctComp__LUT__SR_SHIFT EQU 1
Comp_1_ctComp__PM_ACT_CFG EQU CYREG_PM_ACT_CFG7
Comp_1_ctComp__PM_ACT_MSK EQU 0x02
Comp_1_ctComp__PM_STBY_CFG EQU CYREG_PM_STBY_CFG7
Comp_1_ctComp__PM_STBY_MSK EQU 0x02
Comp_1_ctComp__SW0 EQU CYREG_CMP1_SW0
Comp_1_ctComp__SW2 EQU CYREG_CMP1_SW2
Comp_1_ctComp__SW3 EQU CYREG_CMP1_SW3
Comp_1_ctComp__SW4 EQU CYREG_CMP1_SW4
Comp_1_ctComp__SW6 EQU CYREG_CMP1_SW6
Comp_1_ctComp__TR0 EQU CYREG_CMP1_TR0
Comp_1_ctComp__TR1 EQU CYREG_CMP1_TR1
Comp_1_ctComp__TRIM__TR0 EQU CYREG_FLSHID_MFG_CFG_CMP1_TR0
Comp_1_ctComp__TRIM__TR0_HS EQU CYREG_FLSHID_CUST_TABLES_CMP1_TR0_HS
Comp_1_ctComp__TRIM__TR1 EQU CYREG_FLSHID_MFG_CFG_CMP1_TR1
Comp_1_ctComp__TRIM__TR1_HS EQU CYREG_FLSHID_CUST_TABLES_CMP1_TR1_HS
Comp_1_ctComp__WRK EQU CYREG_CMP_WRK
Comp_1_ctComp__WRK_MASK EQU 0x02
Comp_1_ctComp__WRK_SHIFT EQU 1

/* IDAC8_1_viDAC8 */
IDAC8_1_viDAC8__CR0 EQU CYREG_DAC0_CR0
IDAC8_1_viDAC8__CR1 EQU CYREG_DAC0_CR1
IDAC8_1_viDAC8__D EQU CYREG_DAC0_D
IDAC8_1_viDAC8__PM_ACT_CFG EQU CYREG_PM_ACT_CFG8
IDAC8_1_viDAC8__PM_ACT_MSK EQU 0x01
IDAC8_1_viDAC8__PM_STBY_CFG EQU CYREG_PM_STBY_CFG8
IDAC8_1_viDAC8__PM_STBY_MSK EQU 0x01
IDAC8_1_viDAC8__STROBE EQU CYREG_DAC0_STROBE
IDAC8_1_viDAC8__SW0 EQU CYREG_DAC0_SW0
IDAC8_1_viDAC8__SW2 EQU CYREG_DAC0_SW2
IDAC8_1_viDAC8__SW3 EQU CYREG_DAC0_SW3
IDAC8_1_viDAC8__SW4 EQU CYREG_DAC0_SW4
IDAC8_1_viDAC8__TR EQU CYREG_DAC0_TR
IDAC8_1_viDAC8__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M1
IDAC8_1_viDAC8__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M2
IDAC8_1_viDAC8__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M3
IDAC8_1_viDAC8__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M4
IDAC8_1_viDAC8__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M5
IDAC8_1_viDAC8__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M6
IDAC8_1_viDAC8__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M7
IDAC8_1_viDAC8__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M8
IDAC8_1_viDAC8__TST EQU CYREG_DAC0_TST

/* Mixer_1_SC */
Mixer_1_SC__BST EQU CYREG_SC2_BST
Mixer_1_SC__CLK EQU CYREG_SC2_CLK
Mixer_1_SC__CMPINV EQU CYREG_SC_CMPINV
Mixer_1_SC__CMPINV_MASK EQU 0x04
Mixer_1_SC__CPTR EQU CYREG_SC_CPTR
Mixer_1_SC__CPTR_MASK EQU 0x04
Mixer_1_SC__CR0 EQU CYREG_SC2_CR0
Mixer_1_SC__CR1 EQU CYREG_SC2_CR1
Mixer_1_SC__CR2 EQU CYREG_SC2_CR2
Mixer_1_SC__MSK EQU CYREG_SC_MSK
Mixer_1_SC__MSK_MASK EQU 0x04
Mixer_1_SC__PM_ACT_CFG EQU CYREG_PM_ACT_CFG9
Mixer_1_SC__PM_ACT_MSK EQU 0x04
Mixer_1_SC__PM_STBY_CFG EQU CYREG_PM_STBY_CFG9
Mixer_1_SC__PM_STBY_MSK EQU 0x04
Mixer_1_SC__SR EQU CYREG_SC_SR
Mixer_1_SC__SR_MASK EQU 0x04
Mixer_1_SC__SW0 EQU CYREG_SC2_SW0
Mixer_1_SC__SW10 EQU CYREG_SC2_SW10
Mixer_1_SC__SW2 EQU CYREG_SC2_SW2
Mixer_1_SC__SW3 EQU CYREG_SC2_SW3
Mixer_1_SC__SW4 EQU CYREG_SC2_SW4
Mixer_1_SC__SW6 EQU CYREG_SC2_SW6
Mixer_1_SC__SW7 EQU CYREG_SC2_SW7
Mixer_1_SC__SW8 EQU CYREG_SC2_SW8
Mixer_1_SC__WRK1 EQU CYREG_SC_WRK1
Mixer_1_SC__WRK1_MASK EQU 0x04

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 18
CYDEV_CHIP_DIE_PSOC4A EQU 10
CYDEV_CHIP_DIE_PSOC5LP EQU 17
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 10
CYDEV_CHIP_MEMBER_4C EQU 15
CYDEV_CHIP_MEMBER_4D EQU 6
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 11
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 9
CYDEV_CHIP_MEMBER_4I EQU 14
CYDEV_CHIP_MEMBER_4J EQU 7
CYDEV_CHIP_MEMBER_4K EQU 8
CYDEV_CHIP_MEMBER_4L EQU 13
CYDEV_CHIP_MEMBER_4M EQU 12
CYDEV_CHIP_MEMBER_4N EQU 5
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 17
CYDEV_CHIP_MEMBER_5B EQU 16
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
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
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */
