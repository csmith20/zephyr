/*
 * Copyright (c) 2024 Microchip
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _MICROCHIP_PIC32CXBZ2_TCC0_INSTANCE_FIXUP_H_
#define _MICROCHIP_PIC32CXBZ2_TCC0_INSTANCE_FIXUP_H_

/* ========== Register definition for TCC0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TCC0_CTRLA             (0x40002400) /**< \brief (TCC0) Control A */
#define REG_TCC0_CTRLBCLR          (0x40002404) /**< \brief (TCC0) Control B Clear */
#define REG_TCC0_CTRLBSET          (0x40002405) /**< \brief (TCC0) Control B Set */
#define REG_TCC0_SYNCBUSY          (0x40002408) /**< \brief (TCC0) Synchronization Busy */
#define REG_TCC0_FCTRLA            (0x4000240C) /**< \brief (TCC0) Recoverable Fault A Configuration */
#define REG_TCC0_FCTRLB            (0x40002410) /**< \brief (TCC0) Recoverable Fault B Configuration */
#define REG_TCC0_WEXCTRL           (0x40002414) /**< \brief (TCC0) Waveform Extension Configuration */
#define REG_TCC0_DRVCTRL           (0x40002418) /**< \brief (TCC0) Driver Control */
#define REG_TCC0_DBGCTRL           (0x4000241E) /**< \brief (TCC0) Debug Control */
#define REG_TCC0_EVCTRL            (0x40002420) /**< \brief (TCC0) Event Control */
#define REG_TCC0_INTENCLR          (0x40002424) /**< \brief (TCC0) Interrupt Enable Clear */
#define REG_TCC0_INTENSET          (0x40002428) /**< \brief (TCC0) Interrupt Enable Set */
#define REG_TCC0_INTFLAG           (0x4000242C) /**< \brief (TCC0) Interrupt Flag Status and Clear */
#define REG_TCC0_STATUS            (0x40002430) /**< \brief (TCC0) Status */
#define REG_TCC0_COUNT             (0x40002434) /**< \brief (TCC0) Count */
#define REG_TCC0_PATT              (0x40002438) /**< \brief (TCC0) Pattern */
#define REG_TCC0_WAVE              (0x4000243C) /**< \brief (TCC0) Waveform Control */
#define REG_TCC0_PER               (0x40002440) /**< \brief (TCC0) Period */
#define REG_TCC0_CC0               (0x40002444) /**< \brief (TCC0) Compare and Capture 0 */
#define REG_TCC0_CC1               (0x40002448) /**< \brief (TCC0) Compare and Capture 1 */
#define REG_TCC0_CC2               (0x4000244C) /**< \brief (TCC0) Compare and Capture 2 */
#define REG_TCC0_CC3               (0x40002450) /**< \brief (TCC0) Compare and Capture 3 */
#define REG_TCC0_CC4               (0x40002454) /**< \brief (TCC0) Compare and Capture 4 */
#define REG_TCC0_CC5               (0x40002458) /**< \brief (TCC0) Compare and Capture 5 */
#define REG_TCC0_PATTBUF           (0x40002464) /**< \brief (TCC0) Pattern Buffer */
#define REG_TCC0_PERBUF            (0x4000246C) /**< \brief (TCC0) Period Buffer */
#define REG_TCC0_CCBUF0            (0x40002470) /**< \brief (TCC0) Compare and Capture Buffer 0 */
#define REG_TCC0_CCBUF1            (0x40002474) /**< \brief (TCC0) Compare and Capture Buffer 1 */
#define REG_TCC0_CCBUF2            (0x40002478) /**< \brief (TCC0) Compare and Capture Buffer 2 */
#define REG_TCC0_CCBUF3            (0x4000247C) /**< \brief (TCC0) Compare and Capture Buffer 3 */
#define REG_TCC0_CCBUF4            (0x40002480) /**< \brief (TCC0) Compare and Capture Buffer 4 */
#define REG_TCC0_CCBUF5            (0x40002484) /**< \brief (TCC0) Compare and Capture Buffer 5 */
#else
#define REG_TCC0_CTRLA             (*(RwReg  *)0x40002400UL) /**< \brief (TCC0) Control A */
#define REG_TCC0_CTRLBCLR          (*(RwReg8 *)0x40002404UL) /**< \brief (TCC0) Control B Clear */
#define REG_TCC0_CTRLBSET          (*(RwReg8 *)0x40002405UL) /**< \brief (TCC0) Control B Set */
#define REG_TCC0_SYNCBUSY          (*(RoReg  *)0x40002408UL) /**< \brief (TCC0) Synchronization Busy */
#define REG_TCC0_FCTRLA            (*(RwReg  *)0x4000240CUL) /**< \brief (TCC0) Recoverable Fault A Configuration */
#define REG_TCC0_FCTRLB            (*(RwReg  *)0x40002410UL) /**< \brief (TCC0) Recoverable Fault B Configuration */
#define REG_TCC0_WEXCTRL           (*(RwReg  *)0x40002414UL) /**< \brief (TCC0) Waveform Extension Configuration */
#define REG_TCC0_DRVCTRL           (*(RwReg  *)0x40002418UL) /**< \brief (TCC0) Driver Control */
#define REG_TCC0_DBGCTRL           (*(RwReg8 *)0x4000241EUL) /**< \brief (TCC0) Debug Control */
#define REG_TCC0_EVCTRL            (*(RwReg  *)0x40002420UL) /**< \brief (TCC0) Event Control */
#define REG_TCC0_INTENCLR          (*(RwReg  *)0x40002424UL) /**< \brief (TCC0) Interrupt Enable Clear */
#define REG_TCC0_INTENSET          (*(RwReg  *)0x40002428UL) /**< \brief (TCC0) Interrupt Enable Set */
#define REG_TCC0_INTFLAG           (*(RwReg  *)0x4000242CUL) /**< \brief (TCC0) Interrupt Flag Status and Clear */
#define REG_TCC0_STATUS            (*(RwReg  *)0x40002430UL) /**< \brief (TCC0) Status */
#define REG_TCC0_COUNT             (*(RwReg  *)0x40002434UL) /**< \brief (TCC0) Count */
#define REG_TCC0_PATT              (*(RwReg16*)0x40002438UL) /**< \brief (TCC0) Pattern */
#define REG_TCC0_WAVE              (*(RwReg  *)0x4000243CUL) /**< \brief (TCC0) Waveform Control */
#define REG_TCC0_PER               (*(RwReg  *)0x40002440UL) /**< \brief (TCC0) Period */
#define REG_TCC0_CC0               (*(RwReg  *)0x40002444UL) /**< \brief (TCC0) Compare and Capture 0 */
#define REG_TCC0_CC1               (*(RwReg  *)0x40002448UL) /**< \brief (TCC0) Compare and Capture 1 */
#define REG_TCC0_CC2               (*(RwReg  *)0x4000244CUL) /**< \brief (TCC0) Compare and Capture 2 */
#define REG_TCC0_CC3               (*(RwReg  *)0x40002450UL) /**< \brief (TCC0) Compare and Capture 3 */
#define REG_TCC0_CC4               (*(RwReg  *)0x40002454UL) /**< \brief (TCC0) Compare and Capture 4 */
#define REG_TCC0_CC5               (*(RwReg  *)0x40002458UL) /**< \brief (TCC0) Compare and Capture 5 */
#define REG_TCC0_PATTBUF           (*(RwReg16*)0x40002464UL) /**< \brief (TCC0) Pattern Buffer */
#define REG_TCC0_PERBUF            (*(RwReg  *)0x4000246CUL) /**< \brief (TCC0) Period Buffer */
#define REG_TCC0_CCBUF0            (*(RwReg  *)0x40002470UL) /**< \brief (TCC0) Compare and Capture Buffer 0 */
#define REG_TCC0_CCBUF1            (*(RwReg  *)0x40002474UL) /**< \brief (TCC0) Compare and Capture Buffer 1 */
#define REG_TCC0_CCBUF2            (*(RwReg  *)0x40002478UL) /**< \brief (TCC0) Compare and Capture Buffer 2 */
#define REG_TCC0_CCBUF3            (*(RwReg  *)0x4000247CUL) /**< \brief (TCC0) Compare and Capture Buffer 3 */
#define REG_TCC0_CCBUF4            (*(RwReg  *)0x40002480UL) /**< \brief (TCC0) Compare and Capture Buffer 4 */
#define REG_TCC0_CCBUF5            (*(RwReg  *)0x40002484UL) /**< \brief (TCC0) Compare and Capture Buffer 5 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _MICROCHIP_PIC32CXBZ2_TCC0_INSTANCE_FIXUP_H_ */
