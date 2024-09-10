/*
 * Copyright (c) 2024 Microchip
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _MICROCHIP_PIC32CXBZ2_AC_INSTANCE_FIXUP_H_
#define _MICROCHIP_PIC32CXBZ2_AC_INSTANCE_FIXUP_H_

/* ========== Register definition for AC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_AC_CTRLA               (0x42001C00) /**< \brief (AC) Control A */
#define REG_AC_CTRLB               (0x42001C01) /**< \brief (AC) Control B */
#define REG_AC_EVCTRL              (0x42001C02) /**< \brief (AC) Event Control */
#define REG_AC_INTENCLR            (0x42001C04) /**< \brief (AC) Interrupt Enable Clear */
#define REG_AC_INTENSET            (0x42001C05) /**< \brief (AC) Interrupt Enable Set */
#define REG_AC_INTFLAG             (0x42001C06) /**< \brief (AC) Interrupt Flag Status and Clear */
#define REG_AC_STATUSA             (0x42001C07) /**< \brief (AC) Status A */
#define REG_AC_STATUSB             (0x42001C08) /**< \brief (AC) Status B */
#define REG_AC_DBGCTRL             (0x42001C09) /**< \brief (AC) Debug Control */
#define REG_AC_WINCTRL             (0x42001C0A) /**< \brief (AC) Window Control */
#define REG_AC_SCALER0             (0x42001C0C) /**< \brief (AC) Scaler 0 */
#define REG_AC_SCALER1             (0x42001C0D) /**< \brief (AC) Scaler 1 */
#define REG_AC_COMPCTRL0           (0x42001C10) /**< \brief (AC) Comparator Control 0 */
#define REG_AC_COMPCTRL1           (0x42001C14) /**< \brief (AC) Comparator Control 1 */
#define REG_AC_SYNCBUSY            (0x42001C20) /**< \brief (AC) Synchronization Busy */
#define REG_AC_CALIB               (0x42001C24) /**< \brief (AC) Calibration */
#else
#define REG_AC_CTRLA               (*(RwReg8 *)0x42001C00UL) /**< \brief (AC) Control A */
#define REG_AC_CTRLB               (*(WoReg8 *)0x42001C01UL) /**< \brief (AC) Control B */
#define REG_AC_EVCTRL              (*(RwReg16*)0x42001C02UL) /**< \brief (AC) Event Control */
#define REG_AC_INTENCLR            (*(RwReg8 *)0x42001C04UL) /**< \brief (AC) Interrupt Enable Clear */
#define REG_AC_INTENSET            (*(RwReg8 *)0x42001C05UL) /**< \brief (AC) Interrupt Enable Set */
#define REG_AC_INTFLAG             (*(RwReg8 *)0x42001C06UL) /**< \brief (AC) Interrupt Flag Status and Clear */
#define REG_AC_STATUSA             (*(RoReg8 *)0x42001C07UL) /**< \brief (AC) Status A */
#define REG_AC_STATUSB             (*(RoReg8 *)0x42001C08UL) /**< \brief (AC) Status B */
#define REG_AC_DBGCTRL             (*(RwReg8 *)0x42001C09UL) /**< \brief (AC) Debug Control */
#define REG_AC_WINCTRL             (*(RwReg8 *)0x42001C0AUL) /**< \brief (AC) Window Control */
#define REG_AC_SCALER0             (*(RwReg8 *)0x42001C0CUL) /**< \brief (AC) Scaler 0 */
#define REG_AC_SCALER1             (*(RwReg8 *)0x42001C0DUL) /**< \brief (AC) Scaler 1 */
#define REG_AC_COMPCTRL0           (*(RwReg  *)0x42001C10UL) /**< \brief (AC) Comparator Control 0 */
#define REG_AC_COMPCTRL1           (*(RwReg  *)0x42001C14UL) /**< \brief (AC) Comparator Control 1 */
#define REG_AC_SYNCBUSY            (*(RoReg  *)0x42001C20UL) /**< \brief (AC) Synchronization Busy */
#define REG_AC_CALIB               (*(RwReg16*)0x42001C24UL) /**< \brief (AC) Calibration */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _MICROCHIP_PIC32CXBZ2_AC_INSTANCE_FIXUP_H_ */
