/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2017 Álvaro Fernández Rojas <noltari@gmail.com>
 * Copyright (C) 2024 Rikka0w0 <929513338@qq.com>
 *
 * Derived from Broadcom GPL Source Code:
 *	Copyright (C) Broadcom Corporation
 */

#ifndef __DT_BINDINGS_RESET_BCM3380_H
#define __DT_BINDINGS_RESET_BCM3380_H

#define BCM3380_RST0_SPI		0
#define BCM3380_RST0_ACP		1
#define BCM3380_RST0_USB		2
#define BCM3380_RST0_PCIE		3
#define BCM3380_RST0_FPM		5
#define BCM3380_RST0_GPHY		6
#define BCM3380_RST0_DS			7
#define BCM3380_RST0_UNIMAC0	8
#define BCM3380_RST0_UNIMAC1	9
#define BCM3380_RST0_AUDIO		11
#define BCM3380_RST0_APM		12
#define BCM3380_RST0_PCM		13
#define BCM3380_RST0_HVG		14
#define BCM3380_RST0_BMU		15
#define BCM3380_RST0_U3MAC		16
#define BCM3380_RST0_U3REG		17
#define BCM3380_RST0_U3LOG		18
#define BCM3380_RST0_D3MAC		19
#define BCM3380_RST0_UTP		20
#define BCM3380_RST0_DTP		21
#define BCM3380_RST0_FAP		22
#define BCM3380_RST0_MEP		23
#define BCM3380_RST0_MSP		24
#define BCM3380_RST0_SEG		25
#define BCM3380_RST0_HVGA		26
#define BCM3380_RST0_HVGB		27
#define BCM3380_RST0_DAC		28
#define BCM3380_RST0_DAVIUDMA	29
#define BCM3380_RST0_PCIECORE	30
#define BCM3380_RST0_CRYPTO		31

#define BCM3380_RST1_HSSPI		0
#define BCM3380_RST1_HSSPIPLL	1
#define BCM3380_RST1_D3LEGMAC	2
#define BCM3380_RST1_PERST		3
#define BCM3380_RST1_TC0		4
#define BCM3380_RST1_TC1		5
#define BCM3380_RST1_TC2		6
#define BCM3380_RST1_TC3		7

#endif /* __DT_BINDINGS_RESET_BCM3380_H */