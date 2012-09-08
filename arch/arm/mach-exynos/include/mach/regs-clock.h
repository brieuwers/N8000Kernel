/* linux/arch/arm/mach-exynos/include/mach/regs-clock.h
 *
 * Copyright (c) 2010-2011 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * EXYNOS - Clock register definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_REGS_CLOCK_H
#define __ASM_ARCH_REGS_CLOCK_H __FILE__

#include <mach/map.h>

/* For EXYNOS4 */
#define EXYNOS_CLKREG(x)		(S5P_VA_CMU + (x))

#define EXYNOS4_CLKSRC_LEFTBUS		EXYNOS_CLKREG(0x04200)
#define EXYNOS4_CLKMUX_STAT_LEFTBUS	EXYNOS_CLKREG(0x04400)
#define EXYNOS4_CLKDIV_LEFTBUS		EXYNOS_CLKREG(0x04500)
#define EXYNOS4_CLKDIV_STAT_LEFTBUS	EXYNOS_CLKREG(0x04600)
#define EXYNOS4_CLKGATE_IP_LEFTBUS	EXYNOS_CLKREG(0x04800)
#define EXYNOS4_CLKOUT_CMU_LEFTBUS	EXYNOS_CLKREG(0x04A00)

#define EXYNOS4_CLKSRC_RIGHTBUS		EXYNOS_CLKREG(0x08200)
#define EXYNOS4_CLKMUX_STAT_RIGHTBUS	EXYNOS_CLKREG(0x08400)
#define EXYNOS4_CLKDIV_RIGHTBUS		EXYNOS_CLKREG(0x08500)
#define EXYNOS4_CLKDIV_STAT_RIGHTBUS	EXYNOS_CLKREG(0x08600)
#define EXYNOS4_CLKGATE_IP_RIGHTBUS	EXYNOS_CLKREG(0x08800)
#define EXYNOS4_CLKOUT_CMU_RIGHTBUS	EXYNOS_CLKREG(0x08A00)

#define EXYNOS4_EPLL_LOCK		EXYNOS_CLKREG(0x0C010)
#define EXYNOS4_VPLL_LOCK		EXYNOS_CLKREG(0x0C020)

#define EXYNOS4_EPLL_CON0		EXYNOS_CLKREG(0x0C110)
#define EXYNOS4_EPLL_CON1		EXYNOS_CLKREG(0x0C114)
#define EXYNOS4_VPLL_CON0		EXYNOS_CLKREG(0x0C120)
#define EXYNOS4_VPLL_CON1		EXYNOS_CLKREG(0x0C124)

#define EXYNOS4_CLKSRC_TOP0		EXYNOS_CLKREG(0x0C210)
#define EXYNOS4_CLKSRC_TOP1		EXYNOS_CLKREG(0x0C214)
#define EXYNOS4_CLKSRC_CAM		EXYNOS_CLKREG(0x0C220)
#define EXYNOS4_CLKSRC_TV		EXYNOS_CLKREG(0x0C224)
#define EXYNOS4_CLKSRC_MFC		EXYNOS_CLKREG(0x0C228)
#define EXYNOS4_CLKSRC_G3D		EXYNOS_CLKREG(0x0C22C)
#define EXYNOS4_CLKSRC_IMAGE		EXYNOS_CLKREG(0x0C230)
#define EXYNOS4_CLKSRC_LCD0		EXYNOS_CLKREG(0x0C234)
#define EXYNOS4_CLKSRC_MAUDIO		EXYNOS_CLKREG(0x0C23C)
#define EXYNOS4_CLKSRC_FSYS		EXYNOS_CLKREG(0x0C240)
#define EXYNOS4_CLKSRC_PERIL0		EXYNOS_CLKREG(0x0C250)
#define EXYNOS4_CLKSRC_PERIL1		EXYNOS_CLKREG(0x0C254)

#define EXYNOS4_CLKSRC_MASK_TOP		EXYNOS_CLKREG(0x0C310)
#define EXYNOS4_CLKSRC_MASK_CAM		EXYNOS_CLKREG(0x0C320)
#define EXYNOS4_CLKSRC_MASK_TV		EXYNOS_CLKREG(0x0C324)
#define EXYNOS4_CLKSRC_MASK_LCD0	EXYNOS_CLKREG(0x0C334)
#define EXYNOS4_CLKSRC_MASK_MAUDIO	EXYNOS_CLKREG(0x0C33C)
#define EXYNOS4_CLKSRC_MASK_FSYS	EXYNOS_CLKREG(0x0C340)
#define EXYNOS4_CLKSRC_MASK_PERIL0	EXYNOS_CLKREG(0x0C350)
#define EXYNOS4_CLKSRC_MASK_PERIL1	EXYNOS_CLKREG(0x0C354)

#define EXYNOS4_CLKDIV_TOP		EXYNOS_CLKREG(0x0C510)
#define EXYNOS4_CLKDIV_CAM		EXYNOS_CLKREG(0x0C520)
#define EXYNOS4_CLKDIV_TV		EXYNOS_CLKREG(0x0C524)
#define EXYNOS4_CLKDIV_MFC		EXYNOS_CLKREG(0x0C528)
#define EXYNOS4_CLKDIV_G3D		EXYNOS_CLKREG(0x0C52C)
#define EXYNOS4_CLKDIV_IMAGE		EXYNOS_CLKREG(0x0C530)
#define EXYNOS4_CLKDIV_LCD0		EXYNOS_CLKREG(0x0C534)
#define EXYNOS4_CLKDIV_ISP		EXYNOS_CLKREG(0x0C538)
#define EXYNOS4_CLKDIV_MAUDIO		EXYNOS_CLKREG(0x0C53C)
#define EXYNOS4_CLKDIV_FSYS0		EXYNOS_CLKREG(0x0C540)
#define EXYNOS4_CLKDIV_FSYS1		EXYNOS_CLKREG(0x0C544)
#define EXYNOS4_CLKDIV_FSYS2		EXYNOS_CLKREG(0x0C548)
#define EXYNOS4_CLKDIV_FSYS3		EXYNOS_CLKREG(0x0C54C)
#define EXYNOS4_CLKDIV_PERIL0		EXYNOS_CLKREG(0x0C550)
#define EXYNOS4_CLKDIV_PERIL1		EXYNOS_CLKREG(0x0C554)
#define EXYNOS4_CLKDIV_PERIL2		EXYNOS_CLKREG(0x0C558)
#define EXYNOS4_CLKDIV_PERIL3		EXYNOS_CLKREG(0x0C55C)
#define EXYNOS4_CLKDIV_PERIL4		EXYNOS_CLKREG(0x0C560)
#define EXYNOS4_CLKDIV_PERIL5		EXYNOS_CLKREG(0x0C564)

#define EXYNOS4_CLKDIV_STAT_TOP		EXYNOS_CLKREG(0x0C610)
#define EXYNOS4_CLKDIV_STAT_CAM		EXYNOS_CLKREG(0x0C620)
#define EXYNOS4_CLKDIV_STAT_MFC		EXYNOS_CLKREG(0x0C628)
#define EXYNOS4_CLKDIV_STAT_IMAGE		EXYNOS_CLKREG(0x0C630)

#define EXYNOS4_CLKDIV_STAT_FSYS3	EXYNOS_CLKREG(0x0C64C)

#define EXYNOS4_CLKGATE_SCLKCAM		EXYNOS_CLKREG(0x0C820)
#define EXYNOS4_CLKGATE_IP_CAM		EXYNOS_CLKREG(0x0C920)
#define EXYNOS4_CLKGATE_IP_TV		EXYNOS_CLKREG(0x0C924)
#define EXYNOS4_CLKGATE_IP_MFC		EXYNOS_CLKREG(0x0C928)
#define EXYNOS4_CLKGATE_IP_G3D		EXYNOS_CLKREG(0x0C92C)
#define EXYNOS4_CLKGATE_IP_IMAGE	(soc_is_exynos4210() ? \
					EXYNOS_CLKREG(0x0C930) : \
					EXYNOS_CLKREG(0x04930))
#define EXYNOS4_CLKGATE_IP_IMAGE_4210	EXYNOS_CLKREG(0x0C930)
#define EXYNOS4_CLKGATE_IP_IMAGE_4212	EXYNOS_CLKREG(0x04930)
#define EXYNOS4_CLKGATE_IP_LCD0		EXYNOS_CLKREG(0x0C934)
#define EXYNOS4_CLKGATE_IP_FSYS		EXYNOS_CLKREG(0x0C940)
#define EXYNOS4_CLKGATE_IP_GPS		EXYNOS_CLKREG(0x0C94C)
#define EXYNOS4_CLKGATE_IP_PERIL	EXYNOS_CLKREG(0x0C950)
#define EXYNOS4_CLKGATE_IP_PERIR	(soc_is_exynos4210() ? \
					EXYNOS_CLKREG(0x0C960) : \
					EXYNOS_CLKREG(0x08960))
#define EXYNOS4_CLKGATE_IP_PERIR_4210	EXYNOS_CLKREG(0x0C960)
#define EXYNOS4_CLKGATE_IP_PERIR_4212	EXYNOS_CLKREG(0x08960)
#define EXYNOS4_CLKGATE_BLOCK		EXYNOS_CLKREG(0x0C970)
#define EXYNOS4_CLKOUT_CMU_TOP		EXYNOS_CLKREG(0x0CA00)

#define EXYNOS4_CLKSRC_MASK_DMC		EXYNOS_CLKREG(0x10300)
#define EXYNOS4_CLKSRC_DMC		EXYNOS_CLKREG(0x10200)

#define EXYNOS4_CLKSRC_DMC_MASK		(0xF1111)

#define EXYNOS4_CLKDIV_DMC0		EXYNOS_CLKREG(0x10500)
#define EXYNOS4_CLKDIV_DMC1		EXYNOS_CLKREG(0x10504)
#define EXYNOS4_CLKDIV_STAT_DMC0	EXYNOS_CLKREG(0x10600)
#define EXYNOS4_CLKDIV_STAT_DMC1	EXYNOS_CLKREG(0x10604)
#define EXYNOS4_CLKGATE_IP_DMC		EXYNOS_CLKREG(0x10900)
#define EXYNOS4_CLKOUT_CMU_DMC		EXYNOS_CLKREG(0x10A00)

#define EXYNOS4_DMC_PAUSE_CTRL		EXYNOS_CLKREG(0x11094)
#define DMC_PAUSE_ENABLE		(1 << 0)

#define EXYNOS4_APLL_LOCK		EXYNOS_CLKREG(0x14000)
#define EXYNOS4_APLL_CON0		EXYNOS_CLKREG(0x14100)
#define EXYNOS4_APLL_CON1		EXYNOS_CLKREG(0x14104)
#define EXYNOS4_MPLL_CON0		(soc_is_exynos4210() ? \
					EXYNOS_CLKREG(0x14108) : \
					EXYNOS_CLKREG(0x10108))
#define EXYNOS4_MPLL_CON1		(soc_is_exynos4210() ? \
					EXYNOS_CLKREG(0x1410C) : \
					EXYNOS_CLKREG(0x1010C))

#define EXYNOS4_CLKSRC_CPU		EXYNOS_CLKREG(0x14200)
#define EXYNOS4_CLKMUX_STATCPU		EXYNOS_CLKREG(0x14400)

#define EXYNOS4_CLKDIV_CPU		EXYNOS_CLKREG(0x14500)
#define EXYNOS4_CLKDIV_CPU1		EXYNOS_CLKREG(0x14504)
#define EXYNOS4_CLKDIV_STATCPU		EXYNOS_CLKREG(0x14600)
#define EXYNOS4_CLKDIV_STATCPU1		EXYNOS_CLKREG(0x14604)

#define EXYNOS4_CLKGATE_SCLKCPU		EXYNOS_CLKREG(0x14800)
#define EXYNOS4_CLKGATE_IP_CPU		EXYNOS_CLKREG(0x14900)
#define EXYNOS4_CLKOUT_CMU_CPU		EXYNOS_CLKREG(0x14A00)

#define EXYNOS4_PMREG(x)		(S5P_VA_PMU + (x))

#define EXYNOS4_MIPI_CONTROL0		EXYNOS4_PMREG(0x0710)
#define EXYNOS4_MIPI_CONTROL1		EXYNOS4_PMREG(0x0714)
#define EXYNOS4_MIPI_DPHY_EN		(1 << 0)
#define EXYNOS4_MIPI_DPHY_S_RESETN	(1 << 1)
#define EXYNOS4_MIPI_DPHY_M_RESETN	(1 << 2)

#define EXYNOS4_APLL_CON0L8		EXYNOS_CLKREG(0x15100)
#define EXYNOS4_APLL_CON0L7		EXYNOS_CLKREG(0x15104)
#define EXYNOS4_APLL_CON0L6		EXYNOS_CLKREG(0x15108)
#define EXYNOS4_APLL_CON0L5		EXYNOS_CLKREG(0x1510C)
#define EXYNOS4_APLL_CON0L4		EXYNOS_CLKREG(0x15110)
#define EXYNOS4_APLL_CON0L3		EXYNOS_CLKREG(0x15114)
#define EXYNOS4_APLL_CON0L2		EXYNOS_CLKREG(0x15118)
#define EXYNOS4_APLL_CON0L1		EXYNOS_CLKREG(0x1511C)

#define EXYNOS4_CLKDIV_IEM_L8		EXYNOS_CLKREG(0x15300)
#define EXYNOS4_CLKDIV_IEM_L7		EXYNOS_CLKREG(0x15304)
#define EXYNOS4_CLKDIV_IEM_L6		EXYNOS_CLKREG(0x15308)
#define EXYNOS4_CLKDIV_IEM_L5		EXYNOS_CLKREG(0x1530C)
#define EXYNOS4_CLKDIV_IEM_L4		EXYNOS_CLKREG(0x15310)
#define EXYNOS4_CLKDIV_IEM_L3		EXYNOS_CLKREG(0x15314)
#define EXYNOS4_CLKDIV_IEM_L2		EXYNOS_CLKREG(0x15318)
#define EXYNOS4_CLKDIV_IEM_L1		EXYNOS_CLKREG(0x1531C)

#define EXYNOS4_APLL_LOCKTIME		(0x1C20)	/* 300us */

#define EXYNOS4_APLLCON0_ENABLE_SHIFT	(31)
#define EXYNOS4_APLLCON0_LOCKED_SHIFT	(29)
#define EXYNOS4_APLLCON0_LOCKED_MASK	(1 << EXYNOS4_APLLCON0_LOCKED_SHIFT)
#define EXYNOS4_APLL_VAL_1000		((250 << 16) | (6 << 8) | 1)
#define EXYNOS4_APLL_VAL_800		((200 << 16) | (6 << 8) | 1)

#define EXYNOS4_EPLLCON0_ENABLE_SHIFT	(31)
#define EXYNOS4_EPLLCON0_LOCKED_SHIFT	(29)

#define EXYNOS4_VPLLCON0_ENABLE_SHIFT	(31)
#define EXYNOS4_VPLLCON0_LOCKED_SHIFT	(29)

#define EXYNOS4_CLKSRC_CPU_MUXCORE_SHIFT	(16)
#define EXYNOS4_CLKSRC_CPU_MUXHPM_SHIFT	(20)
#define EXYNOS4_CLKMUX_STATCPU_MUXCORE_MASK	(0x7 << EXYNOS4_CLKSRC_CPU_MUXCORE_SHIFT)

#define EXYNOS4_CLKDIV_CPU0_CORE_SHIFT	(0)
#define EXYNOS4_CLKDIV_CPU0_CORE_MASK	(0x7 << EXYNOS4_CLKDIV_CPU0_CORE_SHIFT)
#define EXYNOS4_CLKDIV_CPU0_COREM0_SHIFT	(4)
#define EXYNOS4_CLKDIV_CPU0_COREM0_MASK	(0x7 << EXYNOS4_CLKDIV_CPU0_COREM0_SHIFT)
#define EXYNOS4_CLKDIV_CPU0_COREM1_SHIFT	(8)
#define EXYNOS4_CLKDIV_CPU0_COREM1_MASK	(0x7 << EXYNOS4_CLKDIV_CPU0_COREM1_SHIFT)
#define EXYNOS4_CLKDIV_CPU0_PERIPH_SHIFT	(12)
#define EXYNOS4_CLKDIV_CPU0_PERIPH_MASK	(0x7 << EXYNOS4_CLKDIV_CPU0_PERIPH_SHIFT)
#define EXYNOS4_CLKDIV_CPU0_ATB_SHIFT	(16)
#define EXYNOS4_CLKDIV_CPU0_ATB_MASK	(0x7 << EXYNOS4_CLKDIV_CPU0_ATB_SHIFT)
#define EXYNOS4_CLKDIV_CPU0_PCLKDBG_SHIFT	(20)
#define EXYNOS4_CLKDIV_CPU0_PCLKDBG_MASK	(0x7 << EXYNOS4_CLKDIV_CPU0_PCLKDBG_SHIFT)
#define EXYNOS4_CLKDIV_CPU0_APLL_SHIFT	(24)
#define EXYNOS4_CLKDIV_CPU0_APLL_MASK	(0x7 << EXYNOS4_CLKDIV_CPU0_APLL_SHIFT)
#define EXYNOS4_CLKDIV_CPU0_CORE2_SHIFT	28
#define EXYNOS4_CLKDIV_CPU0_CORE2_MASK	(0x7 << EXYNOS4_CLKDIV_CPU0_CORE2_SHIFT)

#define EXYNOS4_CLKDIV_CPU1_COPY_SHIFT	(0)
#define EXYNOS4_CLKDIV_CPU1_COPY_MASK	(0x7 << EXYNOS4_CLKDIV_CPU1_COPY_SHIFT)
#define EXYNOS4_CLKDIV_CPU1_HPM_SHIFT	(4)
#define EXYNOS4_CLKDIV_CPU1_HPM_MASK	(0x7 << EXYNOS4_CLKDIV_CPU1_HPM_SHIFT)
#define EXYNOS4_CLKDIV_CPU1_CORES_SHIFT	(8)
#define EXYNOS4_CLKDIV_CPU1_CORES_MASK	(0x7 << EXYNOS4_CLKDIV_CPU1_CORES_SHIFT)

#define EXYNOS4_CLKDIV_DMC0_ACP_SHIFT	(0)
#define EXYNOS4_CLKDIV_DMC0_ACP_MASK	(0x7 << EXYNOS4_CLKDIV_DMC0_ACP_SHIFT)
#define EXYNOS4_CLKDIV_DMC0_ACPPCLK_SHIFT	(4)
#define EXYNOS4_CLKDIV_DMC0_ACPPCLK_MASK	(0x7 << EXYNOS4_CLKDIV_DMC0_ACPPCLK_SHIFT)
#define EXYNOS4_CLKDIV_DMC0_DPHY_SHIFT	(8)
#define EXYNOS4_CLKDIV_DMC0_DPHY_MASK	(0x7 << EXYNOS4_CLKDIV_DMC0_DPHY_SHIFT)
#define EXYNOS4_CLKDIV_DMC0_DMC_SHIFT	(12)
#define EXYNOS4_CLKDIV_DMC0_DMC_MASK	(0x7 << EXYNOS4_CLKDIV_DMC0_DMC_SHIFT)
#define EXYNOS4_CLKDIV_DMC0_DMCD_SHIFT	(16)
#define EXYNOS4_CLKDIV_DMC0_DMCD_MASK	(0x7 << EXYNOS4_CLKDIV_DMC0_DMCD_SHIFT)
#define EXYNOS4_CLKDIV_DMC0_DMCP_SHIFT	(20)
#define EXYNOS4_CLKDIV_DMC0_DMCP_MASK	(0x7 << EXYNOS4_CLKDIV_DMC0_DMCP_SHIFT)
#define EXYNOS4_CLKDIV_DMC0_COPY2_SHIFT	(24)
#define EXYNOS4_CLKDIV_DMC0_COPY2_MASK	(0x7 << EXYNOS4_CLKDIV_DMC0_COPY2_SHIFT)
#define EXYNOS4_CLKDIV_DMC0_CORETI_SHIFT	(28)
#define EXYNOS4_CLKDIV_DMC0_CORETI_MASK	(0x7 << EXYNOS4_CLKDIV_DMC0_CORETI_SHIFT)

#define EXYNOS4_CLKDIV_DMC1_G2D_ACP_SHIFT	(0)
#define EXYNOS4_CLKDIV_DMC1_G2D_ACP_MASK	(0xf << EXYNOS4_CLKDIV_DMC1_G2D_ACP_SHIFT)
#define EXYNOS4_CLKDIV_DMC1_C2C_SHIFT	(4)
#define EXYNOS4_CLKDIV_DMC1_C2C_MASK	(0x7 << EXYNOS4_CLKDIV_DMC1_C2C_SHIFT)
#define EXYNOS4_CLKDIV_DMC1_PWI_SHIFT	(8)
#define EXYNOS4_CLKDIV_DMC1_PWI_MASK	(0xf << EXYNOS4_CLKDIV_DMC1_PWI_SHIFT)
#define EXYNOS4_CLKDIV_DMC1_C2CACLK_SHIFT	(12)
#define EXYNOS4_CLKDIV_DMC1_C2CACLK_MASK	(0x7 << EXYNOS4_CLKDIV_DMC1_C2CACLK_SHIFT)
#define EXYNOS4_CLKDIV_DMC1_DVSEM_SHIFT	(16)
#define EXYNOS4_CLKDIV_DMC1_DVSEM_MASK	(0x7f << EXYNOS4_CLKDIV_DMC1_DVSEM_SHIFT)
#define EXYNOS4_CLKDIV_DMC1_DPM_SHIFT	(24)
#define EXYNOS4_CLKDIV_DMC1_DPM_MASK	(0x7f << EXYNOS4_CLKDIV_DMC1_DPM_SHIFT)

#define EXYNOS4_CLKDIV_MFC_SHIFT		(0)
#define EXYNOS4_CLKDIV_MFC_MASK		(0x7 << EXYNOS4_CLKDIV_MFC_SHIFT)

#define EXYNOS4_CLKDIV_CAM_SHIFT		(0)
#define EXYNOS4_CLKDIV_CAM_MASK		(0xffff << EXYNOS4_CLKDIV_CAM_SHIFT)

#define EXYNOS4_CLKDIV_IMAGE_SHIFT		(0)
#define EXYNOS4_CLKDIV_IMAGE_MASK		(0x7 << EXYNOS4_CLKDIV_IMAGE_SHIFT)

#define EXYNOS4_CLKDIV_TOP_ACLK200_SHIFT	(0)
#define EXYNOS4_CLKDIV_TOP_ACLK200_MASK	(0x7 << EXYNOS4_CLKDIV_TOP_ACLK200_SHIFT)
#define EXYNOS4_CLKDIV_TOP_ACLK100_SHIFT	(4)
#define EXYNOS4_CLKDIV_TOP_ACLK100_MASK	(0xf << EXYNOS4_CLKDIV_TOP_ACLK100_SHIFT)
#define EXYNOS4_CLKDIV_TOP_ACLK160_SHIFT	(8)
#define EXYNOS4_CLKDIV_TOP_ACLK160_MASK	(0x7 << EXYNOS4_CLKDIV_TOP_ACLK160_SHIFT)
#define EXYNOS4_CLKDIV_TOP_ACLK133_SHIFT	(12)
#define EXYNOS4_CLKDIV_TOP_ACLK133_MASK	(0x7 << EXYNOS4_CLKDIV_TOP_ACLK133_SHIFT)
#define EXYNOS4_CLKDIV_TOP_ONENAND_SHIFT	(16)
#define EXYNOS4_CLKDIV_TOP_ONENAND_MASK	(0x7 << EXYNOS4_CLKDIV_TOP_ONENAND_SHIFT)
#define EXYNOS4_CLKDIV_TOP_ACLK266_GPS_SHIFT	(20)
#define EXYNOS4_CLKDIV_TOP_ACLK266_GPS_MASK		(0x7 << EXYNOS4_CLKDIV_TOP_ACLK266_GPS_SHIFT)
#define EXYNOS4_CLKDIV_TOP_ACLK400_MCUISP_SHIFT	(24)
#define EXYNOS4_CLKDIV_TOP_ACLK400_MCUISP_MASK	(0x7 << EXYNOS4_CLKDIV_TOP_ACLK400_MCUISP_SHIFT)

#define EXYNOS4_CLKDIV_TOP1_ACLK200_SUB_SHIFT		(20)
#define EXYNOS4_CLKDIV_TOP1_ACLK400_MCUISP_SUB_SHIFT	(24)

#define EXYNOS4_CLKDIV_BUS_GDLR_SHIFT	(0)
#define EXYNOS4_CLKDIV_BUS_GDLR_MASK	(0x7 << EXYNOS4_CLKDIV_BUS_GDLR_SHIFT)
#define EXYNOS4_CLKDIV_BUS_GPLR_SHIFT	(4)
#define EXYNOS4_CLKDIV_BUS_GPLR_MASK	(0x7 << EXYNOS4_CLKDIV_BUS_GPLR_SHIFT)

#define EXYNOS4_CLKDIV_CAM_FIMC0_SHIFT	(0)
#define EXYNOS4_CLKDIV_CAM_FIMC0_MASK	(0xf << EXYNOS4_CLKDIV_CAM_FIMC0_SHIFT)
#define EXYNOS4_CLKDIV_CAM_FIMC1_SHIFT	(4)
#define EXYNOS4_CLKDIV_CAM_FIMC1_MASK	(0xf << EXYNOS4_CLKDIV_CAM_FIMC1_SHIFT)
#define EXYNOS4_CLKDIV_CAM_FIMC2_SHIFT	(8)
#define EXYNOS4_CLKDIV_CAM_FIMC2_MASK	(0xf << EXYNOS4_CLKDIV_CAM_FIMC2_SHIFT)
#define EXYNOS4_CLKDIV_CAM_FIMC3_SHIFT	(12)
#define EXYNOS4_CLKDIV_CAM_FIMC3_MASK	(0xf << EXYNOS4_CLKDIV_CAM_FIMC3_SHIFT)

#define EXYNOS4_CLKDIV_FSYS3_MMC4_SHIFT	(0)
#define EXYNOS4_CLKDIV_FSYS3_MMC4_MASK	(0xf << EXYNOS4_CLKDIV_FSYS3_MMC4_SHIFT)
#define EXYNOS4_CLKDIV_FSYS3_MMC4PRE_SHIFT	(8)
#define EXYNOS4_CLKDIV_FSYS3_MMC4PRE_MASK	(0xff << EXYNOS4_CLKDIV_FSYS3_MMC4PRE_SHIFT)

/* CLK_GATE_IP_IMAGE */
#define EXYNOS4_CLKGATE_IP_IMAGE_MDMA	(0x1 << 2)
#define EXYNOS4_CLKGATE_IP_IMAGE_SMMUMDMA	(0x1 << 5)
#define EXYNOS4_CLKGATE_IP_IMAGE_QEMDMA	(0x1 << 8)

/*  CLK_GATE_IP_FSYS */
#define EXYNOS4_CLKGATE_IP_FSYS_PDMA0	(0x1 << 0)
#define EXYNOS4_CLKGATE_IP_FSYS_PDMA1	(0x1 << 1)

/*  CLK_GATE_IP_PERIL */
#define EXYNOS4_CLKGATE_IP_PERIL_I2C0_7	(0xff << 6)

/* Only for EXYNOS4210 */
#define EXYNOS4_CLKSRC_LCD1		EXYNOS_CLKREG(0x0C238)
#define EXYNOS4_CLKSRC_MASK_LCD1	EXYNOS_CLKREG(0x0C338)
#define EXYNOS4_CLKDIV_LCD1		EXYNOS_CLKREG(0x0C538)
#define EXYNOS4_CLKGATE_IP_LCD1		EXYNOS_CLKREG(0x0C938)

/* Only for EXYNOS4212 */
#define EXYNOS4_CLKGATE_BUS_LEFTBUS	EXYNOS_CLKREG(0x04700)
#define EXYNOS4_CLKGATE_BUS_IMAGE	EXYNOS_CLKREG(0x04730)

#define EXYNOS4_CLKGATE_BUS_RIGHTBUS	EXYNOS_CLKREG(0x08700)
#define EXYNOS4_CLKGATE_BUS_PERIR	EXYNOS_CLKREG(0x08760)

#define EXYNOS4_EPLL_CON2		EXYNOS_CLKREG(0x0C118)
#define EXYNOS4_VPLL_CON2		EXYNOS_CLKREG(0x0C128)

#define EXYNOS4_CLKSRC_ISP		EXYNOS_CLKREG(0x0C238)
#define EXYNOS4_CLKSRC_CAM1		EXYNOS_CLKREG(0x0C258)

#define EXYNOS4_CLKSRC_MASK_ISP		EXYNOS_CLKREG(0x0C338)

#define EXYNOS4_CLKDIV_ISP		EXYNOS_CLKREG(0x0C538)
#define EXYNOS4_CLKDIV_CAM1		EXYNOS_CLKREG(0x0C568)

#define EXYNOS4_CLKDIV_STAT_CAM1	EXYNOS_CLKREG(0x0C668)

#define EXYNOS4_CLKGATE_BUS_PERIL	EXYNOS_CLKREG(0x0C750)

#define EXYNOS4_CLKGATE_IP_ISP		EXYNOS_CLKREG(0x0C938)
#define EXYNOS4_CLKGATE_IP_MAUDIO	EXYNOS_CLKREG(0x0C93C)

#define EXYNOS4_CLKGATE_BUS_DMC0	EXYNOS_CLKREG(0x10700)
#define EXYNOS4_CLKGATE_BUS_DMC1	EXYNOS_CLKREG(0x10704)
#define EXYNOS4_CLKGATE_SCLK_DMC	EXYNOS_CLKREG(0x10800)
#define EXYNOS4_CLKGATE_IP_DMC1		EXYNOS_CLKREG(0x10904)

#define EXYNOS4_PWR_CTRL1		EXYNOS_CLKREG(0x15020)
#define EXYNOS4_PWR_CTRL2		EXYNOS_CLKREG(0x15024)

#define EXYNOS4_CLKDIV_ISP0		EXYNOS_CLKREG(0x18300)
#define EXYNOS4_CLKDIV_ISP1		EXYNOS_CLKREG(0x18304)

#define EXYNOS4_CLKDIV_STAT_ISP0	EXYNOS_CLKREG(0x18400)
#define EXYNOS4_CLKDIV_STAT_ISP1	EXYNOS_CLKREG(0x18404)

#define EXYNOS4_CLKGATE_IP_ISP0		EXYNOS_CLKREG(0x18800)
#define EXYNOS4_CLKGATE_IP_ISP1		EXYNOS_CLKREG(0x18804)
#define EXYNOS4_CLKOUT_CMU_ISP		EXYNOS_CLKREG(0x18A00)

#define EXYNOS4_CLKDIV_ISP_PWMISP_SHIFT	(0)
#define EXYNOS4_CLKDIV_ISP_PWMISP_MASK	(0xf << EXYNOS4_CLKDIV_ISP_PWMISP_SHIFT)
#define EXYNOS4_CLKDIV_ISP_SPI0ISP_SHIFT	(4)
#define EXYNOS4_CLKDIV_ISP_SPI0ISP_MASK	(0xf << EXYNOS4_CLKDIV_ISP_SPI0ISP_SHIFT)
#define EXYNOS4_CLKDIV_ISP_SPI0ISP_PRE_SHIFT	(8)
#define EXYNOS4_CLKDIV_ISP_SPI0ISP_PRE_MASK		(0xff << EXYNOS4_CLKDIV_ISP_SPI0ISP_PRE_SHIFT)
#define EXYNOS4_CLKDIV_ISP_SPI1ISP_SHIFT	(16)
#define EXYNOS4_CLKDIV_ISP_SPI1ISP_MASK	(0xf << EXYNOS4_CLKDIV_ISP_SPI1ISP_SHIFT)
#define EXYNOS4_CLKDIV_ISP_SPI1ISP_PRE_SHIFT	(20)
#define EXYNOS4_CLKDIV_ISP_SPI1ISP_PRE_MASK		(0xff << EXYNOS4_CLKDIV_ISP_SPI1ISP_PRE_SHIFT)
#define EXYNOS4_CLKDIV_ISP_UARTISP_SHIFT	(28)
#define EXYNOS4_CLKDIV_ISP_UARTISP_MASK	(0xf << EXYNOS4_CLKDIV_ISP_SPI1ISP_SHIFT)

#define EXYNOS4_CLKDIV_ISP0_ISP0_SHIFT	(0)
#define EXYNOS4_CLKDIV_ISP0_ISP0_MASK	(0x7 << EXYNOS4_CLKDIV_ISP0_ISP0_SHIFT)
#define EXYNOS4_CLKDIV_ISP0_ISP1_SHIFT	(4)
#define EXYNOS4_CLKDIV_ISP0_ISP1_MASK	(0x7 << EXYNOS4_CLKDIV_ISP0_ISP1_SHIFT)
#define EXYNOS4_CLKDIV_ISP1_MPWM_SHIFT	(0)
#define EXYNOS4_CLKDIV_ISP1_MPWM_MASK	(0x7 << EXYNOS4_CLKDIV_ISP1_MPWM_SHIFT)
#define EXYNOS4_CLKDIV_ISP1_MCUISP0_SHIFT	(4)
#define EXYNOS4_CLKDIV_ISP1_MCUISP0_MASK	(0x7 << EXYNOS4_CLKDIV_ISP1_MCUISP0_SHIFT)
#define EXYNOS4_CLKDIV_ISP1_MCUISP1_SHIFT	(8)
#define EXYNOS4_CLKDIV_ISP1_MCUISP1_MASK	(0x7 << EXYNOS4_CLKDIV_ISP1_MCUISP1_SHIFT)

#define EXYNOS4_CLKDIV_CAM1_JPEG_SHIFT	(0)
#define EXYNOS4_CLKDIV_CAM1_JPEG_MASK	(0xf << EXYNOS4_CLKDIV_CAM1_JPEG_SHIFT)

/* PWR_CTRL  */
#define PWR_CTRL1_CORE2_DOWN_RATIO	28
#define PWR_CTRL1_CORE2_DOWN_MASK	(0x7 << PWR_CTRL1_CORE2_DOWN_RATIO)
#define PWR_CTRL1_CORE1_DOWN_RATIO	16
#define PWR_CTRL1_CORE1_DOWN_MASK	(0x7 << PWR_CTRL1_CORE1_DOWN_RATIO)
#define PWR_CTRL1_DIV2_DOWN_EN		(1 << 9)
#define PWR_CTRL1_DIV1_DOWN_EN		(1 << 8)

#define PWR_CTRL1_USE_CORE3_WFE		(1 << 7)
#define PWR_CTRL1_USE_CORE2_WFE		(1 << 6)
#define PWR_CTRL1_USE_CORE1_WFE		(1 << 5)
#define PWR_CTRL1_USE_CORE0_WFE		(1 << 4)

#define PWR_CTRL1_USE_CORE3_WFI		(1 << 3)
#define PWR_CTRL1_USE_CORE2_WFI		(1 << 2)
#define PWR_CTRL1_USE_CORE1_WFI		(1 << 1)
#define PWR_CTRL1_USE_CORE0_WFI		(1 << 0)

#define PWR_CTRL2_DIV2_UP_EN		(1 << 25)
#define PWR_CTRL2_DIV1_UP_EN		(1 << 24)
#define PWR_CTRL2_DUR_STANDBY2		16
#define PWR_CTRL2_DUR_STANDBY2_MASK	(0xff << PWR_CTRL2_DUR_STANDBY2)
#define PWR_CTRL2_DUR_STANDBY1		8
#define PWR_CTRL2_DUR_STANDBY1_MASK	(0xff << PWR_CTRL2_DUR_STANDBY1)
#define PWR_CTRL2_CORE2_UP_RATIO	4
#define PWR_CTRL2_CORE2_UP_MASK		(0x7 << PWR_CTRL2_CORE2_UP_RATIO)
#define PWR_CTRL2_CORE1_UP_RATIO	0
#define PWR_CTRL2_CORE1_UP_MASK		(0x7 << PWR_CTRL2_CORE1_UP_RATIO)

/* For EXYNOS5 */
#define EXYNOS5_APLL_LOCK		EXYNOS_CLKREG(0x00000)
#define EXYNOS5_APLL_CON0		EXYNOS_CLKREG(0x00100)
#define EXYNOS5_APLL_CON1		EXYNOS_CLKREG(0x00104)
#define EXYNOS5_CLKSRC_CPU		EXYNOS_CLKREG(0x00200)
#define EXYNOS5_CLKMUX_STATCPU		EXYNOS_CLKREG(0x00400)
#define EXYNOS5_CLKDIV_CPU0		EXYNOS_CLKREG(0x00500)
#define EXYNOS5_CLKDIV_CPU1		EXYNOS_CLKREG(0x00504)
#define EXYNOS5_CLKDIV_STATCPU0		EXYNOS_CLKREG(0x00600)
#define EXYNOS5_CLKDIV_STATCPU1		EXYNOS_CLKREG(0x00604)

#define EXYNOS5_ARMCLK_STOPCTRL		EXYNOS_CLKREG(0x01000)
#define EXYNOS5_ATCLK_STOPCTRL		EXYNOS_CLKREG(0x01004)

#define EXYNOS5_PARITYFAIL_STATUS	EXYNOS_CLKREG(0x01010)
#define EXYNOS5_PARITYFAIL_CLEAR	EXYNOS_CLKREG(0x01014)

#define EXYNOS5_PWR_CTRL1		EXYNOS_CLKREG(0x01020)
#define EXYNOS5_PWR_CTRL2		EXYNOS_CLKREG(0x01024)

#define EXYNOS5_MPLL_CON0		EXYNOS_CLKREG(0x04100)
#define EXYNOS5_MPLL_CON1		EXYNOS_CLKREG(0x04104)
#define EXYNOS5_CLKSRC_CORE0		EXYNOS_CLKREG(0x04200)
#define EXYNOS5_CLKSRC_CORE1		EXYNOS_CLKREG(0x04204)

#define EXYNOS5_CLKSRC_MASK_CORE	EXYNOS_CLKREG(0x04300)

#define EXYNOS5_C2C_MONITOR		EXYNOS_CLKREG(0x04910)

#define EXYNOS5_C2C_CONFIG		EXYNOS_CLKREG(0x06000)

#define EXYNOS5_UFMC_CONFIG		EXYNOS_CLKREG(0x08A10)

#define EXYNOS5_CPLL_LOCK		EXYNOS_CLKREG(0x10020)
#define EXYNOS5_EPLL_LOCK		EXYNOS_CLKREG(0x10030)
#define EXYNOS5_VPLL_LOCK		EXYNOS_CLKREG(0x10040)
#define EXYNOS5_GPLL_LOCK		EXYNOS_CLKREG(0x10050)
#define EXYNOS5_CPLL_CON0		EXYNOS_CLKREG(0x10120)
#define EXYNOS5_CPLL_CON1		EXYNOS_CLKREG(0x10124)
#define EXYNOS5_EPLL_CON0		EXYNOS_CLKREG(0x10130)
#define EXYNOS5_EPLL_CON1		EXYNOS_CLKREG(0x10134)
#define EXYNOS5_EPLL_CON2		EXYNOS_CLKREG(0x10138)
#define EXYNOS5_VPLL_CON0		EXYNOS_CLKREG(0x10140)
#define EXYNOS5_VPLL_CON1		EXYNOS_CLKREG(0x10144)
#define EXYNOS5_VPLL_CON2		EXYNOS_CLKREG(0x10148)
#define EXYNOS5_GPLL_CON0		EXYNOS_CLKREG(0x10150)
#define EXYNOS5_GPLL_CON1		EXYNOS_CLKREG(0x10154)
#define EXYNOS5_BPLL_CON0		EXYNOS_CLKREG(0x20110)
#define EXYNOS5_BPLL_CON1		EXYNOS_CLKREG(0x20114)

/* Clock Source Control Registers */
#define EXYNOS5_CLKSRC_TOP0		EXYNOS_CLKREG(0x10210)
#define EXYNOS5_CLKSRC_TOP1		EXYNOS_CLKREG(0x10214)
#define EXYNOS5_CLKSRC_TOP2		EXYNOS_CLKREG(0x10218)
#define EXYNOS5_CLKSRC_TOP3		EXYNOS_CLKREG(0x1021C)
#define EXYNOS5_CLKSRC_GSCL		EXYNOS_CLKREG(0x10220)
#define EXYNOS5_CLKSRC_DISP1_0		EXYNOS_CLKREG(0x1022C)
#define EXYNOS5_CLKSRC_MAUDIO		EXYNOS_CLKREG(0x10240)
#define EXYNOS5_CLKSRC_FSYS		EXYNOS_CLKREG(0x10244)
#define EXYNOS5_CLKSRC_GEN		EXYNOS_CLKREG(0x10248)
#define EXYNOS5_CLKSRC_PERIC0		EXYNOS_CLKREG(0x10250)
#define EXYNOS5_CLKSRC_PERIC1		EXYNOS_CLKREG(0x10254)
#define EXYNOS5_SCLK_SRC_ISP		EXYNOS_CLKREG(0x10270)
#define EXYNOS5_CLKSRC_MASK_TOP		EXYNOS_CLKREG(0x10310)
#define EXYNOS5_CLKSRC_MASK_GSCL	EXYNOS_CLKREG(0x10320)
#define EXYNOS5_CLKSRC_MASK_DISP1_0	EXYNOS_CLKREG(0x1032C)
#define EXYNOS5_CLKSRC_MASK_MAUDIO	EXYNOS_CLKREG(0x10334)
#define EXYNOS5_CLKSRC_MASK_FSYS	EXYNOS_CLKREG(0x10340)
#define EXYNOS5_CLKSRC_MASK_GEN		EXYNOS_CLKREG(0x10344)
#define EXYNOS5_CLKSRC_MASK_PERIC0	EXYNOS_CLKREG(0x10350)
#define EXYNOS5_CLKSRC_MASK_PERIC1	EXYNOS_CLKREG(0x10354)
#define EXYNOS5_CLKSRC_MASK_ISP		EXYNOS_CLKREG(0x10370)
#define EXYNOS5_CLKSRC_LEX		EXYNOS_CLKREG(0x14200)
#define EXYNOS5_CLKSRC_CDREX		EXYNOS_CLKREG(0x20200)

/* Clock Rate Control Registers */
#define EXYNOS5_CLKDIV_CORE0		EXYNOS_CLKREG(0x04500)
#define EXYNOS5_CLKDIV_CORE1		EXYNOS_CLKREG(0x04504)
#define EXYNOS5_CLKDIV_SYSRGT		EXYNOS_CLKREG(0x04508)
#define EXYNOS5_CLKDIV_ACP		EXYNOS_CLKREG(0x08500)
#define EXYNOS5_CLKDIV_SYSLFT		EXYNOS_CLKREG(0x08900)
#define EXYNOS5_CLKDIV_ISP0		EXYNOS_CLKREG(0x0C300)
#define EXYNOS5_CLKDIV_ISP1		EXYNOS_CLKREG(0x0C304)
#define EXYNOS5_CLKDIV_ISP2		EXYNOS_CLKREG(0x0C308)
#define EXYNOS5_CLKDIV_TOP0		EXYNOS_CLKREG(0x10510)
#define EXYNOS5_CLKDIV_TOP1		EXYNOS_CLKREG(0x10514)
#define EXYNOS5_CLKDIV_GSCL		EXYNOS_CLKREG(0x10520)
#define EXYNOS5_CLKDIV_DISP1_0		EXYNOS_CLKREG(0x1052C)
#define EXYNOS5_CLKDIV_GEN		EXYNOS_CLKREG(0x1053C)
#define EXYNOS5_CLKDIV_MAUDIO		EXYNOS_CLKREG(0x10544)
#define EXYNOS5_CLKDIV_FSYS0		EXYNOS_CLKREG(0x10548)
#define EXYNOS5_CLKDIV_FSYS1		EXYNOS_CLKREG(0x1054C)
#define EXYNOS5_CLKDIV_FSYS2		EXYNOS_CLKREG(0x10550)
#define EXYNOS5_CLKDIV_FSYS3		EXYNOS_CLKREG(0x10554)
#define EXYNOS5_CLKDIV_PERIC0		EXYNOS_CLKREG(0x10558)
#define EXYNOS5_CLKDIV_PERIC1		EXYNOS_CLKREG(0x1055C)
#define EXYNOS5_CLKDIV_PERIC2		EXYNOS_CLKREG(0x10560)
#define EXYNOS5_CLKDIV_PERIC3		EXYNOS_CLKREG(0x10564)
#define EXYNOS5_CLKDIV_PERIC4		EXYNOS_CLKREG(0x10568)
#define EXYNOS5_CLKDIV_PERIC5		EXYNOS_CLKREG(0x1056C)
#define EXYNOS5_SCLK_DIV_ISP		EXYNOS_CLKREG(0x10580)
#define EXYNOS5_CLKDIV_ISP0		EXYNOS_CLKREG(0x0C300)
#define EXYNOS5_CLKDIV_ISP1		EXYNOS_CLKREG(0x0C304)
#define EXYNOS5_CLKDIV_ISP2		EXYNOS_CLKREG(0x0C308)
#define EXYNOS5_CLKDIV2_RATIO0		EXYNOS_CLKREG(0x10590)
#define EXYNOS5_CLKDIV2_RATIO1		EXYNOS_CLKREG(0x10594)
#define EXYNOS5_CLKDIV4_RATIO		EXYNOS_CLKREG(0x105A0)
#define EXYNOS5_CLKDIV_LEX		EXYNOS_CLKREG(0x14500)
#define EXYNOS5_CLKDIV_R0X		EXYNOS_CLKREG(0x18500)
#define EXYNOS5_CLKDIV_R1X		EXYNOS_CLKREG(0x1C500)
#define EXYNOS5_CLKDIV_CDREX		EXYNOS_CLKREG(0x20500)
#define EXYNOS5_CLKDIV_CDREX2		EXYNOS_CLKREG(0x20504)

#define EXYNOS5_CLKDIV_STAT_CPU0	EXYNOS_CLKREG(0x00600)
#define EXYNOS5_CLKDIV_STAT_CPU1	EXYNOS_CLKREG(0x00604)
#define EXYNOS5_CLKDIV_STAT_CORE0	EXYNOS_CLKREG(0x04600)
#define EXYNOS5_CLKDIV_STAT_CORE1	EXYNOS_CLKREG(0x04604)
#define EXYNOS5_CLKDIV_STAT_SYSRGT	EXYNOS_CLKREG(0x04608)
#define EXYNOS5_CLKDIV_STAT_ACP		EXYNOS_CLKREG(0x08600)
#define EXYNOS5_CLKDIV_STAT_SYSLFT	EXYNOS_CLKREG(0x08910)
#define EXYNOS5_CLKDIV_STAT_ISP0	EXYNOS_CLKREG(0x0C400)
#define EXYNOS5_CLKDIV_STAT_ISP1	EXYNOS_CLKREG(0x0C404)
#define EXYNOS5_CLKDIV_STAT_ISP2	EXYNOS_CLKREG(0x0C408)
#define EXYNOS5_CLKDIV_STAT_TOP0	EXYNOS_CLKREG(0x10610)
#define EXYNOS5_CLKDIV_STAT_TOP1	EXYNOS_CLKREG(0x10614)
#define EXYNOS5_CLKDIV_STAT_GSCL	EXYNOS_CLKREG(0x10620)
#define EXYNOS5_CLKDIV_STAT_DISP1_0	EXYNOS_CLKREG(0x1062C)
#define EXYNOS5_CLKDIV_STAT_GEN		EXYNOS_CLKREG(0x1063C)
#define EXYNOS5_CLKDIV_STAT_MAUDIO	EXYNOS_CLKREG(0x10644)
#define EXYNOS5_CLKDIV_STAT_FSYS0	EXYNOS_CLKREG(0x10648)
#define EXYNOS5_CLKDIV_STAT_FSYS1	EXYNOS_CLKREG(0x1064C)
#define EXYNOS5_CLKDIV_STAT_FSYS2	EXYNOS_CLKREG(0x10650)
#define EXYNOS5_CLKDIV_STAT_PERIC0	EXYNOS_CLKREG(0x10658)
#define EXYNOS5_CLKDIV_STAT_PERIC1	EXYNOS_CLKREG(0x1065C)
#define EXYNOS5_CLKDIV_STAT_PERIC2	EXYNOS_CLKREG(0x10660)
#define EXYNOS5_CLKDIV_STAT_PERIC3	EXYNOS_CLKREG(0x10664)
#define EXYNOS5_CLKDIV_STAT_PERIC4	EXYNOS_CLKREG(0x10668)
#define EXYNOS5_CLKDIV_STAT_PERIC5	EXYNOS_CLKREG(0x1066C)
#define EXYNOS5_SCLK_DIV_STAT_ISP	EXYNOS_CLKREG(0x10680)
#define EXYNOS5_CLKDIV_STAT_LEX		EXYNOS_CLKREG(0x14600)
#define EXYNOS5_CLKDIV_STAT_R0X		EXYNOS_CLKREG(0x18600)
#define EXYNOS5_CLKDIV_STAT_R1X		EXYNOS_CLKREG(0x1C600)
#define EXYNOS5_CLKDIV_STAT_CDREX	EXYNOS_CLKREG(0x20600)
#define EXYNOS5_CLKDIV_STAT_CDREX2	EXYNOS_CLKREG(0x20604)

/* Clock Gate Control Registers */
#define EXYNOS5_CLKGATE_IP_CORE		EXYNOS_CLKREG(0x04900)
#define EXYNOS5_CLKGATE_IP_SYSRGT	EXYNOS_CLKREG(0x04904)
#define EXYNOS5_CLKGATE_IP_ACP		EXYNOS_CLKREG(0x08800)
#define EXYNOS5_CLKGATE_IP_SYSLFT	EXYNOS_CLKREG(0x08930)
#define EXYNOS5_CLKGATE_ISP0		EXYNOS_CLKREG(0x0C800)
#define EXYNOS5_CLKGATE_ISP1		EXYNOS_CLKREG(0x0C804)
#define EXYNOS5_CLKGATE_SCLK_ISP	EXYNOS_CLKREG(0x0C900)
#define EXYNOS5_CLKGATE_TOP_SCLK_DISP1	EXYNOS_CLKREG(0x10828)
#define EXYNOS5_CLKGATE_TOP_SCLK_GEN	EXYNOS_CLKREG(0x1082C)
#define EXYNOS5_CLKGATE_TOP_SCLK_MAUDIO	EXYNOS_CLKREG(0x1083C)
#define EXYNOS5_CLKGATE_TOP_SCLK_FSYS	EXYNOS_CLKREG(0x10840)
#define EXYNOS5_CLKGATE_TOP_SCLK_PERIC	EXYNOS_CLKREG(0x10850)
#define EXYNOS5_CLKGATE_TOP_SCLK_ISP	EXYNOS_CLKREG(0x10870)
#define EXYNOS5_CLKGATE_IP_GSCL		EXYNOS_CLKREG(0x10920)
#define EXYNOS5_CLKGATE_IP_DISP1	EXYNOS_CLKREG(0x10928)
#define EXYNOS5_CLKGATE_IP_MFC		EXYNOS_CLKREG(0x1092C)
#define EXYNOS5_CLKGATE_IP_G3D		EXYNOS_CLKREG(0x10930)
#define EXYNOS5_CLKGATE_IP_GEN		EXYNOS_CLKREG(0x10934)
#define EXYNOS5_CLKGATE_IP_FSYS		EXYNOS_CLKREG(0x10944)
#define EXYNOS5_CLKGATE_IP_GPS		EXYNOS_CLKREG(0x1094C)
#define EXYNOS5_CLKGATE_IP_PERIC	EXYNOS_CLKREG(0x10950)
#define EXYNOS5_CLKGATE_IP_PERIS	EXYNOS_CLKREG(0x10960)
#define EXYNOS5_CLKGATE_BLOCK		EXYNOS_CLKREG(0x10980)
#define EXYNOS5_CLKGATE_ISP0		EXYNOS_CLKREG(0x0C800)
#define EXYNOS5_CLKGATE_ISP1		EXYNOS_CLKREG(0x0C804)

#define EXYNOS5_CLKOUT_CMU_CPU		EXYNOS_CLKREG(0x00A00)
#define EXYNOS5_CLKOUT_CMU_CORE		EXYNOS_CLKREG(0x04A00)
#define EXYNOS5_CLKOUT_CMU_ACP		EXYNOS_CLKREG(0x08A00)
#define EXYNOS5_CLKOUT_CMU_ISP		EXYNOS_CLKREG(0x0CA00)
#define EXYNOS5_CLKOUT_CMU_TOP		EXYNOS_CLKREG(0x10A00)
#define EXYNOS5_CLKOUT_CMU_LEX		EXYNOS_CLKREG(0x14A00)
#define EXYNOS5_CLKOUT_CMU_R0X		EXYNOS_CLKREG(0x18A00)
#define EXYNOS5_CLKOUT_CMU_R1X		EXYNOS_CLKREG(0x1CA00)
#define EXYNOS5_CLKOUT_CMU_CDREX	EXYNOS_CLKREG(0x20A00)
#define EXYNOS5_CLKGATE_IP_LEX		EXYNOS_CLKREG(0x14800)
#define EXYNOS5_CLKGATE_IP_R0X		EXYNOS_CLKREG(0x18800)
#define EXYNOS5_CLKGATE_IP_R1X		EXYNOS_CLKREG(0x1C800)
#define EXYNOS5_CLKGATE_IP_CDREX	EXYNOS_CLKREG(0x20900)

#define EXYNOS5_MCUIOP_PWR_CTRL		EXYNOS_CLKREG(0x109A0)

#define EXYNOS5_CLKOUT_CMU_ACP		EXYNOS_CLKREG(0x08A00)
#define EXYNOS5_CLKOUT_CMU_ISP		EXYNOS_CLKREG(0x0CA00)
#define EXYNOS5_CLKOUT_CMU_TOP		EXYNOS_CLKREG(0x10A00)
#define EXYNOS5_CLKOUT_CMU_LEX		EXYNOS_CLKREG(0x14A00)
#define EXYNOS5_CLKOUT_CMU_R0X		EXYNOS_CLKREG(0x18A00)
#define EXYNOS5_CLKOUT_CMU_R1X		EXYNOS_CLKREG(0x1CA00)
#define EXYNOS5_CLKOUT_CMU_CDREX	EXYNOS_CLKREG(0x20A00)

#define EXYNOS5_CLKGATE_IP_CPU		EXYNOS_CLKREG(0x20900)
#define EXYNOS5_DMC_FREQ_CTRL		EXYNOS_CLKREG(0x20914)
#define EXYNOS5_DREX2_PAUSE		EXYNOS_CLKREG(0x2091C)

#define EXYNOS5_LPDDR3PHY_CTRL		EXYNOS_CLKREG(0x20A10)
#define EXYNOS5_LPDDR3PHY_CON0		EXYNOS_CLKREG(0x20A14)
#define EXYNOS5_LPDDR3PHY_CON1		EXYNOS_CLKREG(0x20A18)
#define EXYNOS5_LPDDR3PHY_CON2		EXYNOS_CLKREG(0x20A1C)
#define EXYNOS5_LPDDR3PHY_CON3		EXYNOS_CLKREG(0x20A20)
#define EXYNOS5_PLL_DIV2_SEL		EXYNOS_CLKREG(0x20A24)



#define EXYNOS5_EPLLCON0_ENABLE_SHIFT	(31)
#define EXYNOS5_EPLLCON0_LOCKED_SHIFT	(29)
#define EXYNOS5_VPLLCON0_LOCKED_SHIFT	(29)

#define EXYNOS5_CLKDIV_TOP0_ACLK300_DISP1_SHIFT	(28)
#define EXYNOS5_CLKDIV_TOP0_ACLK300_DISP1_MASK	(0x7 << EXYNOS5_CLKDIV_TOP0_ACLK300_DISP1_SHIFT)
#define EXYNOS5_CLKDIV_TOP0_ACLK400_SHIFT	(24)
#define EXYNOS5_CLKDIV_TOP0_ACLK400_MASK	(0x7 << EXYNOS5_CLKDIV_TOP0_ACLK400_SHIFT)
#define EXYNOS5_CLKDIV_TOP0_ACLK333_SHIFT	(20)
#define EXYNOS5_CLKDIV_TOP0_ACLK333_MASK	(0x7 << EXYNOS5_CLKDIV_TOP0_ACLK333_SHIFT)
#define EXYNOS5_CLKDIV_TOP0_ACLK266_SHIFT	(16)
#define EXYNOS5_CLKDIV_TOP0_ACLK266_MASK	(0x7 << EXYNOS5_CLKDIV_TOP0_ACLK266_SHIFT)
#define EXYNOS5_CLKDIV_TOP0_ACLK200_SHIFT	(12)
#define EXYNOS5_CLKDIV_TOP0_ACLK200_MASK	(0x7 << EXYNOS5_CLKDIV_TOP0_ACLK200_SHIFT)
#define EXYNOS5_CLKDIV_TOP0_ACLK166_SHIFT	(8)
#define EXYNOS5_CLKDIV_TOP0_ACLK166_MASK	(0x7 << EXYNOS5_CLKDIV_TOP0_ACLK166_SHIFT)
#define EXYNOS5_CLKDIV_TOP0_ACLK133_SHIFT	(4)
#define EXYNOS5_CLKDIV_TOP0_ACLK133_MASK	(0x7 << EXYNOS5_CLKDIV_TOP0_ACLK133_SHIFT)
#define EXYNOS5_CLKDIV_TOP0_ACLK66_SHIFT	(0)
#define EXYNOS5_CLKDIV_TOP0_ACLK66_MASK		(0x7 << EXYNOS5_CLKDIV_TOP0_ACLK66_SHIFT)

#define EXYNOS5_CLKDIV_TOP1_ACLK66_PRE_SHIFT	(24)
#define EXYNOS5_CLKDIV_TOP1_ACLK66_PRE_MASK	(0x7 << EXYNOS5_CLKDIV_TOP1_ACLK66_PRE_SHIFT)
#define EXYNOS5_CLKDIV_TOP1_ACLK400_ISP_SHIFT	(20)
#define EXYNOS5_CLKDIV_TOP1_ACLK400_ISP_MASK	(0x7 << EXYNOS5_CLKDIV_TOP1_ACLK400_ISP_SHIFT)
#define EXYNOS5_CLKDIV_TOP1_ACLK400_IOP_SHIFT	(16)
#define EXYNOS5_CLKDIV_TOP1_ACLK400_IOP_MASK	(0x7 << EXYNOS5_CLKDIV_TOP1_ACLK400_IOP_SHIFT)
#define EXYNOS5_CLKDIV_TOP1_ACLK300_GSCL_SHIFT	(12)
#define EXYNOS5_CLKDIV_TOP1_ACLK300_GSCL_MASK	(0x7 << EXYNOS5_CLKDIV_TOP1_ACLK300_GSCL_SHIFT)
#define EXYNOS5_CLKDIV_TOP1_ACLK266_GPS_SHIFT	(8)
#define EXYNOS5_CLKDIV_TOP1_ACLK266_GPS_MASK	(0x7 << EXYNOS5_CLKDIV_TOP1_ACLK266_GPS_SHIFT)

#define EXYNOS5_CLKDIV_LEX_ATCLK_LEX_SHIFT	(8)
#define EXYNOS5_CLKDIV_LEX_ATCLK_LEX_MASK	(0x7 << EXYNOS5_CLKDIV_LEX_ATCLK_LEX_SHIFT)
#define EXYNOS5_CLKDIV_LEX_PCLK_LEX_SHIFT	(4)
#define EXYNOS5_CLKDIV_LEX_PCLK_LEX_MASK	(0x7 << EXYNOS5_CLKDIV_LEX_PCLK_LEX_SHIFT)

#define EXYNOS5_CLKDIV_R0X_PCLK_R0X_SHIFT	(4)
#define EXYNOS5_CLKDIV_R0X_PCLK_R0X_MASK	(0x7 << EXYNOS5_CLKDIV_R0X_PCLK_R0X_SHIFT)

#define EXYNOS5_CLKDIV_R1X_PCLK_R1X_SHIFT	(4)
#define EXYNOS5_CLKDIV_R1X_PCLK_R1X_MASK	(0x7 << EXYNOS5_CLKDIV_R1X_PCLK_R1X_SHIFT)

#define EXYNOS5_CLKDIV_CDREX_MCLK_CDREX2_SHIFT	(28)
#define EXYNOS5_CLKDIV_CDREX_MCLK_CDREX2_MASK	(0x7 << EXYNOS5_CLKDIV_CDREX_MCLK_CDREX2_SHIFT)
#define EXYNOS5_CLKDIV_CDREX_ACLK_EFCON_SHIFT	(24)
#define EXYNOS5_CLKDIV_CDREX_ACLK_EFCON_MASK	(0x7 << EXYNOS5_CLKDIV_CDREX_ACLK_EFCON_SHIFT)
#define EXYNOS5_CLKDIV_CDREX_MCLK_DPHY_SHIFT	(20)
#define EXYNOS5_CLKDIV_CDREX_MCLK_DPHY_MASK	(0x7 << EXYNOS5_CLKDIV_CDREX_MCLK_DPHY_SHIFT)
#define EXYNOS5_CLKDIV_CDREX_MCLK_CDREX_SHIFT	(16)
#define EXYNOS5_CLKDIV_CDREX_MCLK_CDREX_MASK	(0x7 << EXYNOS5_CLKDIV_CDREX_MCLK_CDREX_SHIFT)
#define EXYNOS5_CLKDIV_CDREX_ACLK_C2C200_SHIFT	(12)
#define EXYNOS5_CLKDIV_CDREX_ACLK_C2C200_MASK	(0x7 << EXYNOS5_CLKDIV_CDREX_ACLK_C2C200_SHIFT)
#define EXYNOS5_CLKDIV_CDREX_ACLK_CLK400_SHIFT	(8)
#define EXYNOS5_CLKDIV_CDREX_ACLK_CLK400_MASK	(0x7 << EXYNOS5_CLKDIV_CDREX_ACLK_CLK400_SHIFT)
#define EXYNOS5_CLKDIV_CDREX_PCLK_CDREX_SHIFT	(4)
#define EXYNOS5_CLKDIV_CDREX_PCLK_CDREX_MASK	(0x7 << EXYNOS5_CLKDIV_CDREX_PCLK_CDREX_SHIFT)
#define EXYNOS5_CLKDIV_CDREX_ACLK_CDREX_SHIFT	(0)
#define EXYNOS5_CLKDIV_CDREX_ACLK_CDREX_MASK	(0x7 << EXYNOS5_CLKDIV_CDREX_ACLK_CDREX_SHIFT)

#define EXYNOS5_CLKDIV_CDREX2_MCLK_EFPHY_SHIFT	(0)
#define EXYNOS5_CLKDIV_CDREX2_MCLK_EFPHY_MASK	(0xf << EXYNOS5_CLKDIV_CDREX2_MCLK_EFPHY_SHIFT)

#define EXYNOS5_VPLLCON0_LOCKED_SHIFT		(29)
#define EXYNOS5_GPLLCON0_LOCKED_SHIFT		(29)

/* Compatibility defines and inclusion */

#include <mach/regs-pmu.h>

#if defined(CONFIG_ARCH_EXYNOS4)
#define S5P_EPLL_CON			EXYNOS4_EPLL_CON0
#elif defined(CONFIG_ARCH_EXYNOS5)
#define S5P_EPLL_CON			EXYNOS5_EPLL_CON0
#else
#error "ARCH_EXYNOS* is not defined"
#endif

#endif /* __ASM_ARCH_REGS_CLOCK_H */
