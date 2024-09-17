/*
 * Copyright (c) 2024 Microchip
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _MICROCHIP_PIC32CXBZ2_TC2_INSTANCE_FIXUP_H_
#define _MICROCHIP_PIC32CXBZ2_TC2_INSTANCE_FIXUP_H_

/* ========== Register definition for TC2 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC2_CTRLA              (0x40001C00) /**< \brief (TC2) Control A */
#define REG_TC2_CTRLBCLR           (0x40001C04) /**< \brief (TC2) Control B Clear */
#define REG_TC2_CTRLBSET           (0x40001C05) /**< \brief (TC2) Control B Set */
#define REG_TC2_EVCTRL             (0x40001C06) /**< \brief (TC2) Event Control */
#define REG_TC2_INTENCLR           (0x40001C08) /**< \brief (TC2) Interrupt Enable Clear */
#define REG_TC2_INTENSET           (0x40001C09) /**< \brief (TC2) Interrupt Enable Set */
#define REG_TC2_INTFLAG            (0x40001C0A) /**< \brief (TC2) Interrupt Flag Status and Clear */
#define REG_TC2_STATUS             (0x40001C0B) /**< \brief (TC2) Status */
#define REG_TC2_WAVE               (0x40001C0C) /**< \brief (TC2) Waveform Generation Control */
#define REG_TC2_DRVCTRL            (0x40001C0D) /**< \brief (TC2) Control C */
#define REG_TC2_DBGCTRL            (0x40001C0F) /**< \brief (TC2) Debug Control */
#define REG_TC2_SYNCBUSY           (0x40001C10) /**< \brief (TC2) Synchronization Status */
#define REG_TC2_COUNT16_COUNT      (0x40001C14) /**< \brief (TC2) COUNT16 Count */
#define REG_TC2_COUNT16_CC0        (0x40001C1C) /**< \brief (TC2) COUNT16 Compare and Capture 0 */
#define REG_TC2_COUNT16_CC1        (0x40001C1E) /**< \brief (TC2) COUNT16 Compare and Capture 1 */
#define REG_TC2_COUNT16_CCBUF0     (0x40001C30) /**< \brief (TC2) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC2_COUNT16_CCBUF1     (0x40001C32) /**< \brief (TC2) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC2_COUNT32_COUNT      (0x40001C14) /**< \brief (TC2) COUNT32 Count */
#define REG_TC2_COUNT32_CC0        (0x40001C1C) /**< \brief (TC2) COUNT32 Compare and Capture 0 */
#define REG_TC2_COUNT32_CC1        (0x40001C20) /**< \brief (TC2) COUNT32 Compare and Capture 1 */
#define REG_TC2_COUNT32_CCBUF0     (0x40001C30) /**< \brief (TC2) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC2_COUNT32_CCBUF1     (0x40001C34) /**< \brief (TC2) COUNT32 Compare and Capture Buffer 1 */
#define REG_TC2_COUNT8_COUNT       (0x40001C14) /**< \brief (TC2) COUNT8 Count */
#define REG_TC2_COUNT8_PER         (0x40001C1B) /**< \brief (TC2) COUNT8 Period */
#define REG_TC2_COUNT8_CC0         (0x40001C1C) /**< \brief (TC2) COUNT8 Compare and Capture 0 */
#define REG_TC2_COUNT8_CC1         (0x40001C1D) /**< \brief (TC2) COUNT8 Compare and Capture 1 */
#define REG_TC2_COUNT8_PERBUF      (0x40001C2F) /**< \brief (TC2) COUNT8 Period Buffer */
#define REG_TC2_COUNT8_CCBUF0      (0x40001C30) /**< \brief (TC2) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC2_COUNT8_CCBUF1      (0x40001C31) /**< \brief (TC2) COUNT8 Compare and Capture Buffer 1 */
#else
#define REG_TC2_CTRLA              (*(RwReg  *)0x40001C00UL) /**< \brief (TC2) Control A */
#define REG_TC2_CTRLBCLR           (*(RwReg8 *)0x40001C04UL) /**< \brief (TC2) Control B Clear */
#define REG_TC2_CTRLBSET           (*(RwReg8 *)0x40001C05UL) /**< \brief (TC2) Control B Set */
#define REG_TC2_EVCTRL             (*(RwReg16*)0x40001C06UL) /**< \brief (TC2) Event Control */
#define REG_TC2_INTENCLR           (*(RwReg8 *)0x40001C08UL) /**< \brief (TC2) Interrupt Enable Clear */
#define REG_TC2_INTENSET           (*(RwReg8 *)0x40001C09UL) /**< \brief (TC2) Interrupt Enable Set */
#define REG_TC2_INTFLAG            (*(RwReg8 *)0x40001C0AUL) /**< \brief (TC2) Interrupt Flag Status and Clear */
#define REG_TC2_STATUS             (*(RwReg8 *)0x40001C0BUL) /**< \brief (TC2) Status */
#define REG_TC2_WAVE               (*(RwReg8 *)0x40001C0CUL) /**< \brief (TC2) Waveform Generation Control */
#define REG_TC2_DRVCTRL            (*(RwReg8 *)0x40001C0DUL) /**< \brief (TC2) Control C */
#define REG_TC2_DBGCTRL            (*(RwReg8 *)0x40001C0FUL) /**< \brief (TC2) Debug Control */
#define REG_TC2_SYNCBUSY           (*(RoReg  *)0x40001C10UL) /**< \brief (TC2) Synchronization Status */
#define REG_TC2_COUNT16_COUNT      (*(RwReg16*)0x40001C14UL) /**< \brief (TC2) COUNT16 Count */
#define REG_TC2_COUNT16_CC0        (*(RwReg16*)0x40001C1CUL) /**< \brief (TC2) COUNT16 Compare and Capture 0 */
#define REG_TC2_COUNT16_CC1        (*(RwReg16*)0x40001C1EUL) /**< \brief (TC2) COUNT16 Compare and Capture 1 */
#define REG_TC2_COUNT16_CCBUF0     (*(RwReg16*)0x40001C30UL) /**< \brief (TC2) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC2_COUNT16_CCBUF1     (*(RwReg16*)0x40001C32UL) /**< \brief (TC2) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC2_COUNT32_COUNT      (*(RwReg  *)0x40001C14UL) /**< \brief (TC2) COUNT32 Count */
#define REG_TC2_COUNT32_CC0        (*(RwReg  *)0x40001C1CUL) /**< \brief (TC2) COUNT32 Compare and Capture 0 */
#define REG_TC2_COUNT32_CC1        (*(RwReg  *)0x40001C20UL) /**< \brief (TC2) COUNT32 Compare and Capture 1 */
#define REG_TC2_COUNT32_CCBUF0     (*(RwReg  *)0x40001C30UL) /**< \brief (TC2) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC2_COUNT32_CCBUF1     (*(RwReg  *)0x40001C34UL) /**< \brief (TC2) COUNT32 Compare and Capture Buffer 1 */
#define REG_TC2_COUNT8_COUNT       (*(RwReg8 *)0x40001C14UL) /**< \brief (TC2) COUNT8 Count */
#define REG_TC2_COUNT8_PER         (*(RwReg8 *)0x40001C1BUL) /**< \brief (TC2) COUNT8 Period */
#define REG_TC2_COUNT8_CC0         (*(RwReg8 *)0x40001C1CUL) /**< \brief (TC2) COUNT8 Compare and Capture 0 */
#define REG_TC2_COUNT8_CC1         (*(RwReg8 *)0x40001C1DUL) /**< \brief (TC2) COUNT8 Compare and Capture 1 */
#define REG_TC2_COUNT8_PERBUF      (*(RwReg8 *)0x40001C2FUL) /**< \brief (TC2) COUNT8 Period Buffer */
#define REG_TC2_COUNT8_CCBUF0      (*(RwReg8 *)0x40001C30UL) /**< \brief (TC2) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC2_COUNT8_CCBUF1      (*(RwReg8 *)0x40001C31UL) /**< \brief (TC2) COUNT8 Compare and Capture Buffer 1 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _MICROCHIP_PIC32CXBZ2_TC2_INSTANCE_FIXUP_H_ */
