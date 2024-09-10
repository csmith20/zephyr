/*
 * Copyright (c) 2024 Microchip
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _MICROCHIP_PIC32CXBZ2_TCC1_INSTANCE_FIXUP_H_
#define _MICROCHIP_PIC32CXBZ2_TCC1_INSTANCE_FIXUP_H_

/* ========== Register definition for TCC1 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TCC1_CTRLA             (0x40002800) /**< \brief (TCC1) Control A */
#define REG_TCC1_CTRLBCLR          (0x40002804) /**< \brief (TCC1) Control B Clear */
#define REG_TCC1_CTRLBSET          (0x40002805) /**< \brief (TCC1) Control B Set */
#define REG_TCC1_SYNCBUSY          (0x40002808) /**< \brief (TCC1) Synchronization Busy */
#define REG_TCC1_FCTRLA            (0x4000280C) /**< \brief (TCC1) Recoverable Fault A Configuration */
#define REG_TCC1_FCTRLB            (0x40002810) /**< \brief (TCC1) Recoverable Fault B Configuration */
#define REG_TCC1_WEXCTRL           (0x40002814) /**< \brief (TCC1) Waveform Extension Configuration */
#define REG_TCC1_DRVCTRL           (0x40002818) /**< \brief (TCC1) Driver Control */
#define REG_TCC1_DBGCTRL           (0x4000281E) /**< \brief (TCC1) Debug Control */
#define REG_TCC1_EVCTRL            (0x40002820) /**< \brief (TCC1) Event Control */
#define REG_TCC1_INTENCLR          (0x40002824) /**< \brief (TCC1) Interrupt Enable Clear */
#define REG_TCC1_INTENSET          (0x40002828) /**< \brief (TCC1) Interrupt Enable Set */
#define REG_TCC1_INTFLAG           (0x4000282C) /**< \brief (TCC1) Interrupt Flag Status and Clear */
#define REG_TCC1_STATUS            (0x40002830) /**< \brief (TCC1) Status */
#define REG_TCC1_COUNT             (0x40002834) /**< \brief (TCC1) Count */
#define REG_TCC1_PATT              (0x40002838) /**< \brief (TCC1) Pattern */
#define REG_TCC1_WAVE              (0x4000283C) /**< \brief (TCC1) Waveform Control */
#define REG_TCC1_PER               (0x40002840) /**< \brief (TCC1) Period */
#define REG_TCC1_CC0               (0x40002844) /**< \brief (TCC1) Compare and Capture 0 */
#define REG_TCC1_CC1               (0x40002848) /**< \brief (TCC1) Compare and Capture 1 */
#define REG_TCC1_CC2               (0x4000284C) /**< \brief (TCC1) Compare and Capture 2 */
#define REG_TCC1_CC3               (0x40002850) /**< \brief (TCC1) Compare and Capture 3 */
#define REG_TCC1_PATTBUF           (0x40002864) /**< \brief (TCC1) Pattern Buffer */
#define REG_TCC1_PERBUF            (0x4000286C) /**< \brief (TCC1) Period Buffer */
#define REG_TCC1_CCBUF0            (0x40002870) /**< \brief (TCC1) Compare and Capture Buffer 0 */
#define REG_TCC1_CCBUF1            (0x40002874) /**< \brief (TCC1) Compare and Capture Buffer 1 */
#define REG_TCC1_CCBUF2            (0x40002878) /**< \brief (TCC1) Compare and Capture Buffer 2 */
#define REG_TCC1_CCBUF3            (0x4000287C) /**< \brief (TCC1) Compare and Capture Buffer 3 */
#else
#define REG_TCC1_CTRLA             (*(RwReg  *)0x40002800UL) /**< \brief (TCC1) Control A */
#define REG_TCC1_CTRLBCLR          (*(RwReg8 *)0x40002804UL) /**< \brief (TCC1) Control B Clear */
#define REG_TCC1_CTRLBSET          (*(RwReg8 *)0x40002805UL) /**< \brief (TCC1) Control B Set */
#define REG_TCC1_SYNCBUSY          (*(RoReg  *)0x40002808UL) /**< \brief (TCC1) Synchronization Busy */
#define REG_TCC1_FCTRLA            (*(RwReg  *)0x4000280CUL) /**< \brief (TCC1) Recoverable Fault A Configuration */
#define REG_TCC1_FCTRLB            (*(RwReg  *)0x40002810UL) /**< \brief (TCC1) Recoverable Fault B Configuration */
#define REG_TCC1_WEXCTRL           (*(RwReg  *)0x40002814UL) /**< \brief (TCC1) Waveform Extension Configuration */
#define REG_TCC1_DRVCTRL           (*(RwReg  *)0x40002818UL) /**< \brief (TCC1) Driver Control */
#define REG_TCC1_DBGCTRL           (*(RwReg8 *)0x4000281EUL) /**< \brief (TCC1) Debug Control */
#define REG_TCC1_EVCTRL            (*(RwReg  *)0x40002820UL) /**< \brief (TCC1) Event Control */
#define REG_TCC1_INTENCLR          (*(RwReg  *)0x40002824UL) /**< \brief (TCC1) Interrupt Enable Clear */
#define REG_TCC1_INTENSET          (*(RwReg  *)0x40002828UL) /**< \brief (TCC1) Interrupt Enable Set */
#define REG_TCC1_INTFLAG           (*(RwReg  *)0x4000282CUL) /**< \brief (TCC1) Interrupt Flag Status and Clear */
#define REG_TCC1_STATUS            (*(RwReg  *)0x40002830UL) /**< \brief (TCC1) Status */
#define REG_TCC1_COUNT             (*(RwReg  *)0x40002834UL) /**< \brief (TCC1) Count */
#define REG_TCC1_PATT              (*(RwReg16*)0x40002838UL) /**< \brief (TCC1) Pattern */
#define REG_TCC1_WAVE              (*(RwReg  *)0x4000283CUL) /**< \brief (TCC1) Waveform Control */
#define REG_TCC1_PER               (*(RwReg  *)0x40002840UL) /**< \brief (TCC1) Period */
#define REG_TCC1_CC0               (*(RwReg  *)0x40002844UL) /**< \brief (TCC1) Compare and Capture 0 */
#define REG_TCC1_CC1               (*(RwReg  *)0x40002848UL) /**< \brief (TCC1) Compare and Capture 1 */
#define REG_TCC1_CC2               (*(RwReg  *)0x4000284CUL) /**< \brief (TCC1) Compare and Capture 2 */
#define REG_TCC1_CC3               (*(RwReg  *)0x40002850UL) /**< \brief (TCC1) Compare and Capture 3 */
#define REG_TCC1_PATTBUF           (*(RwReg16*)0x40002864UL) /**< \brief (TCC1) Pattern Buffer */
#define REG_TCC1_PERBUF            (*(RwReg  *)0x4000286CUL) /**< \brief (TCC1) Period Buffer */
#define REG_TCC1_CCBUF0            (*(RwReg  *)0x40002870UL) /**< \brief (TCC1) Compare and Capture Buffer 0 */
#define REG_TCC1_CCBUF1            (*(RwReg  *)0x40002874UL) /**< \brief (TCC1) Compare and Capture Buffer 1 */
#define REG_TCC1_CCBUF2            (*(RwReg  *)0x40002878UL) /**< \brief (TCC1) Compare and Capture Buffer 2 */
#define REG_TCC1_CCBUF3            (*(RwReg  *)0x4000287CUL) /**< \brief (TCC1) Compare and Capture Buffer 3 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _MICROCHIP_PIC32CXBZ2_TCC1_INSTANCE_FIXUP_H_ */
