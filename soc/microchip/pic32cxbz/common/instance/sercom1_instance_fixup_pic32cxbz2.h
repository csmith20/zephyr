/*
 * Copyright (c) 2024 Microchip
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _MICROCHIP_PIC32CXBZ2_SERCOM1_INSTANCE_FIXUP_H_
#define _MICROCHIP_PIC32CXBZ2_SERCOM1_INSTANCE_FIXUP_H_

/* ========== Register definition for SERCOM1 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_SERCOM1_I2CM_CTRLA     (0x40001000) /**< \brief (SERCOM1) I2CM Control A */
#define REG_SERCOM1_I2CM_CTRLB     (0x40001004) /**< \brief (SERCOM1) I2CM Control B */
#define REG_SERCOM1_I2CM_CTRLC     (0x40001008) /**< \brief (SERCOM1) I2CM Control C */
#define REG_SERCOM1_I2CM_BAUD      (0x4000100C) /**< \brief (SERCOM1) I2CM Baud Rate */
#define REG_SERCOM1_I2CM_INTENCLR  (0x40001014) /**< \brief (SERCOM1) I2CM Interrupt Enable Clear */
#define REG_SERCOM1_I2CM_INTENSET  (0x40001016) /**< \brief (SERCOM1) I2CM Interrupt Enable Set */
#define REG_SERCOM1_I2CM_INTFLAG   (0x40001018) /**< \brief (SERCOM1) I2CM Interrupt Flag Status and Clear */
#define REG_SERCOM1_I2CM_STATUS    (0x4000101A) /**< \brief (SERCOM1) I2CM Status */
#define REG_SERCOM1_I2CM_SYNCBUSY  (0x4000101C) /**< \brief (SERCOM1) I2CM Synchronization Busy */
#define REG_SERCOM1_I2CM_ADDR      (0x40001024) /**< \brief (SERCOM1) I2CM Address */
#define REG_SERCOM1_I2CM_DATA      (0x40001028) /**< \brief (SERCOM1) I2CM Data */
#define REG_SERCOM1_I2CM_DBGCTRL   (0x40001030) /**< \brief (SERCOM1) I2CM Debug Control */
#define REG_SERCOM1_I2CS_CTRLA     (0x40001000) /**< \brief (SERCOM1) I2CS Control A */
#define REG_SERCOM1_I2CS_CTRLB     (0x40001004) /**< \brief (SERCOM1) I2CS Control B */
#define REG_SERCOM1_I2CS_CTRLC     (0x40001008) /**< \brief (SERCOM1) I2CS Control C */
#define REG_SERCOM1_I2CS_INTENCLR  (0x40001014) /**< \brief (SERCOM1) I2CS Interrupt Enable Clear */
#define REG_SERCOM1_I2CS_INTENSET  (0x40001016) /**< \brief (SERCOM1) I2CS Interrupt Enable Set */
#define REG_SERCOM1_I2CS_INTFLAG   (0x40001018) /**< \brief (SERCOM1) I2CS Interrupt Flag Status and Clear */
#define REG_SERCOM1_I2CS_STATUS    (0x4000101A) /**< \brief (SERCOM1) I2CS Status */
#define REG_SERCOM1_I2CS_SYNCBUSY  (0x4000101C) /**< \brief (SERCOM1) I2CS Synchronization Busy */
#define REG_SERCOM1_I2CS_LENGTH    (0x40001022) /**< \brief (SERCOM1) I2CS Length */
#define REG_SERCOM1_I2CS_ADDR      (0x40001024) /**< \brief (SERCOM1) I2CS Address */
#define REG_SERCOM1_I2CS_DATA      (0x40001028) /**< \brief (SERCOM1) I2CS Data */
#define REG_SERCOM1_SPI_CTRLA      (0x40001000) /**< \brief (SERCOM1) SPI Control A */
#define REG_SERCOM1_SPI_CTRLB      (0x40001004) /**< \brief (SERCOM1) SPI Control B */
#define REG_SERCOM1_SPI_CTRLC      (0x40001008) /**< \brief (SERCOM1) SPI Control C */
#define REG_SERCOM1_SPI_BAUD       (0x4000100C) /**< \brief (SERCOM1) SPI Baud Rate */
#define REG_SERCOM1_SPI_INTENCLR   (0x40001014) /**< \brief (SERCOM1) SPI Interrupt Enable Clear */
#define REG_SERCOM1_SPI_INTENSET   (0x40001016) /**< \brief (SERCOM1) SPI Interrupt Enable Set */
#define REG_SERCOM1_SPI_INTFLAG    (0x40001018) /**< \brief (SERCOM1) SPI Interrupt Flag Status and Clear */
#define REG_SERCOM1_SPI_STATUS     (0x4000101A) /**< \brief (SERCOM1) SPI Status */
#define REG_SERCOM1_SPI_SYNCBUSY   (0x4000101C) /**< \brief (SERCOM1) SPI Synchronization Busy */
#define REG_SERCOM1_SPI_LENGTH     (0x40001022) /**< \brief (SERCOM1) SPI Length */
#define REG_SERCOM1_SPI_ADDR       (0x40001024) /**< \brief (SERCOM1) SPI Address */
#define REG_SERCOM1_SPI_DATA       (0x40001028) /**< \brief (SERCOM1) SPI Data */
#define REG_SERCOM1_SPI_DBGCTRL    (0x40001030) /**< \brief (SERCOM1) SPI Debug Control */
#define REG_SERCOM1_USART_CTRLA    (0x40001000) /**< \brief (SERCOM1) USART Control A */
#define REG_SERCOM1_USART_CTRLB    (0x40001004) /**< \brief (SERCOM1) USART Control B */
#define REG_SERCOM1_USART_CTRLC    (0x40001008) /**< \brief (SERCOM1) USART Control C */
#define REG_SERCOM1_USART_BAUD     (0x4000100C) /**< \brief (SERCOM1) USART Baud Rate */
#define REG_SERCOM1_USART_RXPL     (0x4000100E) /**< \brief (SERCOM1) USART Receive Pulse Length */
#define REG_SERCOM1_USART_INTENCLR (0x40001014) /**< \brief (SERCOM1) USART Interrupt Enable Clear */
#define REG_SERCOM1_USART_INTENSET (0x40001016) /**< \brief (SERCOM1) USART Interrupt Enable Set */
#define REG_SERCOM1_USART_INTFLAG  (0x40001018) /**< \brief (SERCOM1) USART Interrupt Flag Status and Clear */
#define REG_SERCOM1_USART_STATUS   (0x4000101A) /**< \brief (SERCOM1) USART Status */
#define REG_SERCOM1_USART_SYNCBUSY (0x4000101C) /**< \brief (SERCOM1) USART Synchronization Busy */
#define REG_SERCOM1_USART_RXERRCNT (0x40001020) /**< \brief (SERCOM1) USART Receive Error Count */
#define REG_SERCOM1_USART_LENGTH   (0x40001022) /**< \brief (SERCOM1) USART Length */
#define REG_SERCOM1_USART_DATA     (0x40001028) /**< \brief (SERCOM1) USART Data */
#define REG_SERCOM1_USART_DBGCTRL  (0x40001030) /**< \brief (SERCOM1) USART Debug Control */
#else
#define REG_SERCOM1_I2CM_CTRLA     (*(RwReg  *)0x40001000UL) /**< \brief (SERCOM1) I2CM Control A */
#define REG_SERCOM1_I2CM_CTRLB     (*(RwReg  *)0x40001004UL) /**< \brief (SERCOM1) I2CM Control B */
#define REG_SERCOM1_I2CM_CTRLC     (*(RwReg  *)0x40001008UL) /**< \brief (SERCOM1) I2CM Control C */
#define REG_SERCOM1_I2CM_BAUD      (*(RwReg  *)0x4000100CUL) /**< \brief (SERCOM1) I2CM Baud Rate */
#define REG_SERCOM1_I2CM_INTENCLR  (*(RwReg8 *)0x40001014UL) /**< \brief (SERCOM1) I2CM Interrupt Enable Clear */
#define REG_SERCOM1_I2CM_INTENSET  (*(RwReg8 *)0x40001016UL) /**< \brief (SERCOM1) I2CM Interrupt Enable Set */
#define REG_SERCOM1_I2CM_INTFLAG   (*(RwReg8 *)0x40001018UL) /**< \brief (SERCOM1) I2CM Interrupt Flag Status and Clear */
#define REG_SERCOM1_I2CM_STATUS    (*(RwReg16*)0x4000101AUL) /**< \brief (SERCOM1) I2CM Status */
#define REG_SERCOM1_I2CM_SYNCBUSY  (*(RoReg  *)0x4000101CUL) /**< \brief (SERCOM1) I2CM Synchronization Busy */
#define REG_SERCOM1_I2CM_ADDR      (*(RwReg  *)0x40001024UL) /**< \brief (SERCOM1) I2CM Address */
#define REG_SERCOM1_I2CM_DATA      (*(RwReg  *)0x40001028UL) /**< \brief (SERCOM1) I2CM Data */
#define REG_SERCOM1_I2CM_DBGCTRL   (*(RwReg8 *)0x40001030UL) /**< \brief (SERCOM1) I2CM Debug Control */
#define REG_SERCOM1_I2CS_CTRLA     (*(RwReg  *)0x40001000UL) /**< \brief (SERCOM1) I2CS Control A */
#define REG_SERCOM1_I2CS_CTRLB     (*(RwReg  *)0x40001004UL) /**< \brief (SERCOM1) I2CS Control B */
#define REG_SERCOM1_I2CS_CTRLC     (*(RwReg  *)0x40001008UL) /**< \brief (SERCOM1) I2CS Control C */
#define REG_SERCOM1_I2CS_INTENCLR  (*(RwReg8 *)0x40001014UL) /**< \brief (SERCOM1) I2CS Interrupt Enable Clear */
#define REG_SERCOM1_I2CS_INTENSET  (*(RwReg8 *)0x40001016UL) /**< \brief (SERCOM1) I2CS Interrupt Enable Set */
#define REG_SERCOM1_I2CS_INTFLAG   (*(RwReg8 *)0x40001018UL) /**< \brief (SERCOM1) I2CS Interrupt Flag Status and Clear */
#define REG_SERCOM1_I2CS_STATUS    (*(RwReg16*)0x4000101AUL) /**< \brief (SERCOM1) I2CS Status */
#define REG_SERCOM1_I2CS_SYNCBUSY  (*(RoReg  *)0x4000101CUL) /**< \brief (SERCOM1) I2CS Synchronization Busy */
#define REG_SERCOM1_I2CS_LENGTH    (*(RwReg16*)0x40001022UL) /**< \brief (SERCOM1) I2CS Length */
#define REG_SERCOM1_I2CS_ADDR      (*(RwReg  *)0x40001024UL) /**< \brief (SERCOM1) I2CS Address */
#define REG_SERCOM1_I2CS_DATA      (*(RwReg  *)0x40001028UL) /**< \brief (SERCOM1) I2CS Data */
#define REG_SERCOM1_SPI_CTRLA      (*(RwReg  *)0x40001000UL) /**< \brief (SERCOM1) SPI Control A */
#define REG_SERCOM1_SPI_CTRLB      (*(RwReg  *)0x40001004UL) /**< \brief (SERCOM1) SPI Control B */
#define REG_SERCOM1_SPI_CTRLC      (*(RwReg  *)0x40001008UL) /**< \brief (SERCOM1) SPI Control C */
#define REG_SERCOM1_SPI_BAUD       (*(RwReg8 *)0x4000100CUL) /**< \brief (SERCOM1) SPI Baud Rate */
#define REG_SERCOM1_SPI_INTENCLR   (*(RwReg8 *)0x40001014UL) /**< \brief (SERCOM1) SPI Interrupt Enable Clear */
#define REG_SERCOM1_SPI_INTENSET   (*(RwReg8 *)0x40001016UL) /**< \brief (SERCOM1) SPI Interrupt Enable Set */
#define REG_SERCOM1_SPI_INTFLAG    (*(RwReg8 *)0x40001018UL) /**< \brief (SERCOM1) SPI Interrupt Flag Status and Clear */
#define REG_SERCOM1_SPI_STATUS     (*(RwReg16*)0x4000101AUL) /**< \brief (SERCOM1) SPI Status */
#define REG_SERCOM1_SPI_SYNCBUSY   (*(RoReg  *)0x4000101CUL) /**< \brief (SERCOM1) SPI Synchronization Busy */
#define REG_SERCOM1_SPI_LENGTH     (*(RwReg16*)0x40001022UL) /**< \brief (SERCOM1) SPI Length */
#define REG_SERCOM1_SPI_ADDR       (*(RwReg  *)0x40001024UL) /**< \brief (SERCOM1) SPI Address */
#define REG_SERCOM1_SPI_DATA       (*(RwReg  *)0x40001028UL) /**< \brief (SERCOM1) SPI Data */
#define REG_SERCOM1_SPI_DBGCTRL    (*(RwReg8 *)0x40001030UL) /**< \brief (SERCOM1) SPI Debug Control */
#define REG_SERCOM1_USART_CTRLA    (*(RwReg  *)0x40001000UL) /**< \brief (SERCOM1) USART Control A */
#define REG_SERCOM1_USART_CTRLB    (*(RwReg  *)0x40001004UL) /**< \brief (SERCOM1) USART Control B */
#define REG_SERCOM1_USART_CTRLC    (*(RwReg  *)0x40001008UL) /**< \brief (SERCOM1) USART Control C */
#define REG_SERCOM1_USART_BAUD     (*(RwReg16*)0x4000100CUL) /**< \brief (SERCOM1) USART Baud Rate */
#define REG_SERCOM1_USART_RXPL     (*(RwReg8 *)0x4000100EUL) /**< \brief (SERCOM1) USART Receive Pulse Length */
#define REG_SERCOM1_USART_INTENCLR (*(RwReg8 *)0x40001014UL) /**< \brief (SERCOM1) USART Interrupt Enable Clear */
#define REG_SERCOM1_USART_INTENSET (*(RwReg8 *)0x40001016UL) /**< \brief (SERCOM1) USART Interrupt Enable Set */
#define REG_SERCOM1_USART_INTFLAG  (*(RwReg8 *)0x40001018UL) /**< \brief (SERCOM1) USART Interrupt Flag Status and Clear */
#define REG_SERCOM1_USART_STATUS   (*(RwReg16*)0x4000101AUL) /**< \brief (SERCOM1) USART Status */
#define REG_SERCOM1_USART_SYNCBUSY (*(RoReg  *)0x4000101CUL) /**< \brief (SERCOM1) USART Synchronization Busy */
#define REG_SERCOM1_USART_RXERRCNT (*(RoReg8 *)0x40001020UL) /**< \brief (SERCOM1) USART Receive Error Count */
#define REG_SERCOM1_USART_LENGTH   (*(RwReg16*)0x40001022UL) /**< \brief (SERCOM1) USART Length */
#define REG_SERCOM1_USART_DATA     (*(RwReg  *)0x40001028UL) /**< \brief (SERCOM1) USART Data */
#define REG_SERCOM1_USART_DBGCTRL  (*(RwReg8 *)0x40001030UL) /**< \brief (SERCOM1) USART Debug Control */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for SERCOM1 peripheral ========== */
#define SERCOM1_CLK_REDUCTION                    (1)        /* Reduce clock options to pin 1 for SPI and USART */
#define SERCOM1_DLY_COMPENSATION                 (1)        /* Compensates for a fast DLY50 element. Assuming 20ns */
#define SERCOM1_DMA                              (1)        /* DMA support implemented? */
#define SERCOM1_DMAC_ID_RX                       (6)        /* Index of DMA RX trigger */
#define SERCOM1_DMAC_ID_TX                       (7)        /* Index of DMA TX trigger */
#define SERCOM1_FIFO_DEPTH_POWER                 (1)        /* 2^FIFO_DEPTH_POWER gives rx FIFO depth. */
//#define SERCOM1_GCLK_ID_CORE                     (8)        
#define SERCOM1_GCLK_ID_SLOW                     (3)        
#define SERCOM1_I2CM                             (1)        /* I2C Master mode implemented? */
#define SERCOM1_I2CS                             (1)        /* I2C Slave mode implemented? */
#define SERCOM1_I2CS_AUTO_ACK                    (1)        /* I2C slave automatic acknowledge implemented? */
#define SERCOM1_I2CS_GROUP_CMD                   (1)        /* I2C slave group command implemented? */
#define SERCOM1_I2CS_SDASETUP_CNT_SIZE           (8)        /* I2CS sda setup count size */
#define SERCOM1_I2CS_SDASETUP_SIZE               (4)        /* I2CS sda setup size */
#define SERCOM1_I2CS_SUDAT                       (1)        /* I2C slave SDA setup implemented? */
#define SERCOM1_I2C_0_INT_SRC                    (50)       /* I2C 0 Interrupt */
#define SERCOM1_I2C_1_INT_SRC                    (51)       /* I2C 1 Interrupt */
#define SERCOM1_I2C_2_INT_SRC                    (52)       /* I2C 2 Interrupt */
#define SERCOM1_I2C_3_INT_SRC                    (53)       /* I2C 3 Interrupt */
#define SERCOM1_I2C_FASTMP                       (1)        /* I2C fast mode plus implemented? */
#define SERCOM1_I2C_HSMODE                       (1)        /* USART mode implemented? */
#define SERCOM1_I2C_SCLSM_MODE                   (1)        /* I2C SCL clock stretch mode implemented? */
#define SERCOM1_I2C_SMB_TIMEOUTS                 (1)        /* I2C SMBus timeouts implemented? */
#define SERCOM1_I2C_TENBIT_ADR                   (1)        /* I2C ten bit enabled? */
//#define SERCOM1_INSTANCE_ID                      (13)       /* Instance index for SERCOM1 */
#define SERCOM1_INT_MSB                          (6)        
#define SERCOM1_PMSB                             (3)        
#define SERCOM1_RETENTION_SUPPORT                (0)        /* Retention supported? */
#define SERCOM1_SE_CNT                           (1)        /* SE counter included? */
#define SERCOM1_SPI                              (1)        /* SPI mode implemented? */
#define SERCOM1_SPI_ERROR_INT_SRC                (53)       /* SPI ERROR Interrupt */
#define SERCOM1_SPI_HW_SS_CTRL                   (1)        /* Master _SS hardware control implemented? */
#define SERCOM1_SPI_ICSPACE_EXT                  (1)        /* SPI inter character space implemented? */
#define SERCOM1_SPI_OZMO                         (0)        /* OZMO features implemented? */
#define SERCOM1_SPI_RX_INT_SRC                   (52)       /* SPI RX Interrupt */
#define SERCOM1_SPI_TX_COMPLETE_INT_SRC          (51)       /* SPI TX COMPLETE Interrupt */
#define SERCOM1_SPI_TX_READY_INT_SRC             (50)       /* SPI TX READY Interrupt */
#define SERCOM1_SPI_WAKE_ON_SSL                  (1)        /* _SS low detect implemented? */
#define SERCOM1_TTBIT_EXTENSION                  (1)        /* 32-bit extension implemented? */
#define SERCOM1_USART                            (1)        /* USART mode implemented? */
#define SERCOM1_USART_AUTOBAUD                   (1)        /* USART autobaud implemented? */
#define SERCOM1_USART_COLDET                     (1)        /* USART collision detection implemented? */
#define SERCOM1_USART_ERROR_INT_SRC              (53)       /* USART ERROR Interrupt */
#define SERCOM1_USART_FLOW_CTRL                  (1)        /* USART flow control implemented? */
#define SERCOM1_USART_FRAC_BAUD                  (1)        /* USART fractional BAUD implemented? */
#define SERCOM1_USART_IRDA                       (1)        /* USART IrDA implemented? */
#define SERCOM1_USART_ISO7816                    (1)        /* USART ISO7816 mode implemented? */
#define SERCOM1_USART_LIN_MASTER                 (1)        /* USART LIN Master mode implemented? */
#define SERCOM1_USART_RS485                      (1)        /* USART RS485 mode implemented? */
#define SERCOM1_USART_RX_INT_SRC                 (52)       /* USART RX Interrupt */
#define SERCOM1_USART_SAMPA_EXT                  (1)        /* USART sample adjust implemented? */
#define SERCOM1_USART_SAMPR_EXT                  (1)        /* USART oversampling adjustment implemented? */
#define SERCOM1_USART_TX_COMPLETE_INT_SRC        (51)       /* USART TX COMPLETE Interrupt */
#define SERCOM1_USART_TX_READY_INT_SRC           (50)       /* USART TX READY Interrupt */

#endif /* _MICROCHIP_PIC32CXBZ2_SERCOM1_INSTANCE_FIXUP_H_ */
