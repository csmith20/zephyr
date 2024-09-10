/*
 * Copyright (c) 2024 Microchip
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _MICROCHIP_PIC32CXBZ2_TC0_INSTANCE_FIXUP_H_
#define _MICROCHIP_PIC32CXBZ2_TC0_INSTANCE_FIXUP_H_

/* ========== Register definition for TC0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC0_CTRLA              (0x40001400) /**< \brief (TC0) Control A */
#define REG_TC0_CTRLBCLR           (0x40001404) /**< \brief (TC0) Control B Clear */
#define REG_TC0_CTRLBSET           (0x40001405) /**< \brief (TC0) Control B Set */
#define REG_TC0_EVCTRL             (0x40001406) /**< \brief (TC0) Event Control */
#define REG_TC0_INTENCLR           (0x40001408) /**< \brief (TC0) Interrupt Enable Clear */
#define REG_TC0_INTENSET           (0x40001409) /**< \brief (TC0) Interrupt Enable Set */
#define REG_TC0_INTFLAG            (0x4000140A) /**< \brief (TC0) Interrupt Flag Status and Clear */
#define REG_TC0_STATUS             (0x4000140B) /**< \brief (TC0) Status */
#define REG_TC0_WAVE               (0x4000140C) /**< \brief (TC0) Waveform Generation Control */
#define REG_TC0_DRVCTRL            (0x4000140D) /**< \brief (TC0) Control C */
#define REG_TC0_DBGCTRL            (0x4000140F) /**< \brief (TC0) Debug Control */
#define REG_TC0_SYNCBUSY           (0x40001410) /**< \brief (TC0) Synchronization Status */
#define REG_TC0_COUNT16_COUNT      (0x40001414) /**< \brief (TC0) COUNT16 Count */
#define REG_TC0_COUNT16_CC0        (0x4000141C) /**< \brief (TC0) COUNT16 Compare and Capture 0 */
#define REG_TC0_COUNT16_CC1        (0x4000141E) /**< \brief (TC0) COUNT16 Compare and Capture 1 */
#define REG_TC0_COUNT16_CCBUF0     (0x40001430) /**< \brief (TC0) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC0_COUNT16_CCBUF1     (0x40001432) /**< \brief (TC0) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC0_COUNT32_COUNT      (0x40001414) /**< \brief (TC0) COUNT32 Count */
#define REG_TC0_COUNT32_CC0        (0x4000141C) /**< \brief (TC0) COUNT32 Compare and Capture 0 */
#define REG_TC0_COUNT32_CC1        (0x40001420) /**< \brief (TC0) COUNT32 Compare and Capture 1 */
#define REG_TC0_COUNT32_CCBUF0     (0x40001430) /**< \brief (TC0) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC0_COUNT32_CCBUF1     (0x40001434) /**< \brief (TC0) COUNT32 Compare and Capture Buffer 1 */
#define REG_TC0_COUNT8_COUNT       (0x40001414) /**< \brief (TC0) COUNT8 Count */
#define REG_TC0_COUNT8_PER         (0x4000141B) /**< \brief (TC0) COUNT8 Period */
#define REG_TC0_COUNT8_CC0         (0x4000141C) /**< \brief (TC0) COUNT8 Compare and Capture 0 */
#define REG_TC0_COUNT8_CC1         (0x4000141D) /**< \brief (TC0) COUNT8 Compare and Capture 1 */
#define REG_TC0_COUNT8_PERBUF      (0x4000142F) /**< \brief (TC0) COUNT8 Period Buffer */
#define REG_TC0_COUNT8_CCBUF0      (0x40001430) /**< \brief (TC0) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC0_COUNT8_CCBUF1      (0x40001431) /**< \brief (TC0) COUNT8 Compare and Capture Buffer 1 */
#else
#define REG_TC0_CTRLA              (*(RwReg  *)0x40001400UL) /**< \brief (TC0) Control A */
#define REG_TC0_CTRLBCLR           (*(RwReg8 *)0x40001404UL) /**< \brief (TC0) Control B Clear */
#define REG_TC0_CTRLBSET           (*(RwReg8 *)0x40001405UL) /**< \brief (TC0) Control B Set */
#define REG_TC0_EVCTRL             (*(RwReg16*)0x40001406UL) /**< \brief (TC0) Event Control */
#define REG_TC0_INTENCLR           (*(RwReg8 *)0x40001408UL) /**< \brief (TC0) Interrupt Enable Clear */
#define REG_TC0_INTENSET           (*(RwReg8 *)0x40001409UL) /**< \brief (TC0) Interrupt Enable Set */
#define REG_TC0_INTFLAG            (*(RwReg8 *)0x4000140AUL) /**< \brief (TC0) Interrupt Flag Status and Clear */
#define REG_TC0_STATUS             (*(RwReg8 *)0x4000140BUL) /**< \brief (TC0) Status */
#define REG_TC0_WAVE               (*(RwReg8 *)0x4000140CUL) /**< \brief (TC0) Waveform Generation Control */
#define REG_TC0_DRVCTRL            (*(RwReg8 *)0x4000140DUL) /**< \brief (TC0) Control C */
#define REG_TC0_DBGCTRL            (*(RwReg8 *)0x4000140FUL) /**< \brief (TC0) Debug Control */
#define REG_TC0_SYNCBUSY           (*(RoReg  *)0x40001410UL) /**< \brief (TC0) Synchronization Status */
#define REG_TC0_COUNT16_COUNT      (*(RwReg16*)0x40001414UL) /**< \brief (TC0) COUNT16 Count */
#define REG_TC0_COUNT16_CC0        (*(RwReg16*)0x4000141CUL) /**< \brief (TC0) COUNT16 Compare and Capture 0 */
#define REG_TC0_COUNT16_CC1        (*(RwReg16*)0x4000141EUL) /**< \brief (TC0) COUNT16 Compare and Capture 1 */
#define REG_TC0_COUNT16_CCBUF0     (*(RwReg16*)0x40001430UL) /**< \brief (TC0) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC0_COUNT16_CCBUF1     (*(RwReg16*)0x40001432UL) /**< \brief (TC0) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC0_COUNT32_COUNT      (*(RwReg  *)0x40001414UL) /**< \brief (TC0) COUNT32 Count */
#define REG_TC0_COUNT32_CC0        (*(RwReg  *)0x4000141CUL) /**< \brief (TC0) COUNT32 Compare and Capture 0 */
#define REG_TC0_COUNT32_CC1        (*(RwReg  *)0x40001420UL) /**< \brief (TC0) COUNT32 Compare and Capture 1 */
#define REG_TC0_COUNT32_CCBUF0     (*(RwReg  *)0x40001430UL) /**< \brief (TC0) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC0_COUNT32_CCBUF1     (*(RwReg  *)0x40001434UL) /**< \brief (TC0) COUNT32 Compare and Capture Buffer 1 */
#define REG_TC0_COUNT8_COUNT       (*(RwReg8 *)0x40001414UL) /**< \brief (TC0) COUNT8 Count */
#define REG_TC0_COUNT8_PER         (*(RwReg8 *)0x4000141BUL) /**< \brief (TC0) COUNT8 Period */
#define REG_TC0_COUNT8_CC0         (*(RwReg8 *)0x4000141CUL) /**< \brief (TC0) COUNT8 Compare and Capture 0 */
#define REG_TC0_COUNT8_CC1         (*(RwReg8 *)0x4000141DUL) /**< \brief (TC0) COUNT8 Compare and Capture 1 */
#define REG_TC0_COUNT8_PERBUF      (*(RwReg8 *)0x4000142FUL) /**< \brief (TC0) COUNT8 Period Buffer */
#define REG_TC0_COUNT8_CCBUF0      (*(RwReg8 *)0x40001430UL) /**< \brief (TC0) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC0_COUNT8_CCBUF1      (*(RwReg8 *)0x40001431UL) /**< \brief (TC0) COUNT8 Compare and Capture Buffer 1 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _MICROCHIP_PIC32CXBZ2_TC0_INSTANCE_FIXUP_H_ */
