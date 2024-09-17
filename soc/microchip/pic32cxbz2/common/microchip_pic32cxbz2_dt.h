/*
 * Copyright (c) 2024 Microchip
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/** @file
 * @brief Microchip PIC32CXBZ2 MCU family devicetree helper macros
 */

#ifndef _MICROCHIP_PIC32CXBZ2_DT_H_
#define _MICROCHIP_PIC32CXBZ2_DT_H_

/* Helper macro to get MCLK register address for corresponding
 * that has corresponding clock enable bit.
 */
#define MCLK_MASK_DT_INT_REG_ADDR(n) \
	(DT_REG_ADDR(DT_INST_PHANDLE_BY_NAME(n, clocks, mclk)) + \
	 DT_INST_CLOCKS_CELL_BY_NAME(n, mclk, offset))

/* Helper macros for use with Microchip PIC32CXBZ2 DMAC controller
 * return 0xff as default value if there is no 'dmas' property
 */
#define MICROCHIP_PIC32CXBZ2_DT_INST_DMA_CELL(n, name, cell)		\
	COND_CODE_1(DT_INST_NODE_HAS_PROP(n, dmas),		\
		    (DT_INST_DMAS_CELL_BY_NAME(n, name, cell)),	\
		    (0xff))
#define MICROCHIP_PIC32CXBZ2_DT_INST_DMA_TRIGSRC(n, name) \
	MICROCHIP_PIC32CXBZ20_DT_INST_DMA_CELL(n, name, trigsrc)
#define MICROCHIP_PIC32CXBZ2_DT_INST_DMA_CHANNEL(n, name) \
	MICROCHIP_PIC32CXBZ20_DT_INST_DMA_CELL(n, name, channel)
#define MICROCHIP_PIC32CXBZ2_DT_INST_DMA_CTLR(n, name)			\
	COND_CODE_1(DT_INST_NODE_HAS_PROP(n, dmas),		\
		    (DT_INST_DMAS_CTLR_BY_NAME(n, name)),	\
		    (DT_INVALID_NODE))


/* Use to check if a sercom 'n' is enabled for a given 'compat' */
#define MICROCHIP_PIC32CXBZ2_DT_SERCOM_CHECK(n, compat) \
	DT_NODE_HAS_COMPAT_STATUS(DT_NODELABEL(sercom##n), compat, okay)

/* Use to check if TCC 'n' is enabled for a given 'compat' */
#define MICROCHIP_PIC32CXBZ2_DT_TCC_CHECK(n, compat) \
	DT_NODE_HAS_COMPAT_STATUS(DT_NODELABEL(tcc##n), compat, okay)

/* Common macro for use to set HCLK_FREQ_HZ */
#define MICROCHIP_PIC32CXBZ2_DT_CPU_CLK_FREQ_HZ \
	DT_PROP(DT_PATH(cpus, cpu_0), clock_frequency)

#endif /* _MICROCHIP_PIC32CXBZ2_SOC_DT_H_ */
