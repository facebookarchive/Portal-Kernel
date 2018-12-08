/*
* iaxxx-register-defs-cnr0.h -- IAxxx register defination for cnr0
*
* Copyright (c) 2016 Knowles Corporation.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 and
* only version 2 as published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*/


#ifndef __IAXXX_REGISTER_DEFS_CNR0_H__
#define __IAXXX_REGISTER_DEFS_CNR0_H__

/*** The base address for this set of registers ***/
#define IAXXX_CNR0_REGS_ADDR (0x50040000)

/*** IAXXX_CNR0_APB_REG_SOFT_RST (0x50040000) **
* Resets APB registers */
#define IAXXX_CNR0_APB_REG_SOFT_RST_ADDR (0x50040000)
#define IAXXX_CNR0_APB_REG_SOFT_RST_MASK_VAL 0x0000003e
#define IAXXX_CNR0_APB_REG_SOFT_RST_RMASK_VAL 0x0000003e
#define IAXXX_CNR0_APB_REG_SOFT_RST_WMASK_VAL 0x00000000
#define IAXXX_CNR0_APB_REG_SOFT_RST_RESET_VAL 0x00000000

/* Write 1 to reset H2P2 APB registers only. It will always read back as 0 */
#define IAXXX_CNR0_APB_REG_SOFT_RST_H2P2_APB_REG_SOFT_RST_MASK 0x00000002
#define IAXXX_CNR0_APB_REG_SOFT_RST_H2P2_APB_REG_SOFT_RST_RESET_VAL 0x0
#define IAXXX_CNR0_APB_REG_SOFT_RST_H2P2_APB_REG_SOFT_RST_POS 1
#define IAXXX_CNR0_APB_REG_SOFT_RST_H2P2_APB_REG_SOFT_RST_SIZE 1
#define IAXXX_CNR0_APB_REG_SOFT_RST_H2P2_APB_REG_SOFT_RST_DECL 1

/* Write 1 to reset SSMM APB registers only. It will always read back as 0 */
#define IAXXX_CNR0_APB_REG_SOFT_RST_SSMM_APB_REG_SOFT_RST_MASK 0x00000004
#define IAXXX_CNR0_APB_REG_SOFT_RST_SSMM_APB_REG_SOFT_RST_RESET_VAL 0x0
#define IAXXX_CNR0_APB_REG_SOFT_RST_SSMM_APB_REG_SOFT_RST_POS 2
#define IAXXX_CNR0_APB_REG_SOFT_RST_SSMM_APB_REG_SOFT_RST_SIZE 1
#define IAXXX_CNR0_APB_REG_SOFT_RST_SSMM_APB_REG_SOFT_RST_DECL 2

/* Write 1 to reset SBUS APB registers only. It will always read back as 0 */
#define IAXXX_CNR0_APB_REG_SOFT_RST_SBUS_APB_REG_SOFT_RST_MASK 0x00000008
#define IAXXX_CNR0_APB_REG_SOFT_RST_SBUS_APB_REG_SOFT_RST_RESET_VAL 0x0
#define IAXXX_CNR0_APB_REG_SOFT_RST_SBUS_APB_REG_SOFT_RST_POS 3
#define IAXXX_CNR0_APB_REG_SOFT_RST_SBUS_APB_REG_SOFT_RST_SIZE 1
#define IAXXX_CNR0_APB_REG_SOFT_RST_SBUS_APB_REG_SOFT_RST_DECL 3

/* Write 1 to reset I2SM APB registers only. It will always read back as 0 */
#define IAXXX_CNR0_APB_REG_SOFT_RST_I2SM_APB_REG_SOFT_RST_MASK 0x00000010
#define IAXXX_CNR0_APB_REG_SOFT_RST_I2SM_APB_REG_SOFT_RST_RESET_VAL 0x0
#define IAXXX_CNR0_APB_REG_SOFT_RST_I2SM_APB_REG_SOFT_RST_POS 4
#define IAXXX_CNR0_APB_REG_SOFT_RST_I2SM_APB_REG_SOFT_RST_SIZE 1
#define IAXXX_CNR0_APB_REG_SOFT_RST_I2SM_APB_REG_SOFT_RST_DECL 4

/* Write 1 to reset H2P2 APB registers only. It will always read back as 0 */
#define IAXXX_CNR0_APB_REG_SOFT_RST_H2X_APB_REG_SOFT_RST_MASK 0x00000020
#define IAXXX_CNR0_APB_REG_SOFT_RST_H2X_APB_REG_SOFT_RST_RESET_VAL 0x0
#define IAXXX_CNR0_APB_REG_SOFT_RST_H2X_APB_REG_SOFT_RST_POS 5
#define IAXXX_CNR0_APB_REG_SOFT_RST_H2X_APB_REG_SOFT_RST_SIZE 1
#define IAXXX_CNR0_APB_REG_SOFT_RST_H2X_APB_REG_SOFT_RST_DECL 5

/*** IAXXX_CNR0_FUNC_SOFT_RST (0x50040004)
* Reset the corresponding APB_REG_SOFT_RST when reprogramming the module */
#define IAXXX_CNR0_FUNC_SOFT_RST_ADDR (0x50040004)
#define IAXXX_CNR0_FUNC_SOFT_RST_MASK_VAL 0x0003ffff
#define IAXXX_CNR0_FUNC_SOFT_RST_RMASK_VAL 0x0003ffff
#define IAXXX_CNR0_FUNC_SOFT_RST_WMASK_VAL 0x0003ffff
#define IAXXX_CNR0_FUNC_SOFT_RST_RESET_VAL 0x0003ffff

/* AF reset in PD0 */
#define IAXXX_CNR0_FUNC_SOFT_RST_AF_SOFT_RST_MASK 0x00000001
#define IAXXX_CNR0_FUNC_SOFT_RST_AF_SOFT_RST_RESET_VAL 0x1
#define IAXXX_CNR0_FUNC_SOFT_RST_AF_SOFT_RST_POS 0
#define IAXXX_CNR0_FUNC_SOFT_RST_AF_SOFT_RST_SIZE 1
#define IAXXX_CNR0_FUNC_SOFT_RST_AF_SOFT_RST_DECL 0

/* AUD WALL reset in PD0 */
#define IAXXX_CNR0_FUNC_SOFT_RST_AUD_WALL_SOFT_RST_MASK 0x00000002
#define IAXXX_CNR0_FUNC_SOFT_RST_AUD_WALL_SOFT_RST_RESET_VAL 0x1
#define IAXXX_CNR0_FUNC_SOFT_RST_AUD_WALL_SOFT_RST_POS 1
#define IAXXX_CNR0_FUNC_SOFT_RST_AUD_WALL_SOFT_RST_SIZE 1
#define IAXXX_CNR0_FUNC_SOFT_RST_AUD_WALL_SOFT_RST_DECL 1

/* SSMM reset in PD0 */
#define IAXXX_CNR0_FUNC_SOFT_RST_SSMM_SOFT_RST_MASK 0x00000004
#define IAXXX_CNR0_FUNC_SOFT_RST_SSMM_SOFT_RST_RESET_VAL 0x1
#define IAXXX_CNR0_FUNC_SOFT_RST_SSMM_SOFT_RST_POS 2
#define IAXXX_CNR0_FUNC_SOFT_RST_SSMM_SOFT_RST_SIZE 1
#define IAXXX_CNR0_FUNC_SOFT_RST_SSMM_SOFT_RST_DECL 2

/* SBUS reset in PD0 */
#define IAXXX_CNR0_FUNC_SOFT_RST_SBUS_SOFT_RST_MASK 0x00000008
#define IAXXX_CNR0_FUNC_SOFT_RST_SBUS_SOFT_RST_RESET_VAL 0x1
#define IAXXX_CNR0_FUNC_SOFT_RST_SBUS_SOFT_RST_POS 3
#define IAXXX_CNR0_FUNC_SOFT_RST_SBUS_SOFT_RST_SIZE 1
#define IAXXX_CNR0_FUNC_SOFT_RST_SBUS_SOFT_RST_DECL 3

/* PCM0 reset in PD0 */
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM0_SOFT_RST_MASK 0x00000010
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM0_SOFT_RST_RESET_VAL 0x1
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM0_SOFT_RST_POS 4
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM0_SOFT_RST_SIZE 1
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM0_SOFT_RST_DECL 4

/* PCM1 reset in PD0 */
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM1_SOFT_RST_MASK 0x00000020
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM1_SOFT_RST_RESET_VAL 0x1
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM1_SOFT_RST_POS 5
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM1_SOFT_RST_SIZE 1
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM1_SOFT_RST_DECL 5

/* PCM2 reset in PD0 */
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM2_SOFT_RST_MASK 0x00000040
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM2_SOFT_RST_RESET_VAL 0x1
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM2_SOFT_RST_POS 6
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM2_SOFT_RST_SIZE 1
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM2_SOFT_RST_DECL 6

/* PCM3 reset in PD0 */
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM3_SOFT_RST_MASK 0x00000080
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM3_SOFT_RST_RESET_VAL 0x1
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM3_SOFT_RST_POS 7
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM3_SOFT_RST_SIZE 1
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM3_SOFT_RST_DECL 7

/* PCM4 reset in PD0 */
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM4_SOFT_RST_MASK 0x00000100
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM4_SOFT_RST_RESET_VAL 0x1
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM4_SOFT_RST_POS 8
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM4_SOFT_RST_SIZE 1
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM4_SOFT_RST_DECL 8

/* PCM5 reset in PD0 */
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM5_SOFT_RST_MASK 0x00000200
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM5_SOFT_RST_RESET_VAL 0x1
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM5_SOFT_RST_POS 9
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM5_SOFT_RST_SIZE 1
#define IAXXX_CNR0_FUNC_SOFT_RST_PCM5_SOFT_RST_DECL 9

/* PDM reset in PD0 */
#define IAXXX_CNR0_FUNC_SOFT_RST_PDM_SOFT_RST_MASK 0x00000400
#define IAXXX_CNR0_FUNC_SOFT_RST_PDM_SOFT_RST_RESET_VAL 0x1
#define IAXXX_CNR0_FUNC_SOFT_RST_PDM_SOFT_RST_POS 10
#define IAXXX_CNR0_FUNC_SOFT_RST_PDM_SOFT_RST_SIZE 1
#define IAXXX_CNR0_FUNC_SOFT_RST_PDM_SOFT_RST_DECL 10

/* I2S Master0 reset in PD0 */
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM0_SOFT_RST_MASK 0x00000800
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM0_SOFT_RST_RESET_VAL 0x1
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM0_SOFT_RST_POS 11
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM0_SOFT_RST_SIZE 1
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM0_SOFT_RST_DECL 11

/* I2S Master1 reset in PD0 */
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM1_SOFT_RST_MASK 0x00001000
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM1_SOFT_RST_RESET_VAL 0x1
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM1_SOFT_RST_POS 12
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM1_SOFT_RST_SIZE 1
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM1_SOFT_RST_DECL 12

/* I2S Master2 reset in PD0 */
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM2_SOFT_RST_MASK 0x00002000
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM2_SOFT_RST_RESET_VAL 0x1
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM2_SOFT_RST_POS 13
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM2_SOFT_RST_SIZE 1
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM2_SOFT_RST_DECL 13

/* I2S Master3 reset in PD0 */
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM3_SOFT_RST_MASK 0x00004000
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM3_SOFT_RST_RESET_VAL 0x1
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM3_SOFT_RST_POS 14
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM3_SOFT_RST_SIZE 1
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM3_SOFT_RST_DECL 14

/* I2S Master4 reset in PD0 */
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM4_SOFT_RST_MASK 0x00008000
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM4_SOFT_RST_RESET_VAL 0x1
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM4_SOFT_RST_POS 15
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM4_SOFT_RST_SIZE 1
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM4_SOFT_RST_DECL 15

/* I2S Master5 reset in PD0 */
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM5_SOFT_RST_MASK 0x00010000
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM5_SOFT_RST_RESET_VAL 0x1
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM5_SOFT_RST_POS 16
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM5_SOFT_RST_SIZE 1
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM5_SOFT_RST_DECL 16

/* I2S Master6 reset in PD0 */
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM6_SOFT_RST_MASK 0x00020000
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM6_SOFT_RST_RESET_VAL 0x1
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM6_SOFT_RST_POS 17
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM6_SOFT_RST_SIZE 1
#define IAXXX_CNR0_FUNC_SOFT_RST_I2SM6_SOFT_RST_DECL 17

/*** IAXXX_CNR0_AF_CLK_CTRL (0x50040008) ***/
#define IAXXX_CNR0_AF_CLK_CTRL_ADDR (0x50040008)
#define IAXXX_CNR0_AF_CLK_CTRL_MASK_VAL 0x000001ff
#define IAXXX_CNR0_AF_CLK_CTRL_RMASK_VAL 0x000001ff
#define IAXXX_CNR0_AF_CLK_CTRL_WMASK_VAL 0x000001ff
#define IAXXX_CNR0_AF_CLK_CTRL_RESET_VAL 0x00000000

/* An effective divide of (skip_count + 1) of the clock controlled by this
* register for Audio Fabric <br> When a processor, either BOSS, DVO or SSP,
* have access of the AF, this clock speeds up to the lpx_clk, and the processor
* speeds up to the lpx_clk as well */
#define IAXXX_CNR0_AF_CLK_CTRL_AF_SKIP_CNT_MASK 0x000001ff
#define IAXXX_CNR0_AF_CLK_CTRL_AF_SKIP_CNT_RESET_VAL 0x0
#define IAXXX_CNR0_AF_CLK_CTRL_AF_SKIP_CNT_POS 0
#define IAXXX_CNR0_AF_CLK_CTRL_AF_SKIP_CNT_SIZE 9
#define IAXXX_CNR0_AF_CLK_CTRL_AF_SKIP_CNT_DECL (8:0)

/*** IAXXX_CNR0_PCM_CLK_CTRL (0x5004000c) **
* The clock source is pd0_lpx_clk. When there is an APB access to PCMs, I2S,
* Slimbus or SSMM, these clocks speed up to the same speed as pd0_lpx_clk.
* <br>Otherwise, the clocks runs at the speed of the pd0_lpx_clk divided by
* (PCM_SKIP_CNT + 1). The output of this clock is used for programming PCM,
* I2S, Slim Bus and SSMM registers. This clock has to be turned ON for PCMs/I2S
* Masters/Slimbus/SSMM register programming
*/
#define IAXXX_CNR0_PCM_CLK_CTRL_ADDR (0x5004000c)
#define IAXXX_CNR0_PCM_CLK_CTRL_MASK_VAL 0x000001ff
#define IAXXX_CNR0_PCM_CLK_CTRL_RMASK_VAL 0x000001ff
#define IAXXX_CNR0_PCM_CLK_CTRL_WMASK_VAL 0x000001ff
#define IAXXX_CNR0_PCM_CLK_CTRL_RESET_VAL 0x00000000

/* When set to be 1  it enables PCM skip counter -- PCM_SKIP_CNT */
#define IAXXX_CNR0_PCM_CLK_CTRL_PCM_SKIP_CNT_EN_MASK 0x00000001
#define IAXXX_CNR0_PCM_CLK_CTRL_PCM_SKIP_CNT_EN_RESET_VAL 0x0
#define IAXXX_CNR0_PCM_CLK_CTRL_PCM_SKIP_CNT_EN_POS 0
#define IAXXX_CNR0_PCM_CLK_CTRL_PCM_SKIP_CNT_EN_SIZE 1
#define IAXXX_CNR0_PCM_CLK_CTRL_PCM_SKIP_CNT_EN_DECL 0

/* An effective divide of (skip_count + 1) of the clock controlled by this
* register for all PCM clock */
#define IAXXX_CNR0_PCM_CLK_CTRL_PCM_SKIP_CNT_MASK 0x000001fe
#define IAXXX_CNR0_PCM_CLK_CTRL_PCM_SKIP_CNT_RESET_VAL 0x0
#define IAXXX_CNR0_PCM_CLK_CTRL_PCM_SKIP_CNT_POS 1
#define IAXXX_CNR0_PCM_CLK_CTRL_PCM_SKIP_CNT_SIZE 8
#define IAXXX_CNR0_PCM_CLK_CTRL_PCM_SKIP_CNT_DECL (8:1)

/*** IAXXX_CNR0_CLK_EN (0x50040010) **
* To Enable PCM Clocks */
#define IAXXX_CNR0_CLK_EN_ADDR (0x50040010)
#define IAXXX_CNR0_CLK_EN_MASK_VAL 0x000003ff
#define IAXXX_CNR0_CLK_EN_RMASK_VAL 0x000003ff
#define IAXXX_CNR0_CLK_EN_WMASK_VAL 0x000003ff
#define IAXXX_CNR0_CLK_EN_RESET_VAL 0x00000000

/* enable the clock for AF clock, the clock root is pd0_lpx_clk */
#define IAXXX_CNR0_CLK_EN_AF_LPX_CLK_EN_MASK 0x00000001
#define IAXXX_CNR0_CLK_EN_AF_LPX_CLK_EN_RESET_VAL 0x0
#define IAXXX_CNR0_CLK_EN_AF_LPX_CLK_EN_POS 0
#define IAXXX_CNR0_CLK_EN_AF_LPX_CLK_EN_SIZE 1
#define IAXXX_CNR0_CLK_EN_AF_LPX_CLK_EN_DECL 0

/* 0: Disable corresponding PCM LPX Clock
* 1: Enable corresponding PCM LPX Clock */
#define IAXXX_CNR0_CLK_EN_PCM_LPX_CLK_EN_MASK 0x0000007e
#define IAXXX_CNR0_CLK_EN_PCM_LPX_CLK_EN_RESET_VAL 0x0
#define IAXXX_CNR0_CLK_EN_PCM_LPX_CLK_EN_POS 1
#define IAXXX_CNR0_CLK_EN_PCM_LPX_CLK_EN_SIZE 6
#define IAXXX_CNR0_CLK_EN_PCM_LPX_CLK_EN_DECL (6:1)

/* 0: Disable SLIMbus APB LPX Clock
* 1: Enable SLIMbus APB LPX Clock */
#define IAXXX_CNR0_CLK_EN_SBUS_APB_LPX_CLK_EN_MASK 0x00000080
#define IAXXX_CNR0_CLK_EN_SBUS_APB_LPX_CLK_EN_RESET_VAL 0x0
#define IAXXX_CNR0_CLK_EN_SBUS_APB_LPX_CLK_EN_POS 7
#define IAXXX_CNR0_CLK_EN_SBUS_APB_LPX_CLK_EN_SIZE 1
#define IAXXX_CNR0_CLK_EN_SBUS_APB_LPX_CLK_EN_DECL 7

/* 0: Disable SSMM APB LPX Clock
* 1: Enable SSMM APB LPX Clock */
#define IAXXX_CNR0_CLK_EN_SSMM_APB_LPX_CLK_EN_MASK 0x00000100
#define IAXXX_CNR0_CLK_EN_SSMM_APB_LPX_CLK_EN_RESET_VAL 0x0
#define IAXXX_CNR0_CLK_EN_SSMM_APB_LPX_CLK_EN_POS 8
#define IAXXX_CNR0_CLK_EN_SSMM_APB_LPX_CLK_EN_SIZE 1
#define IAXXX_CNR0_CLK_EN_SSMM_APB_LPX_CLK_EN_DECL 8

/* 0: Disable I2S APB LPX Clock */
/* 1: Enable I2S APB LPX Clock */
#define IAXXX_CNR0_CLK_EN_I2S_APB_LPX_CLK_EN_MASK 0x00000200
#define IAXXX_CNR0_CLK_EN_I2S_APB_LPX_CLK_EN_RESET_VAL 0x0
#define IAXXX_CNR0_CLK_EN_I2S_APB_LPX_CLK_EN_POS 9
#define IAXXX_CNR0_CLK_EN_I2S_APB_LPX_CLK_EN_SIZE 1
#define IAXXX_CNR0_CLK_EN_I2S_APB_LPX_CLK_EN_DECL 9

/*** IAXXX_CNR0_APB_LPX_CLK (0x50040014) ***/
#define IAXXX_CNR0_APB_LPX_CLK_ADDR (0x50040014)
#define IAXXX_CNR0_APB_LPX_CLK_MASK_VAL 0x00003fff
#define IAXXX_CNR0_APB_LPX_CLK_RMASK_VAL 0x00003fff
#define IAXXX_CNR0_APB_LPX_CLK_WMASK_VAL 0x00003fff
#define IAXXX_CNR0_APB_LPX_CLK_RESET_VAL 0x00000001

/* When set to 1, enable the HW or the respective OVRRD to take effect When set
to 0, cnr0_apb_lpx_clk is low Note that FW should avoid setting this bit to
 0. Once set to 0, it will require a reset to this register file to enable
again. */
#define IAXXX_CNR0_APB_LPX_CLK_IAXXX_CNR0_CGEN_MASK 0x00000001
#define IAXXX_CNR0_APB_LPX_CLK_IAXXX_CNR0_CGEN_RESET_VAL 0x1
#define IAXXX_CNR0_APB_LPX_CLK_IAXXX_CNR0_CGEN_POS 0
#define IAXXX_CNR0_APB_LPX_CLK_IAXXX_CNR0_CGEN_SIZE 1
#define IAXXX_CNR0_APB_LPX_CLK_IAXXX_CNR0_CGEN_DECL 0

/* For normal operation this shouldbe set to 0. This is a fail-safe bit to
 override HW based clock gating for cnr0_apb_lpx_clk. */
#define IAXXX_CNR0_APB_LPX_CLK_IAXXX_CNR0_OVRRD_MASK 0x00000002
#define IAXXX_CNR0_APB_LPX_CLK_IAXXX_CNR0_OVRRD_RESET_VAL 0x0
#define IAXXX_CNR0_APB_LPX_CLK_IAXXX_CNR0_OVRRD_POS 1
#define IAXXX_CNR0_APB_LPX_CLK_IAXXX_CNR0_OVRRD_SIZE 1
#define IAXXX_CNR0_APB_LPX_CLK_IAXXX_CNR0_OVRRD_DECL 1

/* When set to 1, enable the HW or the respective OVRRD to take effect When set
to 0, pcm_apb_clk_b[5:0] is low */
#define IAXXX_CNR0_APB_LPX_CLK_PCM_CGEN_MASK 0x000000fc
#define IAXXX_CNR0_APB_LPX_CLK_PCM_CGEN_RESET_VAL 0x0
#define IAXXX_CNR0_APB_LPX_CLK_PCM_CGEN_POS 2
#define IAXXX_CNR0_APB_LPX_CLK_PCM_CGEN_SIZE 6
#define IAXXX_CNR0_APB_LPX_CLK_PCM_CGEN_DECL (7:2)

/* For normal operation this should be set to 0. This is a fail-safe bit to
override HW based clock gating for pcm_apb_clk_b[5:0]. */
#define IAXXX_CNR0_APB_LPX_CLK_PCM_OVRRD_MASK 0x00003f00
#define IAXXX_CNR0_APB_LPX_CLK_PCM_OVRRD_RESET_VAL 0x0
#define IAXXX_CNR0_APB_LPX_CLK_PCM_OVRRD_POS 8
#define IAXXX_CNR0_APB_LPX_CLK_PCM_OVRRD_SIZE 6
#define IAXXX_CNR0_APB_LPX_CLK_PCM_OVRRD_DECL (13:8)

/*** IAXXX_CNR0_I2S_ENABLE (0x50040018) ***/
#define IAXXX_CNR0_I2S_ENABLE_ADDR (0x50040018)
#define IAXXX_CNR0_I2S_ENABLE_MASK_VAL 0x00007f7f
#define IAXXX_CNR0_I2S_ENABLE_RMASK_VAL 0x00007f7f
#define IAXXX_CNR0_I2S_ENABLE_WMASK_VAL 0x0000007f
#define IAXXX_CNR0_I2S_ENABLE_RESET_VAL 0x00000000

/* Each bit corresponds to a I2S generator, bit[0/1/2/3/4/5/6] to
* I2S0/1/2/3/4/5/6.
* 0: I2S generator is disabled.
* 1: I2S generator is enabled.
* Note: The I2S generators are not enabled or disabled until I2S_GEN(TRIGGER)
* is written to. */
#define IAXXX_CNR0_I2S_ENABLE_MASK_MASK 0x0000007f
#define IAXXX_CNR0_I2S_ENABLE_MASK_RESET_VAL 0x0
#define IAXXX_CNR0_I2S_ENABLE_MASK_POS 0
#define IAXXX_CNR0_I2S_ENABLE_MASK_SIZE 7
#define IAXXX_CNR0_I2S_ENABLE_MASK_DECL (6:0)

/* Each bit corresponds to a I2S generator, bit[0/1/2/3/4/5/6] to */
/* I2S0/1/2/3/4/5/6. */
/* 0: I2S generator is not enabled */
/* 1: I2S generator is enabled */
#define IAXXX_CNR0_I2S_ENABLE_STATUS_MASK 0x00007f00
#define IAXXX_CNR0_I2S_ENABLE_STATUS_RESET_VAL 0x0
#define IAXXX_CNR0_I2S_ENABLE_STATUS_POS 8
#define IAXXX_CNR0_I2S_ENABLE_STATUS_SIZE 7
#define IAXXX_CNR0_I2S_ENABLE_STATUS_DECL (14:8)

/*** IAXXX_CNR0_PCM_ACTIVE (0x5004001c) ***/
/* PCM Active register turns off or activates each PCM unit.  By default, all */
/* PCM units are off.  Supports read/write access. */
#define IAXXX_CNR0_PCM_ACTIVE_ADDR (0x5004001c)
#define IAXXX_CNR0_PCM_ACTIVE_MASK_VAL 0x0000003f
#define IAXXX_CNR0_PCM_ACTIVE_RMASK_VAL 0x0000003f
#define IAXXX_CNR0_PCM_ACTIVE_WMASK_VAL 0x0000003f
#define IAXXX_CNR0_PCM_ACTIVE_RESET_VAL 0x00000000

/* 0: Turn off PCM */
/* 1: Activate PCM */
#define IAXXX_CNR0_PCM_ACTIVE_PCM_0_ACT_MASK 0x00000001
#define IAXXX_CNR0_PCM_ACTIVE_PCM_0_ACT_RESET_VAL 0x0
#define IAXXX_CNR0_PCM_ACTIVE_PCM_0_ACT_POS 0
#define IAXXX_CNR0_PCM_ACTIVE_PCM_0_ACT_SIZE 1
#define IAXXX_CNR0_PCM_ACTIVE_PCM_0_ACT_DECL 0

/* 0: Turn off PCM */
/* 1: Activate PCM */
#define IAXXX_CNR0_PCM_ACTIVE_PCM_1_ACT_MASK 0x00000002
#define IAXXX_CNR0_PCM_ACTIVE_PCM_1_ACT_RESET_VAL 0x0
#define IAXXX_CNR0_PCM_ACTIVE_PCM_1_ACT_POS 1
#define IAXXX_CNR0_PCM_ACTIVE_PCM_1_ACT_SIZE 1
#define IAXXX_CNR0_PCM_ACTIVE_PCM_1_ACT_DECL 1

/* 0: Turn off PCM */
/* 1: Activate PCM */
#define IAXXX_CNR0_PCM_ACTIVE_PCM_2_ACT_MASK 0x00000004
#define IAXXX_CNR0_PCM_ACTIVE_PCM_2_ACT_RESET_VAL 0x0
#define IAXXX_CNR0_PCM_ACTIVE_PCM_2_ACT_POS 2
#define IAXXX_CNR0_PCM_ACTIVE_PCM_2_ACT_SIZE 1
#define IAXXX_CNR0_PCM_ACTIVE_PCM_2_ACT_DECL 2

/* 0: Turn off PCM */
/* 1: Activate PCM */
#define IAXXX_CNR0_PCM_ACTIVE_PCM_3_ACT_MASK 0x00000008
#define IAXXX_CNR0_PCM_ACTIVE_PCM_3_ACT_RESET_VAL 0x0
#define IAXXX_CNR0_PCM_ACTIVE_PCM_3_ACT_POS 3
#define IAXXX_CNR0_PCM_ACTIVE_PCM_3_ACT_SIZE 1
#define IAXXX_CNR0_PCM_ACTIVE_PCM_3_ACT_DECL 3

/* 0: Turn off PCM */
/* 1: Activate PCM */
#define IAXXX_CNR0_PCM_ACTIVE_PCM_4_ACT_MASK 0x00000010
#define IAXXX_CNR0_PCM_ACTIVE_PCM_4_ACT_RESET_VAL 0x0
#define IAXXX_CNR0_PCM_ACTIVE_PCM_4_ACT_POS 4
#define IAXXX_CNR0_PCM_ACTIVE_PCM_4_ACT_SIZE 1
#define IAXXX_CNR0_PCM_ACTIVE_PCM_4_ACT_DECL 4

/* 0: Turn off PCM */
/* 1: Activate PCM */
#define IAXXX_CNR0_PCM_ACTIVE_PCM_5_ACT_MASK 0x00000020
#define IAXXX_CNR0_PCM_ACTIVE_PCM_5_ACT_RESET_VAL 0x0
#define IAXXX_CNR0_PCM_ACTIVE_PCM_5_ACT_POS 5
#define IAXXX_CNR0_PCM_ACTIVE_PCM_5_ACT_SIZE 1
#define IAXXX_CNR0_PCM_ACTIVE_PCM_5_ACT_DECL 5

/*** IAXXX_CNR0_CIC_CTRL (0x50040020) ***/
/*This register has control registers for cic combo. */
/* The following legend applies to all CIC related registers below.
The IO_CNTRL */
/* registers for pins are used to select cic-type functions for those pins. */
/* - */
/* CLOCKS: */
/* CDC0/1_CLK are clocks available from chip pins CDC_MCLK and PORTD_CLK, */
/* respectively.*/

/* DMIC0/1_CLK are clocks available from chip pins PORTC_CLK and PORTB_CLK, */
/* respectively.  */
/* RX CIC data in (rx cic0 - rx cic7): */
/* - */
/* DATA INPUTS */
/* Data inputs are routed to RX CIC0 - RX CIC7. */
/* ADC0/1/2/3 are mono data pins from chip pins */
/* CDC_PCM0/CDC_PCM1/CDC_PCM1/PORTD_DI, respectively. */
/* They are routed to rx cic0 - rx cic3, in order, and again to rx cic4 - rx */
/* cic7, in order. */

/* DMIC0(L/R)/1(L/R)/2(L/R)/3(L/R) are stereo data pins from chip pins */
/* PORTC_FS/PORTC_DI/CDC_PCM1/PORTD_DI, respectively.In the pinlist, they are */
/* also referred to as functions: pdm0_di0, pdm0_di1, pdm1_di0 and pdm1_di1, */
/* respectively (each has L/R channels, since they are stereo). */
/* They are routed to rx cic0 - rx cic7, in order. */
/* - */
/* DATA OUTPUTS */
/* Data inputs are routed to TX CIC0 - TX CIC1. */

/* NOTE: SWRM and A400 are NOT available on this current chip. */
#define IAXXX_CNR0_CIC_CTRL_ADDR (0x50040020)
#define IAXXX_CNR0_CIC_CTRL_MASK_VAL 0x1ff301ff
#define IAXXX_CNR0_CIC_CTRL_RMASK_VAL 0x1ff301ff
#define IAXXX_CNR0_CIC_CTRL_WMASK_VAL 0x1ff301ff
#define IAXXX_CNR0_CIC_CTRL_RESET_VAL 0x00000000

/* Alternate clock select for RX CIC0.Works in concert with CODEC_0, MIC_0, */
/* S_0 and CLK_EN_0 fields in CIC_RX_RT_CTRL register. */
/* 0: Chooses the base clock (either CDC0_CLK, A400_0_CLK, DMIC0_CLK or */
/* SWRM0_CLK). */
/* 1: Chooses the alt clock  (either CDC1_CLK, A400_1_CLK, DMIC1_CLK or */
/* SWRM1_CLK). */
#define IAXXX_CNR0_CIC_CTRL_RX_AC_0_MASK 0x00000001
#define IAXXX_CNR0_CIC_CTRL_RX_AC_0_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_RX_AC_0_POS 0
#define IAXXX_CNR0_CIC_CTRL_RX_AC_0_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_RX_AC_0_DECL 0

/* Alternate clock select for RX CIC1. Works in concert with CODEC_1, MIC_1, */
/* S_1 and CLK_EN_1 fields in CIC_RX_RT_CTRL register. */
/* 0: Chooses the base clock (either CDC0_CLK, A400_0_CLK, DMIC0_CLK or */
/* SWRM0_CLK). */
/* 1: Chooses the alt clock  (either CDC1_CLK, A400_1_CLK, DMIC1_CLK or */
/* SWRM1_CLK). */
#define IAXXX_CNR0_CIC_CTRL_RX_AC_1_MASK 0x00000002
#define IAXXX_CNR0_CIC_CTRL_RX_AC_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_RX_AC_1_POS 1
#define IAXXX_CNR0_CIC_CTRL_RX_AC_1_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_RX_AC_1_DECL 1

/* Alternate clock select for RX CIC2.Works in concert with CODEC_2, MIC_2, */
/* S_2 and CLK_EN_2 fields in CIC_RX_RT_CTRL register. */
/* 0: Chooses the base clock (either CDC0_CLK, A400_0_CLK, DMIC0_CLK or */
/* SWRM0_CLK). */
/* 1: Chooses the alt clock  (either CDC1_CLK, A400_1_CLK, DMIC1_CLK or */
/* SWRM1_CLK). */
#define IAXXX_CNR0_CIC_CTRL_RX_AC_2_MASK 0x00000004
#define IAXXX_CNR0_CIC_CTRL_RX_AC_2_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_RX_AC_2_POS 2
#define IAXXX_CNR0_CIC_CTRL_RX_AC_2_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_RX_AC_2_DECL 2

/* Alternate clock select for RX CIC3. Works in concert with CODEC_3, MIC_3, */
/* S_3 and CLK_EN_3 fields in CIC_RX_RT_CTRL register. */
/* 0: Chooses the base clock (either CDC0_CLK, A400_0_CLK, DMIC0_CLK or */
/* SWRM0_CLK). */
/* 1: Chooses the alt clock  (either CDC1_CLK, A400_1_CLK, DMIC1_CLK or */
/* SWRM1_CLK). */
#define IAXXX_CNR0_CIC_CTRL_RX_AC_3_MASK 0x00000008
#define IAXXX_CNR0_CIC_CTRL_RX_AC_3_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_RX_AC_3_POS 3
#define IAXXX_CNR0_CIC_CTRL_RX_AC_3_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_RX_AC_3_DECL 3

/* Alternate clock select for RX CIC4. Works in concert with CODEC_4, MIC_4, */
/* S_4 and CLK_EN_4 fields in CIC_RX_RT_CTRL register. */
/* 0: Chooses the base clock (either CDC0_CLK, A400_0_CLK, DMIC0_CLK or */
/* SWRM0_CLK). */
/* 1: Chooses the alt clock  (either CDC1_CLK, A400_1_CLK, DMIC1_CLK or */
/* SWRM1_CLK). */
#define IAXXX_CNR0_CIC_CTRL_RX_AC_4_MASK 0x00000010
#define IAXXX_CNR0_CIC_CTRL_RX_AC_4_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_RX_AC_4_POS 4
#define IAXXX_CNR0_CIC_CTRL_RX_AC_4_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_RX_AC_4_DECL 4

/* Alternate clock select for RX CIC5. Works in concert with CODEC_5, MIC_5, */
/* S_5 and CLK_EN_5 fields in CIC_RX_RT_CTRL register. */
/* 0: Chooses the base clock (either CDC0_CLK, A400_0_CLK, DMIC0_CLK or */
/* SWRM0_CLK). */
/* 1: Chooses the alt clock  (either CDC1_CLK, A400_1_CLK, DMIC1_CLK or */
/* SWRM1_CLK). */
#define IAXXX_CNR0_CIC_CTRL_RX_AC_5_MASK 0x00000020
#define IAXXX_CNR0_CIC_CTRL_RX_AC_5_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_RX_AC_5_POS 5
#define IAXXX_CNR0_CIC_CTRL_RX_AC_5_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_RX_AC_5_DECL 5

/* Alternate clock select for RX CIC6. Works in concert with CODEC_6, MIC_6, */
/* S_6 and CLK_EN_6 fields in CIC_RX_RT_CTRL register. */
/* 0: Chooses the base clock (either CDC0_CLK, A400_0_CLK, DMIC0_CLK or */
/* SWRM0_CLK). */
/* 1: Chooses the alt clock  (either CDC1_CLK, A400_1_CLK, DMIC1_CLK or */
/* SWRM1_CLK). */
#define IAXXX_CNR0_CIC_CTRL_RX_AC_6_MASK 0x00000040
#define IAXXX_CNR0_CIC_CTRL_RX_AC_6_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_RX_AC_6_POS 6
#define IAXXX_CNR0_CIC_CTRL_RX_AC_6_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_RX_AC_6_DECL 6

/* Alternate clock select for RX CIC7. Works in concert with CODEC_7, MIC_7, */
/* S_7 and CLK_EN_7 fields in CIC_RX_RT_CTRL register. */
/* 0: Chooses the base clock (either CDC0_CLK, A400_0_CLK, DMIC0_CLK or */
/* SWRM0_CLK). */
/* 1: Chooses the alt clock  (either CDC1_CLK, A400_1_CLK, DMIC1_CLK or */
/* SWRM1_CLK). */
#define IAXXX_CNR0_CIC_CTRL_RX_AC_7_MASK 0x00000080
#define IAXXX_CNR0_CIC_CTRL_RX_AC_7_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_RX_AC_7_POS 7
#define IAXXX_CNR0_CIC_CTRL_RX_AC_7_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_RX_AC_7_DECL 7

/* Alternate clock select for TX CIC0 (AND CIC1 since they are paired).
Works in */
/* concert with CLK_EN_0 fields in CIC_TX_RT_CTRL register. */
/* 0: Chooses the base clock: DMIC0_CLK. */
/* 1: Chooses the alt clock:  DMIC1_CLK. */
/*We only need 1 bit because TX is only supported for dmic and a dmic channel */
/*is paired: both channels share the same clock.Therefore, whatever Alternate */
/* clock we choose for TX CIC0, it also applies to TX CIC1. */
#define IAXXX_CNR0_CIC_CTRL_TX_AC_0_1_MASK 0x00000100
#define IAXXX_CNR0_CIC_CTRL_TX_AC_0_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_TX_AC_0_1_POS 8
#define IAXXX_CNR0_CIC_CTRL_TX_AC_0_1_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_TX_AC_0_1_DECL 8

/* Divide cdc adc clock by two (affects ALL CDC clocks). */
#define IAXXX_CNR0_CIC_CTRL_DIV2_MASK 0x00010000
#define IAXXX_CNR0_CIC_CTRL_DIV2_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_DIV2_POS 16
#define IAXXX_CNR0_CIC_CTRL_DIV2_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_DIV2_DECL 16

/* Allows passthru from cdc adc 0 and cdc adc 1 input channels to dmic0_do */
/* output.  In order for this to work, the source for ADC0_CLK and DMIC0_CLK */
/* must be the same; i.e. programmed to use the same i2s master generator.In */
/* addition, the associated enables in ADC0_ENABLE (channels 0 and 1) register*/
/* and DMIC0_ENABLE (tx channels 0 and 1) register must be enabled. */
#define IAXXX_CNR0_CIC_CTRL_ADC_TO_DMIC_MASK 0x00020000
#define IAXXX_CNR0_CIC_CTRL_ADC_TO_DMIC_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_ADC_TO_DMIC_POS 17
#define IAXXX_CNR0_CIC_CTRL_ADC_TO_DMIC_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_ADC_TO_DMIC_DECL 17

/*If not set, input 1-bit data has polarity 1'b1->+1 and 1'b0->-1.If set, */
/* input 1-bit data has polarity 1'b1->-1 and 1'b0->+1. */
#define IAXXX_CNR0_CIC_CTRL_RX_POL_0_MASK 0x00100000
#define IAXXX_CNR0_CIC_CTRL_RX_POL_0_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_RX_POL_0_POS 20
#define IAXXX_CNR0_CIC_CTRL_RX_POL_0_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_RX_POL_0_DECL 20

/*If not set, input 1-bit data has polarity 1'b1->+1 and 1'b0->-1.If set, */
/* input 1-bit data has polarity 1'b1->-1 and 1'b0->+1. */
#define IAXXX_CNR0_CIC_CTRL_RX_POL_1_MASK 0x00200000
#define IAXXX_CNR0_CIC_CTRL_RX_POL_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_RX_POL_1_POS 21
#define IAXXX_CNR0_CIC_CTRL_RX_POL_1_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_RX_POL_1_DECL 21

/*If not set, input 1-bit data has polarity 1'b1->+1 and 1'b0->-1.If set, */
/* input 1-bit data has polarity 1'b1->-1 and 1'b0->+1. */
#define IAXXX_CNR0_CIC_CTRL_RX_POL_2_MASK 0x00400000
#define IAXXX_CNR0_CIC_CTRL_RX_POL_2_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_RX_POL_2_POS 22
#define IAXXX_CNR0_CIC_CTRL_RX_POL_2_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_RX_POL_2_DECL 22

/*If not set, input 1-bit data has polarity 1'b1->+1 and 1'b0->-1.If set, */
/* input 1-bit data has polarity 1'b1->-1 and 1'b0->+1. */
#define IAXXX_CNR0_CIC_CTRL_RX_POL_3_MASK 0x00800000
#define IAXXX_CNR0_CIC_CTRL_RX_POL_3_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_RX_POL_3_POS 23
#define IAXXX_CNR0_CIC_CTRL_RX_POL_3_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_RX_POL_3_DECL 23

/*If not set, input 1-bit data has polarity 1'b1->+1 and 1'b0->-1.If set, */
/* input 1-bit data has polarity 1'b1->-1 and 1'b0->+1. */
#define IAXXX_CNR0_CIC_CTRL_RX_POL_4_MASK 0x01000000
#define IAXXX_CNR0_CIC_CTRL_RX_POL_4_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_RX_POL_4_POS 24
#define IAXXX_CNR0_CIC_CTRL_RX_POL_4_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_RX_POL_4_DECL 24

/*If not set, input 1-bit data has polarity 1'b1->+1 and 1'b0->-1.If set, */
/* input 1-bit data has polarity 1'b1->-1 and 1'b0->+1. */
#define IAXXX_CNR0_CIC_CTRL_RX_POL_5_MASK 0x02000000
#define IAXXX_CNR0_CIC_CTRL_RX_POL_5_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_RX_POL_5_POS 25
#define IAXXX_CNR0_CIC_CTRL_RX_POL_5_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_RX_POL_5_DECL 25

/*If not set, input 1-bit data has polarity 1'b1->+1 and 1'b0->-1.If set, */
/* input 1-bit data has polarity 1'b1->-1 and 1'b0->+1. */
#define IAXXX_CNR0_CIC_CTRL_RX_POL_6_MASK 0x04000000
#define IAXXX_CNR0_CIC_CTRL_RX_POL_6_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_RX_POL_6_POS 26
#define IAXXX_CNR0_CIC_CTRL_RX_POL_6_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_RX_POL_6_DECL 26

/*If not set, input 1-bit data has polarity 1'b1->+1 and 1'b0->-1.If set, */
/* input 1-bit data has polarity 1'b1->-1 and 1'b0->+1. */
#define IAXXX_CNR0_CIC_CTRL_RX_POL_7_MASK 0x08000000
#define IAXXX_CNR0_CIC_CTRL_RX_POL_7_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_RX_POL_7_POS 27
#define IAXXX_CNR0_CIC_CTRL_RX_POL_7_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_RX_POL_7_DECL 27

/*If not set, input 1-bit data has polarity: 1'b1->+1 and 1'b0->-1.If set, */
/* output 1-bit data has polarity: 1'b1->-1 and 1'b0->+1.  */
/* We only need 1 bit because TX is only supported for dmic and a dmic channel*/
/* is paired.Therefore, whatever POL we choose for TX CIC0, it also applies  */
/* TX CIC1. */
#define IAXXX_CNR0_CIC_CTRL_TX_POL_0_1_MASK 0x10000000
#define IAXXX_CNR0_CIC_CTRL_TX_POL_0_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_CTRL_TX_POL_0_1_POS 28
#define IAXXX_CNR0_CIC_CTRL_TX_POL_0_1_SIZE 1
#define IAXXX_CNR0_CIC_CTRL_TX_POL_0_1_DECL 28

/*** IAXXX_CNR0_CIC_RX_RT_CTRL (0x50040024) ***/
/*This register has all the route control for RX CIC0 - CIC7.  Fields are */
/* CODEC_[X] (chooses which cdc interface to use), MIC_[X] (chooses which mic */
/* interface to use (SWR Master or DMIC), S_[X] (choose between the previous */
/* two), and CLK_EN_[X] (enables the similarly selected clock). This register */
/* should be quasi-static -> changing it is only allowed if the associated */
/* enable registers are disabled. */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_ADDR (0x50040024)
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MASK_VAL 0xffffffff
#define IAXXX_CNR0_CIC_RX_RT_CTRL_RMASK_VAL 0xffffffff
#define IAXXX_CNR0_CIC_RX_RT_CTRL_WMASK_VAL 0xffffffff
#define IAXXX_CNR0_CIC_RX_RT_CTRL_RESET_VAL 0x00000000

/* Codec Interface Select for RX CIC0 (Clock and Input) */
/* 0: A300 (CDC ADC 0 input) and CDC[0/1]_CLK */
/* 1: A400 (Port 0 input) and A400_[0/1]_CLK */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_0_MASK 0x00000001
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_0_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_0_POS 0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_0_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_0_DECL 0

/* Mic Interface Select for RX CIC0 (Clock and Input) */
/* 0: DMIC (Channel OL input) and DMIC[0/1]_CLK */
/* 1: Swire Master (Port 0 input) and SWRM[0/1]_CLK */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_0_MASK 0x00000002
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_0_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_0_POS 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_0_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_0_DECL 1

/* Interface Select for RX CIC0 */
/* 0: Codec Interface Select (Clock and Input) */
/* 1: Mic Interface Select (Clock and Input) */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_0_MASK 0x00000004
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_0_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_0_POS 2
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_0_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_0_DECL 2

/* Clock Enable for RX CIC0 */
/* 0: Clock Disabled  */
/* 1: Clock Enabled                     */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_0_MASK 0x00000008
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_0_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_0_POS 3
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_0_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_0_DECL 3

/* Codec Interface Select for RX CIC1 (Clock and Input) */
/* 0: A300 (ADC 1 input) and CDC[0/1]_CLK */
/* 1: A400 (Port 1 input) and A400_[0/1]_CLK */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_1_MASK 0x00000010
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_1_POS 4
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_1_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_1_DECL 4

/* Mic Interface Select for RX CIC1 (Clock and Input) */
/* 0: DMIC (Channel 0R input) and DMIC[0/1]_CLK */
/* 1: Swire Master (Port 1) and SWRM[0/1]_CLK */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_1_MASK 0x00000020
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_1_POS 5
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_1_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_1_DECL 5

/* Interface Select for RX CIC1 */
/* 0: Codec Interface Select (Clock and Input) */
/* 1: Mic Interface Select (Clock and Input) */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_1_MASK 0x00000040
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_1_POS 6
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_1_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_1_DECL 6

/* Clock Enable for RX CIC1 */
/* 0: Clock Disabled  */
/* 1: Clock Enabled               */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_1_MASK 0x00000080
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_1_POS 7
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_1_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_1_DECL 7

/* Codec Interface Select for RX CIC2 (Clock and Input) */
/* 0: A300 (ADC 2 input) and CDC[0/1]_CLK */
/* 1: A400 (Port 2 input) and A400_[0/1]_CLK */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_2_MASK 0x00000100
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_2_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_2_POS 8
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_2_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_2_DECL 8

/* Mic Interface Select for RX CIC2 (Clock and Input) */
/* 0: DMIC (Channel 1L input) and DMIC[0/1]_CLK */
/* 1: Swire Master (Port 2 input) and SWRM[0/1]_CLK */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_2_MASK 0x00000200
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_2_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_2_POS 9
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_2_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_2_DECL 9

/* Interface Select for RX CIC2 */
/* 0: Codec Interface Select (Clock and Input) */
/* 1: Mic Interface Select (Clock and Input) */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_2_MASK 0x00000400
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_2_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_2_POS 10
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_2_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_2_DECL 10

/* Clock Enable for RX CIC2 */
/* 0: Clock Disabled  */
/* 1: Clock Enabled                    */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_2_MASK 0x00000800
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_2_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_2_POS 11
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_2_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_2_DECL 11

/* Codec Interface Select for RX CIC3 (Clock and Input) */
/* 0: A300 (ADC 3 input) and CDC[0/1]_CLK */
/* 1: A400 (Port 3 input) and A400_[0/1]_CLK */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_3_MASK 0x00001000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_3_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_3_POS 12
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_3_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_3_DECL 12

/* Mic Interface Select for RX CIC3 (Clock and Input) */
/* 0: DMIC (Channel 1R input) and DMIC[0/1]_CLK */
/* 1: Swire Master (Port 3 input) and SWRM[0/1]_CLK */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_3_MASK 0x00002000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_3_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_3_POS 13
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_3_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_3_DECL 13

/* Interface Select for RX CIC3 */
/* 0: Codec Interface Select (Clock and Input) */
/* 1: Mic Interface Select (Clock and Input) */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_3_MASK 0x00004000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_3_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_3_POS 14
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_3_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_3_DECL 14

/* Clock Enable for RX CIC3 */
/* 0: Clock Disabled  */
/* 1: Clock Enabled                     */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_3_MASK 0x00008000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_3_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_3_POS 15
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_3_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_3_DECL 15

/* Codec Interface Select for RX CIC4 (Clock and Input) */
/* 0: NA */
/* 1: A400 (Port 4 input) and A400_[0/1]_CLK */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_4_MASK 0x00010000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_4_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_4_POS 16
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_4_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_4_DECL 16

/* Mic Interface Select for RX CIC4 (Clock and Input) */
/* 0: DMIC (Channel 2L input) and DMIC[0/1]_CLK */
/* 1: Swire Master (Port 4 input) and SWRM[0/1]_CLK */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_4_MASK 0x00020000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_4_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_4_POS 17
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_4_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_4_DECL 17

/* Interface Select for RX CIC4 */
/* 0: Codec Interface Select (Clock and Input) */
/* 1: Mic Interface Select (Clock and Input) */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_4_MASK 0x00040000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_4_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_4_POS 18
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_4_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_4_DECL 18

/* Clock Enable for RX CIC4 */
/* 0: Clock Disabled  */
/* 1: Clock Enabled                                  */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_4_MASK 0x00080000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_4_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_4_POS 19
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_4_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_4_DECL 19

/* Codec Interface Select for RX CIC5 (Clock and Input) */
/* 0: NA */
/* 1: A400 (Port 5 input) and A400_[0/1]_CLK */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_5_MASK 0x00100000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_5_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_5_POS 20
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_5_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_5_DECL 20

/* Mic Interface Select for RX CIC5 (Clock and Input) */
/* 0: DMIC (Channel 2R input) and DMIC[0/1]_CLK */
/* 1: Swire Master (Port 5 input) and SWRM[0/1]_CLK */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_5_MASK 0x00200000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_5_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_5_POS 21
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_5_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_5_DECL 21

/* Interface Select for RX CIC5 */
/* 0: Codec Interface Select (Clock and Input) */
/* 1: Mic Interface Select (Clock and Input) */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_5_MASK 0x00400000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_5_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_5_POS 22
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_5_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_5_DECL 22

/* Clock Enable for RX CIC5 */
/* 0: Clock Disabled  */
/* 1: Clock Enabled             */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_5_MASK 0x00800000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_5_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_5_POS 23
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_5_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_5_DECL 23

/* Codec Interface Select for RX CIC6 (Clock and Input) */
/* 0: NA */
/* 1: A400 (Port 6 input) and A400_[0/1]_CLK */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_6_MASK 0x01000000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_6_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_6_POS 24
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_6_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_6_DECL 24

/* Mic Interface Select for RX CIC6 (Clock and Input) */
/* 0: DMIC (Channel 3L input) and DMIC[0/1]_CLK */
/* 1: Swire Master (Port 6 input) and SWRM[0/1]_CLK */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_6_MASK 0x02000000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_6_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_6_POS 25
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_6_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_6_DECL 25

/* Interface Select for RX CIC6 */
/* 0: Codec Interface Select (Clock and Input) */
/* 1: Mic Interface Select (Clock and Input) */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_6_MASK 0x04000000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_6_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_6_POS 26
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_6_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_6_DECL 26

/* Clock Enable for RX CIC6 */
/* 0: Clock Disabled  */
/* 1: Clock Enabled                                   */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_6_MASK 0x08000000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_6_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_6_POS 27
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_6_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_6_DECL 27

/* Codec Interface Select for RX CIC7 (Clock and Input) */
/* 0: NA */
/* 1: A400 (Port 7 input) and A400_[0/1]_CLK */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_7_MASK 0x10000000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_7_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_7_POS 28
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_7_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CODEC_7_DECL 28

/* Mic Interface Select for RX CIC7 (Clock and Input) */
/* 0: DMIC (Channel 3R input) and DMIC[0/1]_CLK */
/* 1: Swire Master (Port 7 input) and SWRM[0/1]_CLK */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_7_MASK 0x20000000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_7_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_7_POS 29
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_7_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_MIC_7_DECL 29

/* Interface Select for RX CIC7 */
/* 0: Codec Interface Select (Clock and Input) */
/* 1: Mic Interface Select (Clock and Input) */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_7_MASK 0x40000000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_7_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_7_POS 30
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_7_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_S_7_DECL 30

/* Clock Enable for RX CIC7 */
/* 0: Clock Disabled  */
/* 1: Clock Enabled  */
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_7_MASK 0x80000000
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_7_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_7_POS 31
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_7_SIZE 1
#define IAXXX_CNR0_CIC_RX_RT_CTRL_CLK_EN_7_DECL 31

/*** IAXXX_CNR0_CIC_TX_RT_CTRL (0x50040028) ***/
/*This register has all the route control for TX CIC0 - CIC1.  Fields */
/* CLK_EN_[X] (enables the similarly selected clock). This register should be */
/* quasi-static -> changing it is only allowed if the associated enable */
/* registers are disabled. */
#define IAXXX_CNR0_CIC_TX_RT_CTRL_ADDR (0x50040028)
#define IAXXX_CNR0_CIC_TX_RT_CTRL_MASK_VAL 0x00000088
#define IAXXX_CNR0_CIC_TX_RT_CTRL_RMASK_VAL 0x00000088
#define IAXXX_CNR0_CIC_TX_RT_CTRL_WMASK_VAL 0x00000088
#define IAXXX_CNR0_CIC_TX_RT_CTRL_RESET_VAL 0x00000000

/* Clock Enable for TX CIC0 */
/* 0: Clock Disabled  */
/* 1: Clock Enabled                     */
#define IAXXX_CNR0_CIC_TX_RT_CTRL_CLK_EN_0_MASK 0x00000008
#define IAXXX_CNR0_CIC_TX_RT_CTRL_CLK_EN_0_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_TX_RT_CTRL_CLK_EN_0_POS 3
#define IAXXX_CNR0_CIC_TX_RT_CTRL_CLK_EN_0_SIZE 1
#define IAXXX_CNR0_CIC_TX_RT_CTRL_CLK_EN_0_DECL 3

/* Clock Enable for TX CIC1 */
/* 0: Clock Disabled  */
/* 1: Clock Enabled                     */
#define IAXXX_CNR0_CIC_TX_RT_CTRL_CLK_EN_1_MASK 0x00000080
#define IAXXX_CNR0_CIC_TX_RT_CTRL_CLK_EN_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_TX_RT_CTRL_CLK_EN_1_POS 7
#define IAXXX_CNR0_CIC_TX_RT_CTRL_CLK_EN_1_SIZE 1
#define IAXXX_CNR0_CIC_TX_RT_CTRL_CLK_EN_1_DECL 7

/*** IAXXX_CNR0_CIC_RX_0_1 (0x5004002c) ***/
/*This register has the control state for CIC RX 0 and CIC RX 1. */
#define IAXXX_CNR0_CIC_RX_0_1_ADDR (0x5004002c)
#define IAXXX_CNR0_CIC_RX_0_1_MASK_VAL 0x00ffdffd
#define IAXXX_CNR0_CIC_RX_0_1_RMASK_VAL 0x00ffdffd
#define IAXXX_CNR0_CIC_RX_0_1_WMASK_VAL 0x00ffdffd
#define IAXXX_CNR0_CIC_RX_0_1_RESET_VAL 0x00000000

/* Clear state value for CIC RX 0. */
#define IAXXX_CNR0_CIC_RX_0_1_CLR_0_MASK 0x00000001
#define IAXXX_CNR0_CIC_RX_0_1_CLR_0_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_0_1_CLR_0_POS 0
#define IAXXX_CNR0_CIC_RX_0_1_CLR_0_SIZE 1
#define IAXXX_CNR0_CIC_RX_0_1_CLR_0_DECL 0

/* Left shift for CIC RX 0 ->Shift CIC Output left by LSHIFT bits */
#define IAXXX_CNR0_CIC_RX_0_1_LSHIFT_0_MASK 0x0000003c
#define IAXXX_CNR0_CIC_RX_0_1_LSHIFT_0_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_0_1_LSHIFT_0_POS 2
#define IAXXX_CNR0_CIC_RX_0_1_LSHIFT_0_SIZE 4
#define IAXXX_CNR0_CIC_RX_0_1_LSHIFT_0_DECL (5:2)

/* Decimation ratio for CIC RX 0 -> Output1 sample for every M+1 input samples*/
#define IAXXX_CNR0_CIC_RX_0_1_M_0_MASK 0x000007c0
#define IAXXX_CNR0_CIC_RX_0_1_M_0_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_0_1_M_0_POS 6
#define IAXXX_CNR0_CIC_RX_0_1_M_0_SIZE 5
#define IAXXX_CNR0_CIC_RX_0_1_M_0_DECL (10:6)

/* 0: Order of CIC filter for CIC RX 0 is 3.  */
/* 1: Order of CIC filter for CIC RX 0 is 4.               */
#define IAXXX_CNR0_CIC_RX_0_1_ORDER_0_MASK 0x00000800
#define IAXXX_CNR0_CIC_RX_0_1_ORDER_0_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_0_1_ORDER_0_POS 11
#define IAXXX_CNR0_CIC_RX_0_1_ORDER_0_SIZE 1
#define IAXXX_CNR0_CIC_RX_0_1_ORDER_0_DECL 11

/* Clear state value for CIC RX 1. */
#define IAXXX_CNR0_CIC_RX_0_1_CLR_1_MASK 0x00001000
#define IAXXX_CNR0_CIC_RX_0_1_CLR_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_0_1_CLR_1_POS 12
#define IAXXX_CNR0_CIC_RX_0_1_CLR_1_SIZE 1
#define IAXXX_CNR0_CIC_RX_0_1_CLR_1_DECL 12

/* Left shift for CIC RX 1 ->Shift CIC Output left by LSHIFT bits */
#define IAXXX_CNR0_CIC_RX_0_1_LSHIFT_1_MASK 0x0003c000
#define IAXXX_CNR0_CIC_RX_0_1_LSHIFT_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_0_1_LSHIFT_1_POS 14
#define IAXXX_CNR0_CIC_RX_0_1_LSHIFT_1_SIZE 4
#define IAXXX_CNR0_CIC_RX_0_1_LSHIFT_1_DECL (17:14)

/* Decimation ratio for CIC RX 1 -> Output1 sample for every M+1 input samples*/
#define IAXXX_CNR0_CIC_RX_0_1_M_1_MASK 0x007c0000
#define IAXXX_CNR0_CIC_RX_0_1_M_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_0_1_M_1_POS 18
#define IAXXX_CNR0_CIC_RX_0_1_M_1_SIZE 5
#define IAXXX_CNR0_CIC_RX_0_1_M_1_DECL (22:18)

/* 0: Order of CIC filter for CIC RX 1 is 3.  */
/* 1: Order of CIC filter for CIC RX 1 is 4.                   */
#define IAXXX_CNR0_CIC_RX_0_1_ORDER_1_MASK 0x00800000
#define IAXXX_CNR0_CIC_RX_0_1_ORDER_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_0_1_ORDER_1_POS 23
#define IAXXX_CNR0_CIC_RX_0_1_ORDER_1_SIZE 1
#define IAXXX_CNR0_CIC_RX_0_1_ORDER_1_DECL 23

/*** IAXXX_CNR0_CIC_RX_2_3 (0x50040030) ***/
/*This register has the control state for CIC RX 2 and CIC RX 3. */
#define IAXXX_CNR0_CIC_RX_2_3_ADDR (0x50040030)
#define IAXXX_CNR0_CIC_RX_2_3_MASK_VAL 0x00ffdffd
#define IAXXX_CNR0_CIC_RX_2_3_RMASK_VAL 0x00ffdffd
#define IAXXX_CNR0_CIC_RX_2_3_WMASK_VAL 0x00ffdffd
#define IAXXX_CNR0_CIC_RX_2_3_RESET_VAL 0x00000000

/* Clear state value for CIC RX 2. */
#define IAXXX_CNR0_CIC_RX_2_3_CLR_2_MASK 0x00000001
#define IAXXX_CNR0_CIC_RX_2_3_CLR_2_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_2_3_CLR_2_POS 0
#define IAXXX_CNR0_CIC_RX_2_3_CLR_2_SIZE 1
#define IAXXX_CNR0_CIC_RX_2_3_CLR_2_DECL 0

/* Left shift for CIC RX 2 ->Shift CIC Output left by LSHIFT bits */
#define IAXXX_CNR0_CIC_RX_2_3_LSHIFT_2_MASK 0x0000003c
#define IAXXX_CNR0_CIC_RX_2_3_LSHIFT_2_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_2_3_LSHIFT_2_POS 2
#define IAXXX_CNR0_CIC_RX_2_3_LSHIFT_2_SIZE 4
#define IAXXX_CNR0_CIC_RX_2_3_LSHIFT_2_DECL (5:2)

/* Decimation ratio for CIC RX 2 -> Output1 sample for every M+1 input samples*/
#define IAXXX_CNR0_CIC_RX_2_3_M_2_MASK 0x000007c0
#define IAXXX_CNR0_CIC_RX_2_3_M_2_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_2_3_M_2_POS 6
#define IAXXX_CNR0_CIC_RX_2_3_M_2_SIZE 5
#define IAXXX_CNR0_CIC_RX_2_3_M_2_DECL (10:6)

/* 0: Order of CIC filter for CIC RX 2 is 3.  */
/* 1: Order of CIC filter for CIC RX 2 is 4.               */
#define IAXXX_CNR0_CIC_RX_2_3_ORDER_2_MASK 0x00000800
#define IAXXX_CNR0_CIC_RX_2_3_ORDER_2_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_2_3_ORDER_2_POS 11
#define IAXXX_CNR0_CIC_RX_2_3_ORDER_2_SIZE 1
#define IAXXX_CNR0_CIC_RX_2_3_ORDER_2_DECL 11

/* Clear state value for CIC RX 3. */
#define IAXXX_CNR0_CIC_RX_2_3_CLR_3_MASK 0x00001000
#define IAXXX_CNR0_CIC_RX_2_3_CLR_3_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_2_3_CLR_3_POS 12
#define IAXXX_CNR0_CIC_RX_2_3_CLR_3_SIZE 1
#define IAXXX_CNR0_CIC_RX_2_3_CLR_3_DECL 12

/* Left shift for CIC RX 3 ->Shift CIC Output left by LSHIFT bits */
#define IAXXX_CNR0_CIC_RX_2_3_LSHIFT_3_MASK 0x0003c000
#define IAXXX_CNR0_CIC_RX_2_3_LSHIFT_3_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_2_3_LSHIFT_3_POS 14
#define IAXXX_CNR0_CIC_RX_2_3_LSHIFT_3_SIZE 4
#define IAXXX_CNR0_CIC_RX_2_3_LSHIFT_3_DECL (17:14)

/* Decimation ratio for CIC RX 3 -> Output1 sample for every M+1 input samples*/
#define IAXXX_CNR0_CIC_RX_2_3_M_3_MASK 0x007c0000
#define IAXXX_CNR0_CIC_RX_2_3_M_3_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_2_3_M_3_POS 18
#define IAXXX_CNR0_CIC_RX_2_3_M_3_SIZE 5
#define IAXXX_CNR0_CIC_RX_2_3_M_3_DECL (22:18)

/* 0: Order of CIC filter for CIC RX 3 is 3.  */
/* 1: Order of CIC filter for CIC RX 3 is 4.                   */
#define IAXXX_CNR0_CIC_RX_2_3_ORDER_3_MASK 0x00800000
#define IAXXX_CNR0_CIC_RX_2_3_ORDER_3_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_2_3_ORDER_3_POS 23
#define IAXXX_CNR0_CIC_RX_2_3_ORDER_3_SIZE 1
#define IAXXX_CNR0_CIC_RX_2_3_ORDER_3_DECL 23

/*** IAXXX_CNR0_CIC_RX_4_5 (0x50040034) ***/
/*This register has the control state for CIC RX 4 and CIC RX 5. */
#define IAXXX_CNR0_CIC_RX_4_5_ADDR (0x50040034)
#define IAXXX_CNR0_CIC_RX_4_5_MASK_VAL 0x00ffdffd
#define IAXXX_CNR0_CIC_RX_4_5_RMASK_VAL 0x00ffdffd
#define IAXXX_CNR0_CIC_RX_4_5_WMASK_VAL 0x00ffdffd
#define IAXXX_CNR0_CIC_RX_4_5_RESET_VAL 0x00000000

/* Clear state value for CIC RX 4. */
#define IAXXX_CNR0_CIC_RX_4_5_CLR_4_MASK 0x00000001
#define IAXXX_CNR0_CIC_RX_4_5_CLR_4_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_4_5_CLR_4_POS 0
#define IAXXX_CNR0_CIC_RX_4_5_CLR_4_SIZE 1
#define IAXXX_CNR0_CIC_RX_4_5_CLR_4_DECL 0

/* Left shift for CIC RX 4 ->Shift CIC Output left by LSHIFT bits */
#define IAXXX_CNR0_CIC_RX_4_5_LSHIFT_4_MASK 0x0000003c
#define IAXXX_CNR0_CIC_RX_4_5_LSHIFT_4_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_4_5_LSHIFT_4_POS 2
#define IAXXX_CNR0_CIC_RX_4_5_LSHIFT_4_SIZE 4
#define IAXXX_CNR0_CIC_RX_4_5_LSHIFT_4_DECL (5:2)

/* Decimation ratio for CIC RX 4 -> Output1 sample for every M+1 input samples*/
#define IAXXX_CNR0_CIC_RX_4_5_M_4_MASK 0x000007c0
#define IAXXX_CNR0_CIC_RX_4_5_M_4_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_4_5_M_4_POS 6
#define IAXXX_CNR0_CIC_RX_4_5_M_4_SIZE 5
#define IAXXX_CNR0_CIC_RX_4_5_M_4_DECL (10:6)

/* 0: Order of CIC filter for CIC RX 4 is 3.  */
/* 1: Order of CIC filter for CIC RX 4 is 4.               */
#define IAXXX_CNR0_CIC_RX_4_5_ORDER_4_MASK 0x00000800
#define IAXXX_CNR0_CIC_RX_4_5_ORDER_4_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_4_5_ORDER_4_POS 11
#define IAXXX_CNR0_CIC_RX_4_5_ORDER_4_SIZE 1
#define IAXXX_CNR0_CIC_RX_4_5_ORDER_4_DECL 11

/* Clear state value for CIC RX 5. */
#define IAXXX_CNR0_CIC_RX_4_5_CLR_5_MASK 0x00001000
#define IAXXX_CNR0_CIC_RX_4_5_CLR_5_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_4_5_CLR_5_POS 12
#define IAXXX_CNR0_CIC_RX_4_5_CLR_5_SIZE 1
#define IAXXX_CNR0_CIC_RX_4_5_CLR_5_DECL 12

/* Left shift for CIC RX 5 ->Shift CIC Output left by LSHIFT bits */
#define IAXXX_CNR0_CIC_RX_4_5_LSHIFT_5_MASK 0x0003c000
#define IAXXX_CNR0_CIC_RX_4_5_LSHIFT_5_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_4_5_LSHIFT_5_POS 14
#define IAXXX_CNR0_CIC_RX_4_5_LSHIFT_5_SIZE 4
#define IAXXX_CNR0_CIC_RX_4_5_LSHIFT_5_DECL (17:14)

/* Decimation ratio for CIC RX 5 -> Output1 sample for every M+1 input samples*/
#define IAXXX_CNR0_CIC_RX_4_5_M_5_MASK 0x007c0000
#define IAXXX_CNR0_CIC_RX_4_5_M_5_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_4_5_M_5_POS 18
#define IAXXX_CNR0_CIC_RX_4_5_M_5_SIZE 5
#define IAXXX_CNR0_CIC_RX_4_5_M_5_DECL (22:18)

/* 0: Order of CIC filter for CIC RX 5 is 3.  */
/* 1: Order of CIC filter for CIC RX 5 is 4.                   */
#define IAXXX_CNR0_CIC_RX_4_5_ORDER_5_MASK 0x00800000
#define IAXXX_CNR0_CIC_RX_4_5_ORDER_5_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_4_5_ORDER_5_POS 23
#define IAXXX_CNR0_CIC_RX_4_5_ORDER_5_SIZE 1
#define IAXXX_CNR0_CIC_RX_4_5_ORDER_5_DECL 23

/*** IAXXX_CNR0_CIC_RX_6_7 (0x50040038) ***/
/*This register has the control state for CIC RX 6 and CIC RX 7. */
#define IAXXX_CNR0_CIC_RX_6_7_ADDR (0x50040038)
#define IAXXX_CNR0_CIC_RX_6_7_MASK_VAL 0x00ffdffd
#define IAXXX_CNR0_CIC_RX_6_7_RMASK_VAL 0x00ffdffd
#define IAXXX_CNR0_CIC_RX_6_7_WMASK_VAL 0x00ffdffd
#define IAXXX_CNR0_CIC_RX_6_7_RESET_VAL 0x00000000

/* Clear state value for CIC RX 6. */
#define IAXXX_CNR0_CIC_RX_6_7_CLR_6_MASK 0x00000001
#define IAXXX_CNR0_CIC_RX_6_7_CLR_6_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_6_7_CLR_6_POS 0
#define IAXXX_CNR0_CIC_RX_6_7_CLR_6_SIZE 1
#define IAXXX_CNR0_CIC_RX_6_7_CLR_6_DECL 0

/* Left shift for CIC RX 6 ->Shift CIC Output left by LSHIFT bits */
#define IAXXX_CNR0_CIC_RX_6_7_LSHIFT_6_MASK 0x0000003c
#define IAXXX_CNR0_CIC_RX_6_7_LSHIFT_6_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_6_7_LSHIFT_6_POS 2
#define IAXXX_CNR0_CIC_RX_6_7_LSHIFT_6_SIZE 4
#define IAXXX_CNR0_CIC_RX_6_7_LSHIFT_6_DECL (5:2)

/* Decimation ratio for CIC RX 6 -> Output1 sample for every M+1 input samples*/
#define IAXXX_CNR0_CIC_RX_6_7_M_6_MASK 0x000007c0
#define IAXXX_CNR0_CIC_RX_6_7_M_6_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_6_7_M_6_POS 6
#define IAXXX_CNR0_CIC_RX_6_7_M_6_SIZE 5
#define IAXXX_CNR0_CIC_RX_6_7_M_6_DECL (10:6)

/* 0: Order of CIC filter for CIC RX 6 is 3.  */
/* 1: Order of CIC filter for CIC RX 6 is 4.               */
#define IAXXX_CNR0_CIC_RX_6_7_ORDER_6_MASK 0x00000800
#define IAXXX_CNR0_CIC_RX_6_7_ORDER_6_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_6_7_ORDER_6_POS 11
#define IAXXX_CNR0_CIC_RX_6_7_ORDER_6_SIZE 1
#define IAXXX_CNR0_CIC_RX_6_7_ORDER_6_DECL 11

/* Clear state value for CIC RX 5. */
#define IAXXX_CNR0_CIC_RX_6_7_CLR_7_MASK 0x00001000
#define IAXXX_CNR0_CIC_RX_6_7_CLR_7_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_6_7_CLR_7_POS 12
#define IAXXX_CNR0_CIC_RX_6_7_CLR_7_SIZE 1
#define IAXXX_CNR0_CIC_RX_6_7_CLR_7_DECL 12

/* Left shift for CIC RX 7 ->Shift CIC Output left by LSHIFT bits */
#define IAXXX_CNR0_CIC_RX_6_7_LSHIFT_7_MASK 0x0003c000
#define IAXXX_CNR0_CIC_RX_6_7_LSHIFT_7_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_6_7_LSHIFT_7_POS 14
#define IAXXX_CNR0_CIC_RX_6_7_LSHIFT_7_SIZE 4
#define IAXXX_CNR0_CIC_RX_6_7_LSHIFT_7_DECL (17:14)

/* Decimation ratio for CIC RX 7 -> Output1 sample for every M+1 input samples*/
#define IAXXX_CNR0_CIC_RX_6_7_M_7_MASK 0x007c0000
#define IAXXX_CNR0_CIC_RX_6_7_M_7_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_6_7_M_7_POS 18
#define IAXXX_CNR0_CIC_RX_6_7_M_7_SIZE 5
#define IAXXX_CNR0_CIC_RX_6_7_M_7_DECL (22:18)

/* 0: Order of CIC filter for CIC RX 7 is 3.  */
/* 1: Order of CIC filter for CIC RX 7 is 4.                   */
#define IAXXX_CNR0_CIC_RX_6_7_ORDER_7_MASK 0x00800000
#define IAXXX_CNR0_CIC_RX_6_7_ORDER_7_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_6_7_ORDER_7_POS 23
#define IAXXX_CNR0_CIC_RX_6_7_ORDER_7_SIZE 1
#define IAXXX_CNR0_CIC_RX_6_7_ORDER_7_DECL 23

/*** IAXXX_CNR0_CIC_TX_0_1 (0x5004003c) ***/
/*This register has the control state for CIC TX 0 and CIC TX 1. */
#define IAXXX_CNR0_CIC_TX_0_1_ADDR (0x5004003c)
#define IAXXX_CNR0_CIC_TX_0_1_MASK_VAL 0x0003ffff
#define IAXXX_CNR0_CIC_TX_0_1_RMASK_VAL 0x0003ffff
#define IAXXX_CNR0_CIC_TX_0_1_WMASK_VAL 0x0003ffff
#define IAXXX_CNR0_CIC_TX_0_1_RESET_VAL 0x00000000

/* Clear state value for CIC TX 0. */
#define IAXXX_CNR0_CIC_TX_0_1_CLR_0_MASK 0x00000001
#define IAXXX_CNR0_CIC_TX_0_1_CLR_0_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_TX_0_1_CLR_0_POS 0
#define IAXXX_CNR0_CIC_TX_0_1_CLR_0_SIZE 1
#define IAXXX_CNR0_CIC_TX_0_1_CLR_0_DECL 0

/* Clear state value for CIC TX 1. */
#define IAXXX_CNR0_CIC_TX_0_1_CLR_1_MASK 0x00000002
#define IAXXX_CNR0_CIC_TX_0_1_CLR_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_TX_0_1_CLR_1_POS 1
#define IAXXX_CNR0_CIC_TX_0_1_CLR_1_SIZE 1
#define IAXXX_CNR0_CIC_TX_0_1_CLR_1_DECL 1

/* 0: Order of CIC filter for CIC TX 0 and TX 1 is 3.  */
/* 1: Order of CIC filter for CIC TX 0 and TX 1 is 4.        */
#define IAXXX_CNR0_CIC_TX_0_1_ORDER_0_1_MASK 0x00000004
#define IAXXX_CNR0_CIC_TX_0_1_ORDER_0_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_TX_0_1_ORDER_0_1_POS 2
#define IAXXX_CNR0_CIC_TX_0_1_ORDER_0_1_SIZE 1
#define IAXXX_CNR0_CIC_TX_0_1_ORDER_0_1_DECL 2

/* 00: Output enable is 0.  */
/* 01: NOT SUPPORTED!.  */
/* 10: NOT SUPPORTED!.  */
/* 11: Output enable is 1.  */
#define IAXXX_CNR0_CIC_TX_0_1_PHASE_0_1_MASK 0x00000018
#define IAXXX_CNR0_CIC_TX_0_1_PHASE_0_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_TX_0_1_PHASE_0_1_POS 3
#define IAXXX_CNR0_CIC_TX_0_1_PHASE_0_1_SIZE 2
#define IAXXX_CNR0_CIC_TX_0_1_PHASE_0_1_DECL (4:3)

/* Interpolation ratio for CIC TX 0 and TX 1 -> Output L+1 sample for every */
/* input sample */
#define IAXXX_CNR0_CIC_TX_0_1_L_0_1_MASK 0x000003e0
#define IAXXX_CNR0_CIC_TX_0_1_L_0_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_TX_0_1_L_0_1_POS 5
#define IAXXX_CNR0_CIC_TX_0_1_L_0_1_SIZE 5
#define IAXXX_CNR0_CIC_TX_0_1_L_0_1_DECL (9:5)

/* Left shift for CIC TX 0 and TX 1 ->Shift CIC Output left by LSHIFT bits */
#define IAXXX_CNR0_CIC_TX_0_1_LSHIFT_0_1_MASK 0x00003c00
#define IAXXX_CNR0_CIC_TX_0_1_LSHIFT_0_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_TX_0_1_LSHIFT_0_1_POS 10
#define IAXXX_CNR0_CIC_TX_0_1_LSHIFT_0_1_SIZE 4
#define IAXXX_CNR0_CIC_TX_0_1_LSHIFT_0_1_DECL (13:10)

/* Set 1 to enable Dither on CIC TX0 and TX1 output, or set to 0 if no dither */
/* is to be used.  This dither is added at the SDM stage of the filter chain. */
#define IAXXX_CNR0_CIC_TX_0_1_D_0_1_MASK 0x00004000
#define IAXXX_CNR0_CIC_TX_0_1_D_0_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_TX_0_1_D_0_1_POS 14
#define IAXXX_CNR0_CIC_TX_0_1_D_0_1_SIZE 1
#define IAXXX_CNR0_CIC_TX_0_1_D_0_1_DECL 14

/* Dither Scale on CIC TX0 and TX1 output. */
#define IAXXX_CNR0_CIC_TX_0_1_DSCALE_0_1_MASK 0x00018000
#define IAXXX_CNR0_CIC_TX_0_1_DSCALE_0_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_TX_0_1_DSCALE_0_1_POS 15
#define IAXXX_CNR0_CIC_TX_0_1_DSCALE_0_1_SIZE 2
#define IAXXX_CNR0_CIC_TX_0_1_DSCALE_0_1_DECL (16:15)

/* 0: TX0 data on both clock phases.  */
/* 1: TX0 data on low clock phase, TX1 data on high phase */

#define IAXXX_CNR0_CIC_TX_0_1_DSEL_0_1_MASK 0x00020000
#define IAXXX_CNR0_CIC_TX_0_1_DSEL_0_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_TX_0_1_DSEL_0_1_POS 17
#define IAXXX_CNR0_CIC_TX_0_1_DSEL_0_1_SIZE 1
#define IAXXX_CNR0_CIC_TX_0_1_DSEL_0_1_DECL 17

/*** IAXXX_CNR0_CIC_ADTL_CTRL (0x50040040) ***/
/*This register has additional control state for all the cics. */
#define IAXXX_CNR0_CIC_ADTL_CTRL_ADDR (0x50040040)
#define IAXXX_CNR0_CIC_ADTL_CTRL_MASK_VAL 0x0003ffff
#define IAXXX_CNR0_CIC_ADTL_CTRL_RMASK_VAL 0x0003ffff
#define IAXXX_CNR0_CIC_ADTL_CTRL_WMASK_VAL 0x0003ffff
#define IAXXX_CNR0_CIC_ADTL_CTRL_RESET_VAL 0x0002aaaa

/* Scale CIC_RX_0 before HB by 64/81 . */
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_0_MASK 0x00000001
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_0_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_0_POS 0
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_0_SIZE 1
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_0_DECL 0

/* Debug mode for CIC_RX_0.If set, all parameters need user programming (this */
/*is equivalent to previous chip setup).If not set, we override order, lshift */
/* and G_RX_0 by setting based on the decimation ratio. */
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_0_MASK 0x00000002
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_0_RESET_VAL 0x1
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_0_POS 1
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_0_SIZE 1
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_0_DECL 1

/* Scale CIC_RX_0 before HB by 64/81 . */
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_1_MASK 0x00000004
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_1_POS 2
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_1_SIZE 1
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_1_DECL 2

/* Debug mode for CIC_RX_0.If set, all parameters need user programming (this */
/*is equivalent to previous chip setup).If not set, we override order, lshift */
/* and G_RX_1 by setting based on the decimation ratio. */
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_1_MASK 0x00000008
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_1_RESET_VAL 0x1
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_1_POS 3
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_1_SIZE 1
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_1_DECL 3

/* Scale CIC_RX_0 before HB by 64/81 . */
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_2_MASK 0x00000010
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_2_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_2_POS 4
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_2_SIZE 1
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_2_DECL 4

/* Debug mode for CIC_RX_0.If set, all parameters need user programming (this */
/*is equivalent to previous chip setup).If not set, we override order, lshift */
/* and G_RX_2 by setting based on the decimation ratio. */
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_2_MASK 0x00000020
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_2_RESET_VAL 0x1
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_2_POS 5
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_2_SIZE 1
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_2_DECL 5

/* Scale CIC_RX_0 before HB by 64/81 . */
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_3_MASK 0x00000040
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_3_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_3_POS 6
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_3_SIZE 1
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_3_DECL 6

/* Debug mode for CIC_RX_0.If set, all parameters need user programming (this */
/*is equivalent to previous chip setup).If not set, we override order, lshift */
/* and G_RX_3 by setting based on the decimation ratio. */
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_3_MASK 0x00000080
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_3_RESET_VAL 0x1
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_3_POS 7
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_3_SIZE 1
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_3_DECL 7

/* Scale CIC_RX_0 before HB by 64/81 . */
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_4_MASK 0x00000100
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_4_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_4_POS 8
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_4_SIZE 1
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_4_DECL 8

/* Debug mode for CIC_RX_0.If set, all parameters need user programming (this */
/*is equivalent to previous chip setup).If not set, we override order, lshift */
/* and G_RX_4 by setting based on the decimation ratio. */
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_4_MASK 0x00000200
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_4_RESET_VAL 0x1
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_4_POS 9
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_4_SIZE 1
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_4_DECL 9

/* Scale CIC_RX_0 before HB by 64/81 . */
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_5_MASK 0x00000400
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_5_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_5_POS 10
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_5_SIZE 1
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_5_DECL 10

/* Debug mode for CIC_RX_0.If set, all parameters need user programming (this */
/*is equivalent to previous chip setup).If not set, we override order, lshift */
/* and G_RX_5 by setting based on the decimation ratio. */
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_5_MASK 0x00000800
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_5_RESET_VAL 0x1
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_5_POS 11
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_5_SIZE 1
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_5_DECL 11

/* Scale CIC_RX_0 before HB by 64/81 . */
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_6_MASK 0x00001000
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_6_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_6_POS 12
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_6_SIZE 1
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_6_DECL 12

/* Debug mode for CIC_RX_0.If set, all parameters need user programming (this */
/*is equivalent to previous chip setup).If not set, we override order, lshift */
/* and G_RX_6 by setting based on the decimation ratio. */
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_6_MASK 0x00002000
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_6_RESET_VAL 0x1
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_6_POS 13
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_6_SIZE 1
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_6_DECL 13

/* Scale CIC_RX_0 before HB by 64/81 . */
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_7_MASK 0x00004000
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_7_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_7_POS 14
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_7_SIZE 1
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_RX_7_DECL 14

/* Debug mode for CIC_RX_0.If set, all parameters need user programming (this */
/*is equivalent to previous chip setup).If not set, we override order, lshift*/
/* and G_RX_7 by setting based on the decimation ratio. */
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_7_MASK 0x00008000
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_7_RESET_VAL 0x1
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_7_POS 15
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_7_SIZE 1
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_RX_7_DECL 15

/* Scale CIC_TX_0 and CIC_TX_1 before HB by 16/27 . */
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_TX_0_1_MASK 0x00010000
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_TX_0_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_TX_0_1_POS 16
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_TX_0_1_SIZE 1
#define IAXXX_CNR0_CIC_ADTL_CTRL_G_TX_0_1_DECL 16

/* Debug mode for CIC_TX_0 and CIC_TX_1.If set, all parameters need user */
/* programming (thisis equivalent to previous chip setup).If not set, we */
/* override order, lshift and G_TX_0_1 by setting based on the interpolation */
/* ratio. */
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_TX_0_1_MASK 0x00020000
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_TX_0_1_RESET_VAL 0x1
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_TX_0_1_POS 17
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_TX_0_1_SIZE 1
#define IAXXX_CNR0_CIC_ADTL_CTRL_DBG_TX_0_1_DECL 17

/*** IAXXX_CNR0_CIC_HB (0x50040044) ***/
/*This register has the control for all the CIC HalfBand filters: CIC_RX_0 - */
/* CIC_RX_7 and CIC_TX_0_1 (since dmic only, it is paired)  */
#define IAXXX_CNR0_CIC_HB_ADDR (0x50040044)
#define IAXXX_CNR0_CIC_HB_MASK_VAL 0x0003ffff
#define IAXXX_CNR0_CIC_HB_RMASK_VAL 0x0003ffff
#define IAXXX_CNR0_CIC_HB_WMASK_VAL 0x0003ffff
#define IAXXX_CNR0_CIC_HB_RESET_VAL 0x0003ffff

/* 00: Passthru.  */
/* 01: Decimate by 2.  */
/* 10: Decimate by 4.  */
/* 11: Reserved (mux bypass the HB for testing).  */
#define IAXXX_CNR0_CIC_HB_CIC_RX_0_MASK 0x00000003
#define IAXXX_CNR0_CIC_HB_CIC_RX_0_RESET_VAL 0x3
#define IAXXX_CNR0_CIC_HB_CIC_RX_0_POS 0
#define IAXXX_CNR0_CIC_HB_CIC_RX_0_SIZE 2
#define IAXXX_CNR0_CIC_HB_CIC_RX_0_DECL (1:0)

/* 00: Passthru.  */
/* 01: Decimate by 2.  */
/* 10: Decimate by 4.  */
/* 11: Reserved (mux bypass the HB for testing).  */
#define IAXXX_CNR0_CIC_HB_CIC_RX_1_MASK 0x0000000c
#define IAXXX_CNR0_CIC_HB_CIC_RX_1_RESET_VAL 0x3
#define IAXXX_CNR0_CIC_HB_CIC_RX_1_POS 2
#define IAXXX_CNR0_CIC_HB_CIC_RX_1_SIZE 2
#define IAXXX_CNR0_CIC_HB_CIC_RX_1_DECL (3:2)

/* 00: Passthru.  */
/* 01: Decimate by 2.  */
/* 10: Decimate by 4.  */
/* 11: Reserved (mux bypass the HB for testing).  */
#define IAXXX_CNR0_CIC_HB_CIC_RX_2_MASK 0x00000030
#define IAXXX_CNR0_CIC_HB_CIC_RX_2_RESET_VAL 0x3
#define IAXXX_CNR0_CIC_HB_CIC_RX_2_POS 4
#define IAXXX_CNR0_CIC_HB_CIC_RX_2_SIZE 2
#define IAXXX_CNR0_CIC_HB_CIC_RX_2_DECL (5:4)

/* 00: Passthru.  */
/* 01: Decimate by 2.  */
/* 10: Decimate by 4.  */
/* 11: Reserved (mux bypass the HB for testing).  */
#define IAXXX_CNR0_CIC_HB_CIC_RX_3_MASK 0x000000c0
#define IAXXX_CNR0_CIC_HB_CIC_RX_3_RESET_VAL 0x3
#define IAXXX_CNR0_CIC_HB_CIC_RX_3_POS 6
#define IAXXX_CNR0_CIC_HB_CIC_RX_3_SIZE 2
#define IAXXX_CNR0_CIC_HB_CIC_RX_3_DECL (7:6)

/* 00: Passthru.  */
/* 01: Decimate by 2.  */
/* 10: Decimate by 4.  */
/* 11: Reserved (mux bypass the HB for testing).  */
#define IAXXX_CNR0_CIC_HB_CIC_RX_4_MASK 0x00000300
#define IAXXX_CNR0_CIC_HB_CIC_RX_4_RESET_VAL 0x3
#define IAXXX_CNR0_CIC_HB_CIC_RX_4_POS 8
#define IAXXX_CNR0_CIC_HB_CIC_RX_4_SIZE 2
#define IAXXX_CNR0_CIC_HB_CIC_RX_4_DECL (9:8)

/* 00: Passthru.  */
/* 01: Decimate by 2.  */
/* 10: Decimate by 4.  */
/* 11: Reserved (mux bypass the HB for testing).  */
#define IAXXX_CNR0_CIC_HB_CIC_RX_5_MASK 0x00000c00
#define IAXXX_CNR0_CIC_HB_CIC_RX_5_RESET_VAL 0x3
#define IAXXX_CNR0_CIC_HB_CIC_RX_5_POS 10
#define IAXXX_CNR0_CIC_HB_CIC_RX_5_SIZE 2
#define IAXXX_CNR0_CIC_HB_CIC_RX_5_DECL (11:10)

/* 00: Passthru.  */
/* 01: Decimate by 2.  */
/* 10: Decimate by 4.  */
/* 11: Reserved (mux bypass the HB for testing).  */
#define IAXXX_CNR0_CIC_HB_CIC_RX_6_MASK 0x00003000
#define IAXXX_CNR0_CIC_HB_CIC_RX_6_RESET_VAL 0x3
#define IAXXX_CNR0_CIC_HB_CIC_RX_6_POS 12
#define IAXXX_CNR0_CIC_HB_CIC_RX_6_SIZE 2
#define IAXXX_CNR0_CIC_HB_CIC_RX_6_DECL (13:12)

/* 00: Passthru.  */
/* 01: Decimate by 2.  */
/* 10: Decimate by 4.  */
/* 11: Reserved (mux bypass the HB for testing).  */
#define IAXXX_CNR0_CIC_HB_CIC_RX_7_MASK 0x0000c000
#define IAXXX_CNR0_CIC_HB_CIC_RX_7_RESET_VAL 0x3
#define IAXXX_CNR0_CIC_HB_CIC_RX_7_POS 14
#define IAXXX_CNR0_CIC_HB_CIC_RX_7_SIZE 2
#define IAXXX_CNR0_CIC_HB_CIC_RX_7_DECL (15:14)

/* 00: Passthru.  */
/* 01: Decimate by 2.  */
/* 10: Decimate by 4.  */
/* 11: Reserved (mux bypass the HB for testing).  */
#define IAXXX_CNR0_CIC_HB_CIC_TX_0_1_MASK 0x00030000
#define IAXXX_CNR0_CIC_HB_CIC_TX_0_1_RESET_VAL 0x3
#define IAXXX_CNR0_CIC_HB_CIC_TX_0_1_POS 16
#define IAXXX_CNR0_CIC_HB_CIC_TX_0_1_SIZE 2
#define IAXXX_CNR0_CIC_HB_CIC_TX_0_1_DECL (17:16)

/*** IAXXX_CNR0_CDC0_ENABLE (0x50040048) ***/
/*This register has the enables for CDC0 paths ->for paths clked by CDC0_CLK */
#define IAXXX_CNR0_CDC0_ENABLE_ADDR (0x50040048)
#define IAXXX_CNR0_CDC0_ENABLE_MASK_VAL 0x800000ff
#define IAXXX_CNR0_CDC0_ENABLE_RMASK_VAL 0x800000ff
#define IAXXX_CNR0_CDC0_ENABLE_WMASK_VAL 0x800000ff
#define IAXXX_CNR0_CDC0_ENABLE_RESET_VAL 0x00000000

/* Enable CDC0 CLK paths. For RX ports [7/6/5/4/3/2/1/0] which are */
/* [CDC_ADC3/CDC_ADC2/CDC_ADC1/CDC_ADC0/CDC_ADC3/CDC_ADC2/CDC_ADC1/CDC_ADC0]. */
#define IAXXX_CNR0_CDC0_ENABLE_E_MASK 0x000000ff
#define IAXXX_CNR0_CDC0_ENABLE_E_RESET_VAL 0x0
#define IAXXX_CNR0_CDC0_ENABLE_E_POS 0
#define IAXXX_CNR0_CDC0_ENABLE_E_SIZE 8
#define IAXXX_CNR0_CDC0_ENABLE_E_DECL (7:0)

/* CDC0_CLK debug enable. This is a clock enable override. */
#define IAXXX_CNR0_CDC0_ENABLE_DBG_MASK 0x80000000
#define IAXXX_CNR0_CDC0_ENABLE_DBG_RESET_VAL 0x0
#define IAXXX_CNR0_CDC0_ENABLE_DBG_POS 31
#define IAXXX_CNR0_CDC0_ENABLE_DBG_SIZE 1
#define IAXXX_CNR0_CDC0_ENABLE_DBG_DECL 31

/*** IAXXX_CNR0_CDC0_ENABLE_BUSY (0x5004004c) ***/
/*This register indicates, if not busy, that a write to CDC0_ENABLE can be */
/* safely made. */
#define IAXXX_CNR0_CDC0_ENABLE_BUSY_ADDR (0x5004004c)
#define IAXXX_CNR0_CDC0_ENABLE_BUSY_MASK_VAL 0x00000001
#define IAXXX_CNR0_CDC0_ENABLE_BUSY_RMASK_VAL 0x00000001
#define IAXXX_CNR0_CDC0_ENABLE_BUSY_WMASK_VAL 0x00000000
#define IAXXX_CNR0_CDC0_ENABLE_BUSY_RESET_VAL 0x00000000

/* 0: Write to CDC0_ENABLE is NOT busy.  */
/* 1: Write to CDC0_ENABLE is busy.        */
#define IAXXX_CNR0_CDC0_ENABLE_BUSY_B_MASK 0x00000001
#define IAXXX_CNR0_CDC0_ENABLE_BUSY_B_RESET_VAL 0x0
#define IAXXX_CNR0_CDC0_ENABLE_BUSY_B_POS 0
#define IAXXX_CNR0_CDC0_ENABLE_BUSY_B_SIZE 1
#define IAXXX_CNR0_CDC0_ENABLE_BUSY_B_DECL 0

/*** IAXXX_CNR0_CDC1_ENABLE (0x50040050) ***/
/*This register has the enables for CDC1 paths ->for paths clked by CDC1_CLK */
#define IAXXX_CNR0_CDC1_ENABLE_ADDR (0x50040050)
#define IAXXX_CNR0_CDC1_ENABLE_MASK_VAL 0x800000ff
#define IAXXX_CNR0_CDC1_ENABLE_RMASK_VAL 0x800000ff
#define IAXXX_CNR0_CDC1_ENABLE_WMASK_VAL 0x800000ff
#define IAXXX_CNR0_CDC1_ENABLE_RESET_VAL 0x00000000

/* Enable CDC1 CLK paths. For RX ports [7/6/5/4/3/2/1/0] which are */
/* [CDC_ADC3/CDC_ADC2/CDC_ADC1/CDC_ADC0/CDC_ADC3/CDC_ADC2/CDC_ADC1/CDC_ADC0]. */
#define IAXXX_CNR0_CDC1_ENABLE_E_MASK 0x000000ff
#define IAXXX_CNR0_CDC1_ENABLE_E_RESET_VAL 0x0
#define IAXXX_CNR0_CDC1_ENABLE_E_POS 0
#define IAXXX_CNR0_CDC1_ENABLE_E_SIZE 8
#define IAXXX_CNR0_CDC1_ENABLE_E_DECL (7:0)

/* CDC1_CLK debug enable. This is a clock enable override. */
#define IAXXX_CNR0_CDC1_ENABLE_DBG_MASK 0x80000000
#define IAXXX_CNR0_CDC1_ENABLE_DBG_RESET_VAL 0x0
#define IAXXX_CNR0_CDC1_ENABLE_DBG_POS 31
#define IAXXX_CNR0_CDC1_ENABLE_DBG_SIZE 1
#define IAXXX_CNR0_CDC1_ENABLE_DBG_DECL 31

/*** IAXXX_CNR0_CDC1_ENABLE_BUSY (0x50040054) ***/
/*This register indicates, if not busy, that a write to CDC1_ENABLE can be */
/* safely made. */
#define IAXXX_CNR0_CDC1_ENABLE_BUSY_ADDR (0x50040054)
#define IAXXX_CNR0_CDC1_ENABLE_BUSY_MASK_VAL 0x00000001
#define IAXXX_CNR0_CDC1_ENABLE_BUSY_RMASK_VAL 0x00000001
#define IAXXX_CNR0_CDC1_ENABLE_BUSY_WMASK_VAL 0x00000000
#define IAXXX_CNR0_CDC1_ENABLE_BUSY_RESET_VAL 0x00000000

/* 0: Write to CDC1_ENABLE is NOT busy.  */
/* 1: Write to CDC1_ENABLE is busy.        */
#define IAXXX_CNR0_CDC1_ENABLE_BUSY_B_MASK 0x00000001
#define IAXXX_CNR0_CDC1_ENABLE_BUSY_B_RESET_VAL 0x0
#define IAXXX_CNR0_CDC1_ENABLE_BUSY_B_POS 0
#define IAXXX_CNR0_CDC1_ENABLE_BUSY_B_SIZE 1
#define IAXXX_CNR0_CDC1_ENABLE_BUSY_B_DECL 0

/*** IAXXX_CNR0_DMIC0_ENABLE (0x50040058) ***/
/*This register has the enables for DMIC0 paths ->for paths clked by */
/* DMIC0_CLK */
#define IAXXX_CNR0_DMIC0_ENABLE_ADDR (0x50040058)
#define IAXXX_CNR0_DMIC0_ENABLE_MASK_VAL 0x800003ff
#define IAXXX_CNR0_DMIC0_ENABLE_RMASK_VAL 0x800003ff
#define IAXXX_CNR0_DMIC0_ENABLE_WMASK_VAL 0x800003ff
#define IAXXX_CNR0_DMIC0_ENABLE_RESET_VAL 0x00000000

/* Enable DMIC0_CLK paths. For TX ports [9:8] are 0R/0L, for RX ports */
/* [7/6/5/4/3/2/1/0] are 3R/3L/2R/2L/1R/1L/0R/0L -> L is left channel, R is */
/* right channel. */
#define IAXXX_CNR0_DMIC0_ENABLE_E_MASK 0x000003ff
#define IAXXX_CNR0_DMIC0_ENABLE_E_RESET_VAL 0x0
#define IAXXX_CNR0_DMIC0_ENABLE_E_POS 0
#define IAXXX_CNR0_DMIC0_ENABLE_E_SIZE 10
#define IAXXX_CNR0_DMIC0_ENABLE_E_DECL (9:0)

/* DMIC0_CLK debug enable. This is a clock enable override. */
#define IAXXX_CNR0_DMIC0_ENABLE_DBG_MASK 0x80000000
#define IAXXX_CNR0_DMIC0_ENABLE_DBG_RESET_VAL 0x0
#define IAXXX_CNR0_DMIC0_ENABLE_DBG_POS 31
#define IAXXX_CNR0_DMIC0_ENABLE_DBG_SIZE 1
#define IAXXX_CNR0_DMIC0_ENABLE_DBG_DECL 31

/*** IAXXX_CNR0_DMIC0_ENABLE_BUSY (0x5004005c) ***/
/*This register indicates, if not busy, that a write to DMIC0_ENABLE can be */
/* safely made. */
#define IAXXX_CNR0_DMIC0_ENABLE_BUSY_ADDR (0x5004005c)
#define IAXXX_CNR0_DMIC0_ENABLE_BUSY_MASK_VAL 0x00000001
#define IAXXX_CNR0_DMIC0_ENABLE_BUSY_RMASK_VAL 0x00000001
#define IAXXX_CNR0_DMIC0_ENABLE_BUSY_WMASK_VAL 0x00000000
#define IAXXX_CNR0_DMIC0_ENABLE_BUSY_RESET_VAL 0x00000000

/* 0: Write to DMIC0_ENABLE is NOT busy.  */
/* 1: Write to DMIC0_ENABLE is busy.        */
#define IAXXX_CNR0_DMIC0_ENABLE_BUSY_B_MASK 0x00000001
#define IAXXX_CNR0_DMIC0_ENABLE_BUSY_B_RESET_VAL 0x0
#define IAXXX_CNR0_DMIC0_ENABLE_BUSY_B_POS 0
#define IAXXX_CNR0_DMIC0_ENABLE_BUSY_B_SIZE 1
#define IAXXX_CNR0_DMIC0_ENABLE_BUSY_B_DECL 0

/*** IAXXX_CNR0_DMIC1_ENABLE (0x50040060) ***/
/*This register has the enables for DMIC1 paths ->for paths clked by */
/* DMIC1_CLK */
#define IAXXX_CNR0_DMIC1_ENABLE_ADDR (0x50040060)
#define IAXXX_CNR0_DMIC1_ENABLE_MASK_VAL 0x800003ff
#define IAXXX_CNR0_DMIC1_ENABLE_RMASK_VAL 0x800003ff
#define IAXXX_CNR0_DMIC1_ENABLE_WMASK_VAL 0x800003ff
#define IAXXX_CNR0_DMIC1_ENABLE_RESET_VAL 0x00000000

/* Enable DMIC1_CLK paths. For TX ports [9:8] are 0R/0L, for RX ports */
/* [7/6/5/4/3/2/1/0] are 3R/3L/2R/2L/1R/1L/0R/0L -> L is left channel, R is */
/* right channel. */
#define IAXXX_CNR0_DMIC1_ENABLE_E_MASK 0x000003ff
#define IAXXX_CNR0_DMIC1_ENABLE_E_RESET_VAL 0x0
#define IAXXX_CNR0_DMIC1_ENABLE_E_POS 0
#define IAXXX_CNR0_DMIC1_ENABLE_E_SIZE 10
#define IAXXX_CNR0_DMIC1_ENABLE_E_DECL (9:0)

/* DMIC1_CLK debug enable. This is a clock enable override. */
#define IAXXX_CNR0_DMIC1_ENABLE_DBG_MASK 0x80000000
#define IAXXX_CNR0_DMIC1_ENABLE_DBG_RESET_VAL 0x0
#define IAXXX_CNR0_DMIC1_ENABLE_DBG_POS 31
#define IAXXX_CNR0_DMIC1_ENABLE_DBG_SIZE 1
#define IAXXX_CNR0_DMIC1_ENABLE_DBG_DECL 31

/*** IAXXX_CNR0_DMIC1_ENABLE_BUSY (0x50040064) ***/
/*This register indicates, if not busy, that a write to DMIC1_ENABLE can be */
/* safely made. */
#define IAXXX_CNR0_DMIC1_ENABLE_BUSY_ADDR (0x50040064)
#define IAXXX_CNR0_DMIC1_ENABLE_BUSY_MASK_VAL 0x00000001
#define IAXXX_CNR0_DMIC1_ENABLE_BUSY_RMASK_VAL 0x00000001
#define IAXXX_CNR0_DMIC1_ENABLE_BUSY_WMASK_VAL 0x00000000
#define IAXXX_CNR0_DMIC1_ENABLE_BUSY_RESET_VAL 0x00000000

/* 0: Write to DMIC1_ENABLE is NOT busy.  */
/* 1: Write to DMIC1_ENABLE is busy.        */
#define IAXXX_CNR0_DMIC1_ENABLE_BUSY_B_MASK 0x00000001
#define IAXXX_CNR0_DMIC1_ENABLE_BUSY_B_RESET_VAL 0x0
#define IAXXX_CNR0_DMIC1_ENABLE_BUSY_B_POS 0
#define IAXXX_CNR0_DMIC1_ENABLE_BUSY_B_SIZE 1
#define IAXXX_CNR0_DMIC1_ENABLE_BUSY_B_DECL 0

/*** IAXXX_CNR0_A400_0_ENABLE (0x50040068) ***/
/*This register has the enables for A400_0 paths ->for paths clked by */
/* A400_0_CLK */
#define IAXXX_CNR0_A400_0_ENABLE_ADDR (0x50040068)
#define IAXXX_CNR0_A400_0_ENABLE_MASK_VAL 0x800000ff
#define IAXXX_CNR0_A400_0_ENABLE_RMASK_VAL 0x800000ff
#define IAXXX_CNR0_A400_0_ENABLE_WMASK_VAL 0x800000ff
#define IAXXX_CNR0_A400_0_ENABLE_RESET_VAL 0x00000000

/* Enable A400_0_CLK paths. For RX Ports [7/6/5/4/3/2/1/0]. */
#define IAXXX_CNR0_A400_0_ENABLE_E_MASK 0x000000ff
#define IAXXX_CNR0_A400_0_ENABLE_E_RESET_VAL 0x0
#define IAXXX_CNR0_A400_0_ENABLE_E_POS 0
#define IAXXX_CNR0_A400_0_ENABLE_E_SIZE 8
#define IAXXX_CNR0_A400_0_ENABLE_E_DECL (7:0)

/* A400_0_CLK debug enable. This is a clock enable override. */
#define IAXXX_CNR0_A400_0_ENABLE_DBG_MASK 0x80000000
#define IAXXX_CNR0_A400_0_ENABLE_DBG_RESET_VAL 0x0
#define IAXXX_CNR0_A400_0_ENABLE_DBG_POS 31
#define IAXXX_CNR0_A400_0_ENABLE_DBG_SIZE 1
#define IAXXX_CNR0_A400_0_ENABLE_DBG_DECL 31

/*** IAXXX_CNR0_A400_0_ENABLE_BUSY (0x5004006c) ***/
/*This register indicates, if not busy, that a write to A400_0_ENABLE can be */
/* safely made. */
#define IAXXX_CNR0_A400_0_ENABLE_BUSY_ADDR (0x5004006c)
#define IAXXX_CNR0_A400_0_ENABLE_BUSY_MASK_VAL 0x00000001
#define IAXXX_CNR0_A400_0_ENABLE_BUSY_RMASK_VAL 0x00000001
#define IAXXX_CNR0_A400_0_ENABLE_BUSY_WMASK_VAL 0x00000000
#define IAXXX_CNR0_A400_0_ENABLE_BUSY_RESET_VAL 0x00000000

/* 0: Write to A400_0_ENABLE is NOT busy.  */
/* 1: Write to A400_0_ENABLE is busy.        */
#define IAXXX_CNR0_A400_0_ENABLE_BUSY_B_MASK 0x00000001
#define IAXXX_CNR0_A400_0_ENABLE_BUSY_B_RESET_VAL 0x0
#define IAXXX_CNR0_A400_0_ENABLE_BUSY_B_POS 0
#define IAXXX_CNR0_A400_0_ENABLE_BUSY_B_SIZE 1
#define IAXXX_CNR0_A400_0_ENABLE_BUSY_B_DECL 0

/*** IAXXX_CNR0_A400_1_ENABLE (0x50040070) ***/
/*This register has the enables for A400_1 paths ->for paths clked by */
/* A400_1_CLK */
#define IAXXX_CNR0_A400_1_ENABLE_ADDR (0x50040070)
#define IAXXX_CNR0_A400_1_ENABLE_MASK_VAL 0x800000ff
#define IAXXX_CNR0_A400_1_ENABLE_RMASK_VAL 0x800000ff
#define IAXXX_CNR0_A400_1_ENABLE_WMASK_VAL 0x800000ff
#define IAXXX_CNR0_A400_1_ENABLE_RESET_VAL 0x00000000

/* Enable A400_1_CLK paths. For RX Ports [7/6/5/4/3/2/1/0]. */
#define IAXXX_CNR0_A400_1_ENABLE_E_MASK 0x000000ff
#define IAXXX_CNR0_A400_1_ENABLE_E_RESET_VAL 0x0
#define IAXXX_CNR0_A400_1_ENABLE_E_POS 0
#define IAXXX_CNR0_A400_1_ENABLE_E_SIZE 8
#define IAXXX_CNR0_A400_1_ENABLE_E_DECL (7:0)

/* A400_1_CLK debug enable. This is a clock enable override. */
#define IAXXX_CNR0_A400_1_ENABLE_DBG_MASK 0x80000000
#define IAXXX_CNR0_A400_1_ENABLE_DBG_RESET_VAL 0x0
#define IAXXX_CNR0_A400_1_ENABLE_DBG_POS 31
#define IAXXX_CNR0_A400_1_ENABLE_DBG_SIZE 1
#define IAXXX_CNR0_A400_1_ENABLE_DBG_DECL 31

/*** IAXXX_CNR0_A400_1_ENABLE_BUSY (0x50040074) ***/
/*This register indicates, if not busy, that a write to A400_1_ENABLE can be */
/* safely made. */
#define IAXXX_CNR0_A400_1_ENABLE_BUSY_ADDR (0x50040074)
#define IAXXX_CNR0_A400_1_ENABLE_BUSY_MASK_VAL 0x00000001
#define IAXXX_CNR0_A400_1_ENABLE_BUSY_RMASK_VAL 0x00000001
#define IAXXX_CNR0_A400_1_ENABLE_BUSY_WMASK_VAL 0x00000000
#define IAXXX_CNR0_A400_1_ENABLE_BUSY_RESET_VAL 0x00000000

/* 0: Write to A400_1_ENABLE is NOT busy.  */
/* 1: Write to A400_1_ENABLE is busy.        */
#define IAXXX_CNR0_A400_1_ENABLE_BUSY_B_MASK 0x00000001
#define IAXXX_CNR0_A400_1_ENABLE_BUSY_B_RESET_VAL 0x0
#define IAXXX_CNR0_A400_1_ENABLE_BUSY_B_POS 0
#define IAXXX_CNR0_A400_1_ENABLE_BUSY_B_SIZE 1
#define IAXXX_CNR0_A400_1_ENABLE_BUSY_B_DECL 0

/*** IAXXX_CNR0_SWRM0_ENABLE (0x50040078) ***/
/*This register has the enables for SWRM0 paths ->for paths clked by */
/* SWRM0_CLK */
#define IAXXX_CNR0_SWRM0_ENABLE_ADDR (0x50040078)
#define IAXXX_CNR0_SWRM0_ENABLE_MASK_VAL 0x800000ff
#define IAXXX_CNR0_SWRM0_ENABLE_RMASK_VAL 0x800000ff
#define IAXXX_CNR0_SWRM0_ENABLE_WMASK_VAL 0x800000ff
#define IAXXX_CNR0_SWRM0_ENABLE_RESET_VAL 0x00000000

/* Enable SWRM0_CLK paths. For RX Ports [7/6/5/4/3/2/1/0]. */
#define IAXXX_CNR0_SWRM0_ENABLE_E_MASK 0x000000ff
#define IAXXX_CNR0_SWRM0_ENABLE_E_RESET_VAL 0x0
#define IAXXX_CNR0_SWRM0_ENABLE_E_POS 0
#define IAXXX_CNR0_SWRM0_ENABLE_E_SIZE 8
#define IAXXX_CNR0_SWRM0_ENABLE_E_DECL (7:0)

/* SWRM0_CLK debug enable. This is a clock enable override. */
#define IAXXX_CNR0_SWRM0_ENABLE_DBG_MASK 0x80000000
#define IAXXX_CNR0_SWRM0_ENABLE_DBG_RESET_VAL 0x0
#define IAXXX_CNR0_SWRM0_ENABLE_DBG_POS 31
#define IAXXX_CNR0_SWRM0_ENABLE_DBG_SIZE 1
#define IAXXX_CNR0_SWRM0_ENABLE_DBG_DECL 31

/*** IAXXX_CNR0_SWRM0_ENABLE_BUSY (0x5004007c) ***/
/*This register indicates, if not busy, that a write to SWRM0_ENABLE can be */
/* safely made. */
#define IAXXX_CNR0_SWRM0_ENABLE_BUSY_ADDR (0x5004007c)
#define IAXXX_CNR0_SWRM0_ENABLE_BUSY_MASK_VAL 0x00000001
#define IAXXX_CNR0_SWRM0_ENABLE_BUSY_RMASK_VAL 0x00000001
#define IAXXX_CNR0_SWRM0_ENABLE_BUSY_WMASK_VAL 0x00000000
#define IAXXX_CNR0_SWRM0_ENABLE_BUSY_RESET_VAL 0x00000000

/* 0: Write to SWRM0_ENABLE is NOT busy.  */
/* 1: Write to SWRM0_ENABLE is busy.        */
#define IAXXX_CNR0_SWRM0_ENABLE_BUSY_B_MASK 0x00000001
#define IAXXX_CNR0_SWRM0_ENABLE_BUSY_B_RESET_VAL 0x0
#define IAXXX_CNR0_SWRM0_ENABLE_BUSY_B_POS 0
#define IAXXX_CNR0_SWRM0_ENABLE_BUSY_B_SIZE 1
#define IAXXX_CNR0_SWRM0_ENABLE_BUSY_B_DECL 0

/*** IAXXX_CNR0_SWRM1_ENABLE (0x50040080) ***/
/*This register has the enables for SWRM1 paths ->for paths clked by */
/* SWRM1_CLK */
#define IAXXX_CNR0_SWRM1_ENABLE_ADDR (0x50040080)
#define IAXXX_CNR0_SWRM1_ENABLE_MASK_VAL 0x800000ff
#define IAXXX_CNR0_SWRM1_ENABLE_RMASK_VAL 0x800000ff
#define IAXXX_CNR0_SWRM1_ENABLE_WMASK_VAL 0x800000ff
#define IAXXX_CNR0_SWRM1_ENABLE_RESET_VAL 0x00000000

/* Enable SWRM1_CLK paths. For RX Ports [7/6/5/4/3/2/1/0]. */
#define IAXXX_CNR0_SWRM1_ENABLE_E_MASK 0x000000ff
#define IAXXX_CNR0_SWRM1_ENABLE_E_RESET_VAL 0x0
#define IAXXX_CNR0_SWRM1_ENABLE_E_POS 0
#define IAXXX_CNR0_SWRM1_ENABLE_E_SIZE 8
#define IAXXX_CNR0_SWRM1_ENABLE_E_DECL (7:0)

/* SWRM1_CLK debug enable. This is a clock enable override. */
#define IAXXX_CNR0_SWRM1_ENABLE_DBG_MASK 0x80000000
#define IAXXX_CNR0_SWRM1_ENABLE_DBG_RESET_VAL 0x0
#define IAXXX_CNR0_SWRM1_ENABLE_DBG_POS 31
#define IAXXX_CNR0_SWRM1_ENABLE_DBG_SIZE 1
#define IAXXX_CNR0_SWRM1_ENABLE_DBG_DECL 31

/*** IAXXX_CNR0_SWRM1_ENABLE_BUSY (0x50040084) ***/
/*This register indicates, if not busy, that a write to SWRM1_ENABLE can be */
/* safely made. */
#define IAXXX_CNR0_SWRM1_ENABLE_BUSY_ADDR (0x50040084)
#define IAXXX_CNR0_SWRM1_ENABLE_BUSY_MASK_VAL 0x00000001
#define IAXXX_CNR0_SWRM1_ENABLE_BUSY_RMASK_VAL 0x00000001
#define IAXXX_CNR0_SWRM1_ENABLE_BUSY_WMASK_VAL 0x00000000
#define IAXXX_CNR0_SWRM1_ENABLE_BUSY_RESET_VAL 0x00000000

/* 0: Write to SWRM1_ENABLE is NOT busy.  */
/* 1: Write to SWRM1_ENABLE is busy.        */
#define IAXXX_CNR0_SWRM1_ENABLE_BUSY_B_MASK 0x00000001
#define IAXXX_CNR0_SWRM1_ENABLE_BUSY_B_RESET_VAL 0x0
#define IAXXX_CNR0_SWRM1_ENABLE_BUSY_B_POS 0
#define IAXXX_CNR0_SWRM1_ENABLE_BUSY_B_SIZE 1
#define IAXXX_CNR0_SWRM1_ENABLE_BUSY_B_DECL 0

/*** IAXXX_CNR0_CIC_RX_HOS (0x50040088) ***/
/*This register is used to configure the CIC RX fifos and ports into phyiscal */
/* streams. This registers should be quasi-static. */
#define IAXXX_CNR0_CIC_RX_HOS_ADDR (0x50040088)
#define IAXXX_CNR0_CIC_RX_HOS_MASK_VAL 0x000000ff
#define IAXXX_CNR0_CIC_RX_HOS_RMASK_VAL 0x000000ff
#define IAXXX_CNR0_CIC_RX_HOS_WMASK_VAL 0x000000ff
#define IAXXX_CNR0_CIC_RX_HOS_RESET_VAL 0x00000000

/* 0: Port is not a head of stream.  */
/* 1: Port is a head of stream.                  */
#define IAXXX_CNR0_CIC_RX_HOS_VAL_MASK 0x000000ff
#define IAXXX_CNR0_CIC_RX_HOS_VAL_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RX_HOS_VAL_POS 0
#define IAXXX_CNR0_CIC_RX_HOS_VAL_SIZE 8
#define IAXXX_CNR0_CIC_RX_HOS_VAL_DECL (7:0)

/*** IAXXX_CNR0_CIC_TX_HOS (0x5004008c) ***/
/*This register is used to configure the CIC TX fifos and ports into phyiscal */
/* streams. This registers should be quasi-static. */
#define IAXXX_CNR0_CIC_TX_HOS_ADDR (0x5004008c)
#define IAXXX_CNR0_CIC_TX_HOS_MASK_VAL 0x00000003
#define IAXXX_CNR0_CIC_TX_HOS_RMASK_VAL 0x00000003
#define IAXXX_CNR0_CIC_TX_HOS_WMASK_VAL 0x00000003
#define IAXXX_CNR0_CIC_TX_HOS_RESET_VAL 0x00000000

/* 0: Port is not a head of stream.  */
/* 1: Port is a head of stream.                  */
#define IAXXX_CNR0_CIC_TX_HOS_VAL_MASK 0x00000003
#define IAXXX_CNR0_CIC_TX_HOS_VAL_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_TX_HOS_VAL_POS 0
#define IAXXX_CNR0_CIC_TX_HOS_VAL_SIZE 2
#define IAXXX_CNR0_CIC_TX_HOS_VAL_DECL (1:0)

/*** IAXXX_CNR0_CIC_RAW_RXCOHERR (0x50040090) ***/
/* Contains the RAW latched (sticky bit) RX coherency error flags for each cic*/
/* A write of a "1" to any bit will clear that bit. */
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_ADDR (0x50040090)
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_MASK_VAL 0x000000ff
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_RMASK_VAL 0x000000ff
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_WMASK_VAL 0x000000ff
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_RESET_VAL 0x00000000

/* A Raw RX coherency  Error Condition has occurred for CIC 0. */
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_0_MASK 0x00000001
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_0_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_0_POS 0
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_0_SIZE 1
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_0_DECL 0

/* A Raw RX coherency  Error Condition has occurred for CIC 1. */
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_1_MASK 0x00000002
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_1_POS 1
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_1_SIZE 1
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_1_DECL 1

/* A Raw RX coherency  Error Condition has occurred for CIC 2. */
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_2_MASK 0x00000004
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_2_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_2_POS 2
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_2_SIZE 1
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_2_DECL 2

/* A Raw RX coherency  Error Condition has occurred for CIC 3. */
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_3_MASK 0x00000008
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_3_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_3_POS 3
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_3_SIZE 1
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_3_DECL 3

/* A Raw RX coherency  Error Condition has occurred for CIC 4. */
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_4_MASK 0x00000010
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_4_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_4_POS 4
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_4_SIZE 1
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_4_DECL 4

/* A Raw RX coherency  Error Condition has occurred for CIC 5. */
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_5_MASK 0x00000020
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_5_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_5_POS 5
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_5_SIZE 1
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_5_DECL 5

/* A Raw RX coherency  Error Condition has occurred for CIC 6. */
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_6_MASK 0x00000040
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_6_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_6_POS 6
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_6_SIZE 1
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_6_DECL 6

/* A Raw RX coherency  Error Condition has occurred for CIC 7. */
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_7_MASK 0x00000080
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_7_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_7_POS 7
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_7_SIZE 1
#define IAXXX_CNR0_CIC_RAW_RXCOHERR_E_7_DECL 7

/*** IAXXX_CNR0_CIC_RAW_TXCOHERR (0x50040094) ***/
/* Contains the RAW latched (sticky bit) TX coherency error flags for each cic*/
/* A write of a "1" to any bit will clear that bit. */
#define IAXXX_CNR0_CIC_RAW_TXCOHERR_ADDR (0x50040094)
#define IAXXX_CNR0_CIC_RAW_TXCOHERR_MASK_VAL 0x00000003
#define IAXXX_CNR0_CIC_RAW_TXCOHERR_RMASK_VAL 0x00000003
#define IAXXX_CNR0_CIC_RAW_TXCOHERR_WMASK_VAL 0x00000003
#define IAXXX_CNR0_CIC_RAW_TXCOHERR_RESET_VAL 0x00000000

/* A Raw TX coherency  Error Condition has occurred for CIC 0. */
#define IAXXX_CNR0_CIC_RAW_TXCOHERR_E_0_MASK 0x00000001
#define IAXXX_CNR0_CIC_RAW_TXCOHERR_E_0_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RAW_TXCOHERR_E_0_POS 0
#define IAXXX_CNR0_CIC_RAW_TXCOHERR_E_0_SIZE 1
#define IAXXX_CNR0_CIC_RAW_TXCOHERR_E_0_DECL 0

/* A Raw TX coherency  Error Condition has occurred for CIC 1. */
#define IAXXX_CNR0_CIC_RAW_TXCOHERR_E_1_MASK 0x00000002
#define IAXXX_CNR0_CIC_RAW_TXCOHERR_E_1_RESET_VAL 0x0
#define IAXXX_CNR0_CIC_RAW_TXCOHERR_E_1_POS 1
#define IAXXX_CNR0_CIC_RAW_TXCOHERR_E_1_SIZE 1
#define IAXXX_CNR0_CIC_RAW_TXCOHERR_E_1_DECL 1

/*** IAXXX_CNR0_SPARE_GATES (0x50040098) ***/
/*This is a dummy register which is tied to the spare_gates module.It does not*/
/* serve any functional purpose. */
#define IAXXX_CNR0_SPARE_GATES_ADDR (0x50040098)
#define IAXXX_CNR0_SPARE_GATES_MASK_VAL 0xffffffff
#define IAXXX_CNR0_SPARE_GATES_RMASK_VAL 0xffffffff
#define IAXXX_CNR0_SPARE_GATES_WMASK_VAL 0x0000ffff
#define IAXXX_CNR0_SPARE_GATES_RESET_VAL 0x00000000

/* Dummy field whose output goes in to the spare_gates module. */
#define IAXXX_CNR0_SPARE_GATES_FIELD_1_MASK 0x0000ffff
#define IAXXX_CNR0_SPARE_GATES_FIELD_1_RESET_VAL 0x0
#define IAXXX_CNR0_SPARE_GATES_FIELD_1_POS 0
#define IAXXX_CNR0_SPARE_GATES_FIELD_1_SIZE 16
#define IAXXX_CNR0_SPARE_GATES_FIELD_1_DECL (15:0)

/* Dummy field which reads the output of the spare_gates module. */
#define IAXXX_CNR0_SPARE_GATES_FIELD_2_MASK 0xffff0000
#define IAXXX_CNR0_SPARE_GATES_FIELD_2_RESET_VAL 0x0
#define IAXXX_CNR0_SPARE_GATES_FIELD_2_POS 16
#define IAXXX_CNR0_SPARE_GATES_FIELD_2_SIZE 16
#define IAXXX_CNR0_SPARE_GATES_FIELD_2_DECL (31:16)

#endif /*  __IAXXX_REGISTER_DEFS_CNR0_H__ */
