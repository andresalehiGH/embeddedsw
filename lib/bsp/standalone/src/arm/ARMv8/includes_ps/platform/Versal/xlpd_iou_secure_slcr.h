/*******************************************************************************
 *
 * Copyright (C) 2018-2019 Xilinx, Inc.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *
 *
*******************************************************************************/

#ifndef __XLPD_XIOU_SECURE_SLCR_H__
#define __XLPD_XIOU_SECURE_SLCR_H__


#ifdef __cplusplus
extern "C" {
#endif

/**
 * XlpdXiouSecureSlcr Base Address
 */
#define XLPD_XIOU_SECURE_SLCR_BASEADDR      0xFF0A0000UL

/**
 * Register: XlpdXiouSecureSlcrAxiWprtcnGem0
 */
#define XLPD_XIOU_SECURE_SLCR_AXI_WPRTCN_GEM0    ( ( XLPD_XIOU_SECURE_SLCR_BASEADDR ) + 0x00000000UL )
#define XLPD_XIOU_SECURE_SLCR_AXI_WPRTCN_GEM0_RSTVAL   0x00000000UL

#define XLPD_XIOU_SECURE_SLCR_AXI_WPRTCN_GEM0_AWPROT_SHIFT   0UL
#define XLPD_XIOU_SECURE_SLCR_AXI_WPRTCN_GEM0_AWPROT_WIDTH   3UL
#define XLPD_XIOU_SECURE_SLCR_AXI_WPRTCN_GEM0_AWPROT_MASK    0x00000007UL
#define XLPD_XIOU_SECURE_SLCR_AXI_WPRTCN_GEM0_AWPROT_DEFVAL  0x0UL

/**
 * Register: XlpdXiouSecureSlcrAxiRprtcnGem0
 */
#define XLPD_XIOU_SECURE_SLCR_AXI_RPRTCN_GEM0    ( ( XLPD_XIOU_SECURE_SLCR_BASEADDR ) + 0x00000004UL )
#define XLPD_XIOU_SECURE_SLCR_AXI_RPRTCN_GEM0_RSTVAL   0x00000000UL

#define XLPD_XIOU_SECURE_SLCR_AXI_RPRTCN_GEM0_ARPROT_SHIFT   0UL
#define XLPD_XIOU_SECURE_SLCR_AXI_RPRTCN_GEM0_ARPROT_WIDTH   3UL
#define XLPD_XIOU_SECURE_SLCR_AXI_RPRTCN_GEM0_ARPROT_MASK    0x00000007UL
#define XLPD_XIOU_SECURE_SLCR_AXI_RPRTCN_GEM0_ARPROT_DEFVAL  0x0UL

/**
 * Register: XlpdXiouSecureSlcrAxiWprtcnGem1
 */
#define XLPD_XIOU_SECURE_SLCR_AXI_WPRTCN_GEM1    ( ( XLPD_XIOU_SECURE_SLCR_BASEADDR ) + 0x00000010UL )
#define XLPD_XIOU_SECURE_SLCR_AXI_WPRTCN_GEM1_RSTVAL   0x00000000UL

#define XLPD_XIOU_SECURE_SLCR_AXI_WPRTCN_GEM1_AWPROT_SHIFT   0UL
#define XLPD_XIOU_SECURE_SLCR_AXI_WPRTCN_GEM1_AWPROT_WIDTH   3UL
#define XLPD_XIOU_SECURE_SLCR_AXI_WPRTCN_GEM1_AWPROT_MASK    0x00000007UL
#define XLPD_XIOU_SECURE_SLCR_AXI_WPRTCN_GEM1_AWPROT_DEFVAL  0x0UL

/**
 * Register: XlpdXiouSecureSlcrAxiRprtcnGem1
 */
#define XLPD_XIOU_SECURE_SLCR_AXI_RPRTCN_GEM1    ( ( XLPD_XIOU_SECURE_SLCR_BASEADDR ) + 0x00000014UL )
#define XLPD_XIOU_SECURE_SLCR_AXI_RPRTCN_GEM1_RSTVAL   0x00000000UL

#define XLPD_XIOU_SECURE_SLCR_AXI_RPRTCN_GEM1_ARPROT_SHIFT   0UL
#define XLPD_XIOU_SECURE_SLCR_AXI_RPRTCN_GEM1_ARPROT_WIDTH   3UL
#define XLPD_XIOU_SECURE_SLCR_AXI_RPRTCN_GEM1_ARPROT_MASK    0x00000007UL
#define XLPD_XIOU_SECURE_SLCR_AXI_RPRTCN_GEM1_ARPROT_DEFVAL  0x0UL

/**
 * Register: XlpdXiouSecureSlcrUsb2Tz
 */
#define XLPD_XIOU_SECURE_SLCR_USB2_TZ    ( ( XLPD_XIOU_SECURE_SLCR_BASEADDR ) + 0x00000020UL )
#define XLPD_XIOU_SECURE_SLCR_USB2_TZ_RSTVAL   0x00000001UL

#define XLPD_XIOU_SECURE_SLCR_USB2_TZ_0_SHIFT   0UL
#define XLPD_XIOU_SECURE_SLCR_USB2_TZ_0_WIDTH   1UL
#define XLPD_XIOU_SECURE_SLCR_USB2_TZ_0_MASK    0x00000001UL
#define XLPD_XIOU_SECURE_SLCR_USB2_TZ_0_DEFVAL  0x1UL

/**
 * Register: XlpdXiouSecureSlcrCtrl
 */
#define XLPD_XIOU_SECURE_SLCR_CTRL    ( ( XLPD_XIOU_SECURE_SLCR_BASEADDR ) + 0x00000040UL )
#define XLPD_XIOU_SECURE_SLCR_CTRL_RSTVAL   0x00000000UL

#define XLPD_XIOU_SECURE_SLCR_CTRL_SLVERR_EN_SHIFT   0UL
#define XLPD_XIOU_SECURE_SLCR_CTRL_SLVERR_EN_WIDTH   1UL
#define XLPD_XIOU_SECURE_SLCR_CTRL_SLVERR_EN_MASK    0x00000001UL
#define XLPD_XIOU_SECURE_SLCR_CTRL_SLVERR_EN_DEFVAL  0x0UL

/**
 * Register: XlpdXiouSecureSlcrIsr
 */
#define XLPD_XIOU_SECURE_SLCR_ISR    ( ( XLPD_XIOU_SECURE_SLCR_BASEADDR ) + 0x00000044UL )
#define XLPD_XIOU_SECURE_SLCR_ISR_RSTVAL   0x00000000UL

#define XLPD_XIOU_SECURE_SLCR_ISR_ADDR_DECODE_ERR_SHIFT   0UL
#define XLPD_XIOU_SECURE_SLCR_ISR_ADDR_DECODE_ERR_WIDTH   1UL
#define XLPD_XIOU_SECURE_SLCR_ISR_ADDR_DECODE_ERR_MASK    0x00000001UL
#define XLPD_XIOU_SECURE_SLCR_ISR_ADDR_DECODE_ERR_DEFVAL  0x0UL

/**
 * Register: XlpdXiouSecureSlcrImr
 */
#define XLPD_XIOU_SECURE_SLCR_IMR    ( ( XLPD_XIOU_SECURE_SLCR_BASEADDR ) + 0x00000048UL )
#define XLPD_XIOU_SECURE_SLCR_IMR_RSTVAL   0x00000001UL

#define XLPD_XIOU_SECURE_SLCR_IMR_ADDR_DECODE_ERR_SHIFT   0UL
#define XLPD_XIOU_SECURE_SLCR_IMR_ADDR_DECODE_ERR_WIDTH   1UL
#define XLPD_XIOU_SECURE_SLCR_IMR_ADDR_DECODE_ERR_MASK    0x00000001UL
#define XLPD_XIOU_SECURE_SLCR_IMR_ADDR_DECODE_ERR_DEFVAL  0x1UL

/**
 * Register: XlpdXiouSecureSlcrIer
 */
#define XLPD_XIOU_SECURE_SLCR_IER    ( ( XLPD_XIOU_SECURE_SLCR_BASEADDR ) + 0x0000004CUL )
#define XLPD_XIOU_SECURE_SLCR_IER_RSTVAL   0x00000000UL

#define XLPD_XIOU_SECURE_SLCR_IER_ADDR_DECODE_ERR_SHIFT   0UL
#define XLPD_XIOU_SECURE_SLCR_IER_ADDR_DECODE_ERR_WIDTH   1UL
#define XLPD_XIOU_SECURE_SLCR_IER_ADDR_DECODE_ERR_MASK    0x00000001UL
#define XLPD_XIOU_SECURE_SLCR_IER_ADDR_DECODE_ERR_DEFVAL  0x0UL

/**
 * Register: XlpdXiouSecureSlcrIdr
 */
#define XLPD_XIOU_SECURE_SLCR_IDR    ( ( XLPD_XIOU_SECURE_SLCR_BASEADDR ) + 0x00000050UL )
#define XLPD_XIOU_SECURE_SLCR_IDR_RSTVAL   0x00000000UL

#define XLPD_XIOU_SECURE_SLCR_IDR_ADDR_DECODE_ERR_SHIFT   0UL
#define XLPD_XIOU_SECURE_SLCR_IDR_ADDR_DECODE_ERR_WIDTH   1UL
#define XLPD_XIOU_SECURE_SLCR_IDR_ADDR_DECODE_ERR_MASK    0x00000001UL
#define XLPD_XIOU_SECURE_SLCR_IDR_ADDR_DECODE_ERR_DEFVAL  0x0UL

/**
 * Register: XlpdXiouSecureSlcrItr
 */
#define XLPD_XIOU_SECURE_SLCR_ITR    ( ( XLPD_XIOU_SECURE_SLCR_BASEADDR ) + 0x00000054UL )
#define XLPD_XIOU_SECURE_SLCR_ITR_RSTVAL   0x00000000UL

#define XLPD_XIOU_SECURE_SLCR_ITR_ADDR_DECODE_ERR_SHIFT   0UL
#define XLPD_XIOU_SECURE_SLCR_ITR_ADDR_DECODE_ERR_WIDTH   1UL
#define XLPD_XIOU_SECURE_SLCR_ITR_ADDR_DECODE_ERR_MASK    0x00000001UL
#define XLPD_XIOU_SECURE_SLCR_ITR_ADDR_DECODE_ERR_DEFVAL  0x0UL

/**
 * Register: XlpdXiouSecureSlcrTzprot
 */
#define XLPD_XIOU_SECURE_SLCR_TZPROT    ( ( XLPD_XIOU_SECURE_SLCR_BASEADDR ) + 0x0000007CUL )
#define XLPD_XIOU_SECURE_SLCR_TZPROT_RSTVAL   0x00000000UL

#define XLPD_XIOU_SECURE_SLCR_TZPROT_ACT_SHIFT   0UL
#define XLPD_XIOU_SECURE_SLCR_TZPROT_ACT_WIDTH   1UL
#define XLPD_XIOU_SECURE_SLCR_TZPROT_ACT_MASK    0x00000001UL
#define XLPD_XIOU_SECURE_SLCR_TZPROT_ACT_DEFVAL  0x0UL


#ifdef __cplusplus
}
#endif

#endif /* __XLPD_XIOU_SECURE_SLCR_H__ */
