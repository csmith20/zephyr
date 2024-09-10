/*
 * Copyright (c) 2024 Microchip
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _MICROCHIP_PIC32CXBZ2_TC1_INSTANCE_FIXUP_H_
#define _MICROCHIP_PIC32CXBZ2_TC1_INSTANCE_FIXUP_H_

/* ========== Register definition for TC1 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC1_CTRLA              (0x40001800) /**< \brief (TC1) Control A */
#define REG_TC1_CTRLBCLR           (0x40001804) /**< \brief (TC1) Control B Clear */
#define REG_TC1_CTRLBSET           (0x40001805) /**< \brief (TC1) Control B Set */
#define REG_TC1_EVCTRL             (0x40001806) /**< \brief (TC1) Event Control */
#define REG_TC1_INTENCLR           (0x40001808) /**< \brief (TC1) Interrupt Enable Clear */
#define REG_TC1_INTENSET           (0x40001809) /**< \brief (TC1) Interrupt Enable Set */
#define REG_TC1_INTFLAG            (0x4000180A) /**< \brief (TC1) Interrupt Flag Status and Clear */
#define REG_TC1_STATUS             (0x4000180B) /**< \brief (TC1) Status */
#define REG_TC1_WAVE               (0x4000180C) /**< \brief (TC1) Waveform Generation Control */
#define REG_TC1_DRVCTRL            (0x4000180D) /**< \brief (TC1) Control C */
#define REG_TC1_DBGCTRL            (0x4000180F) /**< \brief (TC1) Debug Control */
#define REG_TC1_SYNCBUSY           (0x40001810) /**< \brief (TC1) Synchronization Status */
#define REG_TC1_COUNT16_COUNT      (0x40001814) /**< \brief (TC1) COUNT16 Count */
#define REG_TC1_COUNT16_CC0        (0x4000181C) /**< \brief (TC1) COUNT16 Compare and Capture 0 */
#define REG_TC1_COUNT16_CC1        (0x4000181E) /**< \brief (TC1) COUNT16 Compare and Capture 1 */
#define REG_TC1_COUNT16_CCBUF0     (0x40001830) /**< \brief (TC1) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC1_COUNT16_CCBUF1     (0x40001832) /**< \brief (TC1) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC1_COUNT32_COUNT      (0x40001814) /**< \brief (TC1) COUNT32 Count */
#define REG_TC1_COUNT32_CC0        (0x4000181C) /**< \brief (TC1) COUNT32 Compare and Capture 0 */
#define REG_TC1_COUNT32_CC1        (0x40001820) /**< \brief (TC1) COUNT32 Compare and Capture 1 */
#define REG_TC1_COUNT32_CCBUF0     (0x40001830) /**< \brief (TC1) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC1_COUNT32_CCBUF1     (0x40001834) /**< \brief (TC1) COUNT32 Compare and Capture Buffer 1 */
#define REG_TC1_COUNT8_COUNT       (0x40001814) /**< \brief (TC1) COUNT8 Count */
#define REG_TC1_COUNT8_PER         (0x4000181B) /**< \brief (TC1) COUNT8 Period */
#define REG_TC1_COUNT8_CC0         (0x4000181C) /**< \brief (TC1) COUNT8 Compare and Capture 0 */
#define REG_TC1_COUNT8_CC1         (0x4000181D) /**< \brief (TC1) COUNT8 Compare and Capture 1 */
#define REG_TC1_COUNT8_PERBUF      (0x4000182F) /**< \brief (TC1) COUNT8 Period Buffer */
#define REG_TC1_COUNT8_CCBUF0      (0x40001830) /**< \brief (TC1) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC1_COUNT8_CCBUF1      (0x40001831) /**< \brief (TC1) COUNT8 Compare and Capture Buffer 1 */
#else
#define REG_TC1_CTRLA              (*(RwReg  *)0x40001800UL) /**< \brief (TC1) Control A */
#define REG_TC1_CTRLBCLR           (*(RwReg8 *)0x40001804UL) /**< \brief (TC1) Control B Clear */
#define REG_TC1_CTRLBSET           (*(RwReg8 *)0x40001805UL) /**< \brief (TC1) Control B Set */
#define REG_TC1_EVCTRL             (*(RwReg16*)0x40001806UL) /**< \brief (TC1) Event Control */
#define REG_TC1_INTENCLR           (*(RwReg8 *)0x40001808UL) /**< \brief (TC1) Interrupt Enable Clear */
#define REG_TC1_INTENSET           (*(RwReg8 *)0x40001809UL) /**< \brief (TC1) Interrupt Enable Set */
#define REG_TC1_INTFLAG            (*(RwReg8 *)0x4000180AUL) /**< \brief (TC1) Interrupt Flag Status and Clear */
#define REG_TC1_STATUS             (*(RwReg8 *)0x4000180BUL) /**< \brief (TC1) Status */
#define REG_TC1_WAVE               (*(RwReg8 *)0x4000180CUL) /**< \brief (TC1) Waveform Generation Control */
#define REG_TC1_DRVCTRL            (*(RwReg8 *)0x4000180DUL) /**< \brief (TC1) Control C */
#define REG_TC1_DBGCTRL            (*(RwReg8 *)0x4000180FUL) /**< \brief (TC1) Debug Control */
#define REG_TC1_SYNCBUSY           (*(RoReg  *)0x40001810UL) /**< \brief (TC1) Synchronization Status */
#define REG_TC1_COUNT16_COUNT      (*(RwReg16*)0x40001814UL) /**< \brief (TC1) COUNT16 Count */
#define REG_TC1_COUNT16_CC0        (*(RwReg16*)0x4000181CUL) /**< \brief (TC1) COUNT16 Compare and Capture 0 */
#define REG_TC1_COUNT16_CC1        (*(RwReg16*)0x4000181EUL) /**< \brief (TC1) COUNT16 Compare and Capture 1 */
#define REG_TC1_COUNT16_CCBUF0     (*(RwReg16*)0x40001830UL) /**< \brief (TC1) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC1_COUNT16_CCBUF1     (*(RwReg16*)0x40001832UL) /**< \brief (TC1) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC1_COUNT32_COUNT      (*(RwReg  *)0x40001814UL) /**< \brief (TC1) COUNT32 Count */
#define REG_TC1_COUNT32_CC0        (*(RwReg  *)0x4000181CUL) /**< \brief (TC1) COUNT32 Compare and Capture 0 */
#define REG_TC1_COUNT32_CC1        (*(RwReg  *)0x40001820UL) /**< \brief (TC1) COUNT32 Compare and Capture 1 */
#define REG_TC1_COUNT32_CCBUF0     (*(RwReg  *)0x40001830UL) /**< \brief (TC1) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC1_COUNT32_CCBUF1     (*(RwReg  *)0x40001834UL) /**< \brief (TC1) COUNT32 Compare and Capture Buffer 1 */
#define REG_TC1_COUNT8_COUNT       (*(RwReg8 *)0x40001814UL) /**< \brief (TC1) COUNT8 Count */
#define REG_TC1_COUNT8_PER         (*(RwReg8 *)0x4000181BUL) /**< \brief (TC1) COUNT8 Period */
#define REG_TC1_COUNT8_CC0         (*(RwReg8 *)0x4000181CUL) /**< \brief (TC1) COUNT8 Compare and Capture 0 */
#define REG_TC1_COUNT8_CC1         (*(RwReg8 *)0x4000181DUL) /**< \brief (TC1) COUNT8 Compare and Capture 1 */
#define REG_TC1_COUNT8_PERBUF      (*(RwReg8 *)0x4000182FUL) /**< \brief (TC1) COUNT8 Period Buffer */
#define REG_TC1_COUNT8_CCBUF0      (*(RwReg8 *)0x40001830UL) /**< \brief (TC1) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC1_COUNT8_CCBUF1      (*(RwReg8 *)0x40001831UL) /**< \brief (TC1) COUNT8 Compare and Capture Buffer 1 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _MICROCHIP_PIC32CXBZ2_TC1_INSTANCE_FIXUP_H_ */
