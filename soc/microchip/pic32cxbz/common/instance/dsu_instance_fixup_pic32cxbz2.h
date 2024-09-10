/*
 * Copyright (c) 2024 Microchip
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _MICROCHIP_PIC32CXBZ2_DSU_INSTANCE_FIXUP_H_
#define _MICROCHIP_PIC32CXBZ2_DSU_INSTANCE_FIXUP_H_

/* ========== Register definition for DSU peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_DSU_CTRL               (0x41000000) /**< \brief (DSU) Control */
#define REG_DSU_STATUSA            (0x41000001) /**< \brief (DSU) Status A */
#define REG_DSU_STATUSB            (0x41000002) /**< \brief (DSU) Status B */
#define REG_DSU_ADDR               (0x41000004) /**< \brief (DSU) Address */
#define REG_DSU_LENGTH             (0x41000008) /**< \brief (DSU) Length */
#define REG_DSU_DATA               (0x4100000C) /**< \brief (DSU) Data */
#define REG_DSU_DCC0               (0x41000010) /**< \brief (DSU) Debug Communication Channel 0 */
#define REG_DSU_DCC1               (0x41000014) /**< \brief (DSU) Debug Communication Channel 1 */
#define REG_DSU_DID                (0x41000018) /**< \brief (DSU) Device Identification */
#define REG_DSU_CFG                (0x4100001C) /**< \brief (DSU) Configuration */
#define REG_DSU_ENTRY0             (0x41001000) /**< \brief (DSU) CoreSight ROM Table Entry 0 */
#define REG_DSU_ENTRY1             (0x41001004) /**< \brief (DSU) CoreSight ROM Table Entry 1 */
#define REG_DSU_END                (0x41001008) /**< \brief (DSU) CoreSight ROM Table End */
#define REG_DSU_MEMTYPE            (0x41001FCC) /**< \brief (DSU) CoreSight ROM Table Memory Type */
#define REG_DSU_PID4               (0x41001FD0) /**< \brief (DSU) Peripheral Identification 4 */
#define REG_DSU_PID5               (0x41001FD4) /**< \brief (DSU) Peripheral Identification 5 */
#define REG_DSU_PID6               (0x41001FD8) /**< \brief (DSU) Peripheral Identification 6 */
#define REG_DSU_PID7               (0x41001FDC) /**< \brief (DSU) Peripheral Identification 7 */
#define REG_DSU_PID0               (0x41001FE0) /**< \brief (DSU) Peripheral Identification 0 */
#define REG_DSU_PID1               (0x41001FE4) /**< \brief (DSU) Peripheral Identification 1 */
#define REG_DSU_PID2               (0x41001FE8) /**< \brief (DSU) Peripheral Identification 2 */
#define REG_DSU_PID3               (0x41001FEC) /**< \brief (DSU) Peripheral Identification 3 */
#define REG_DSU_CID0               (0x41001FF0) /**< \brief (DSU) Component Identification 0 */
#define REG_DSU_CID1               (0x41001FF4) /**< \brief (DSU) Component Identification 1 */
#define REG_DSU_CID2               (0x41001FF8) /**< \brief (DSU) Component Identification 2 */
#define REG_DSU_CID3               (0x41001FFC) /**< \brief (DSU) Component Identification 3 */
#else
#define REG_DSU_CTRL               (*(WoReg8 *)0x41000000UL) /**< \brief (DSU) Control */
#define REG_DSU_STATUSA            (*(RwReg8 *)0x41000001UL) /**< \brief (DSU) Status A */
#define REG_DSU_STATUSB            (*(RoReg8 *)0x41000002UL) /**< \brief (DSU) Status B */
#define REG_DSU_ADDR               (*(RwReg  *)0x41000004UL) /**< \brief (DSU) Address */
#define REG_DSU_LENGTH             (*(RwReg  *)0x41000008UL) /**< \brief (DSU) Length */
#define REG_DSU_DATA               (*(RwReg  *)0x4100000CUL) /**< \brief (DSU) Data */
#define REG_DSU_DCC0               (*(RwReg  *)0x41000010UL) /**< \brief (DSU) Debug Communication Channel 0 */
#define REG_DSU_DCC1               (*(RwReg  *)0x41000014UL) /**< \brief (DSU) Debug Communication Channel 1 */
#define REG_DSU_DID                (*(RoReg  *)0x41000018UL) /**< \brief (DSU) Device Identification */
#define REG_DSU_CFG                (*(RwReg  *)0x4100001CUL) /**< \brief (DSU) Configuration */
#define REG_DSU_ENTRY0             (*(RoReg  *)0x41001000UL) /**< \brief (DSU) CoreSight ROM Table Entry 0 */
#define REG_DSU_ENTRY1             (*(RoReg  *)0x41001004UL) /**< \brief (DSU) CoreSight ROM Table Entry 1 */
#define REG_DSU_END                (*(RoReg  *)0x41001008UL) /**< \brief (DSU) CoreSight ROM Table End */
#define REG_DSU_MEMTYPE            (*(RoReg  *)0x41001FCCUL) /**< \brief (DSU) CoreSight ROM Table Memory Type */
#define REG_DSU_PID4               (*(RoReg  *)0x41001FD0UL) /**< \brief (DSU) Peripheral Identification 4 */
#define REG_DSU_PID5               (*(RoReg  *)0x41001FD4UL) /**< \brief (DSU) Peripheral Identification 5 */
#define REG_DSU_PID6               (*(RoReg  *)0x41001FD8UL) /**< \brief (DSU) Peripheral Identification 6 */
#define REG_DSU_PID7               (*(RoReg  *)0x41001FDCUL) /**< \brief (DSU) Peripheral Identification 7 */
#define REG_DSU_PID0               (*(RoReg  *)0x41001FE0UL) /**< \brief (DSU) Peripheral Identification 0 */
#define REG_DSU_PID1               (*(RoReg  *)0x41001FE4UL) /**< \brief (DSU) Peripheral Identification 1 */
#define REG_DSU_PID2               (*(RoReg  *)0x41001FE8UL) /**< \brief (DSU) Peripheral Identification 2 */
#define REG_DSU_PID3               (*(RoReg  *)0x41001FECUL) /**< \brief (DSU) Peripheral Identification 3 */
#define REG_DSU_CID0               (*(RoReg  *)0x41001FF0UL) /**< \brief (DSU) Component Identification 0 */
#define REG_DSU_CID1               (*(RoReg  *)0x41001FF4UL) /**< \brief (DSU) Component Identification 1 */
#define REG_DSU_CID2               (*(RoReg  *)0x41001FF8UL) /**< \brief (DSU) Component Identification 2 */
#define REG_DSU_CID3               (*(RoReg  *)0x41001FFCUL) /**< \brief (DSU) Component Identification 3 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#endif /* _MICROCHIP_PIC32CXBZ2_DSU_INSTANCE_FIXUP_H_ */
