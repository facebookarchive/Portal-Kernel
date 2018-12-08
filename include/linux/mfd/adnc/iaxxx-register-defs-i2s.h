/*
* iaxxx-register-defs-i2s.h -- IAXXX register defination for I2S
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

#ifndef __IAXXX_REGISTER_DEFS_I2S_H__
#define __IAXXX_REGISTER_DEFS_I2S_H__

/*** The base address for this set of registers ***/
#define IAXXX_I2S_REGS_ADDR (0x5004a000)

/*** I2S_I2S0_HL (0x5004a000) ***/
/* I2S0 H/L Divider Register. */
#define IAXXX_I2S_I2S0_HL_ADDR (0x5004a000)
#define IAXXX_I2S_I2S0_HL_MASK_VAL 0x0000001f
#define IAXXX_I2S_I2S0_HL_RMASK_VAL 0x0000001f
#define IAXXX_I2S_I2S0_HL_WMASK_VAL 0x0000001f
#define IAXXX_I2S_I2S0_HL_RESET_VAL 0x00000001

/*
* Period of divided clock, in terms of PLL clock. 1=passthrough.
*/
#define IAXXX_I2S_I2S0_HL_P_MASK 0x0000000f
#define IAXXX_I2S_I2S0_HL_P_RESET_VAL 0x1
#define IAXXX_I2S_I2S0_HL_P_POS 0
#define IAXXX_I2S_I2S0_HL_P_SIZE 4
#define IAXXX_I2S_I2S0_HL_P_DECL (3:0)

/*
* Enable for H/L Divider.
*/
#define IAXXX_I2S_I2S0_HL_EN_MASK 0x00000010
#define IAXXX_I2S_I2S0_HL_EN_RESET_VAL 0x0
#define IAXXX_I2S_I2S0_HL_EN_POS 4
#define IAXXX_I2S_I2S0_HL_EN_SIZE 1
#define IAXXX_I2S_I2S0_HL_EN_DECL 4

/*** I2S_I2S0_NR (0x5004a004) ***/
/* I2S0 N/R Divider Register. */
#define IAXXX_I2S_I2S0_NR_ADDR (0x5004a004)
#define IAXXX_I2S_I2S0_NR_MASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S0_NR_RMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S0_NR_WMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S0_NR_RESET_VAL 0x01000001

/*
* ASIC: outclk = (N/D)*inclk
* FPGA: outclk = (N/2D)*inclk
*/
#define IAXXX_I2S_I2S0_NR_N_MASK 0x00000fff
#define IAXXX_I2S_I2S0_NR_N_RESET_VAL 0x1
#define IAXXX_I2S_I2S0_NR_N_POS 0
#define IAXXX_I2S_I2S0_NR_N_SIZE 12
#define IAXXX_I2S_I2S0_NR_N_DECL (11:0)

/*
* R= (2^12 -D + N)
*/
#define IAXXX_I2S_I2S0_NR_R_MASK 0x01fff000
#define IAXXX_I2S_I2S0_NR_R_RESET_VAL 0x1000
#define IAXXX_I2S_I2S0_NR_R_POS 12
#define IAXXX_I2S_I2S0_NR_R_SIZE 13
#define IAXXX_I2S_I2S0_NR_R_DECL (24:12)

/*
* Enable for N/R Divider.
*/
#define IAXXX_I2S_I2S0_NR_EN_MASK 0x02000000
#define IAXXX_I2S_I2S0_NR_EN_RESET_VAL 0x0
#define IAXXX_I2S_I2S0_NR_EN_POS 25
#define IAXXX_I2S_I2S0_NR_EN_SIZE 1
#define IAXXX_I2S_I2S0_NR_EN_DECL 25

/*** I2S_I2S0_GEN_CFG (0x5004a008) ***/
/* I2S0 Gen Config Register. */
#define IAXXX_I2S_I2S0_GEN_CFG_ADDR (0x5004a008)
#define IAXXX_I2S_I2S0_GEN_CFG_MASK_VAL 0x001fffff
#define IAXXX_I2S_I2S0_GEN_CFG_RMASK_VAL 0x001fffff
#define IAXXX_I2S_I2S0_GEN_CFG_WMASK_VAL 0x001fffff
#define IAXXX_I2S_I2S0_GEN_CFG_RESET_VAL 0x00000000

/*
* 0: External FS is active low. Next I2S clock cycle begins after receiving
* falling edge of PCM input FS.
* 1: External FS is active high. Next I2S clock cycle begins after receiving
* rising edge of PCM input FS.
*/
#define IAXXX_I2S_I2S0_GEN_CFG_PCM_FS_POL_MASK 0x00000001
#define IAXXX_I2S_I2S0_GEN_CFG_PCM_FS_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S0_GEN_CFG_PCM_FS_POL_POS 0
#define IAXXX_I2S_I2S0_GEN_CFG_PCM_FS_POL_SIZE 1
#define IAXXX_I2S_I2S0_GEN_CFG_PCM_FS_POL_DECL 0

/*
* 0: Active low I2S CLK. FS changes relative to negative edge of I2S CLK.
* 1: Active high I2S CLK. FS changes relative to positive edge of I2S CLK.
*/
#define IAXXX_I2S_I2S0_GEN_CFG_I2S_CLK_POL_MASK 0x00000002
#define IAXXX_I2S_I2S0_GEN_CFG_I2S_CLK_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S0_GEN_CFG_I2S_CLK_POL_POS 1
#define IAXXX_I2S_I2S0_GEN_CFG_I2S_CLK_POL_SIZE 1
#define IAXXX_I2S_I2S0_GEN_CFG_I2S_CLK_POL_DECL 1

/*
* 0: Active low I2S FS. FS goes low in first I2S clock (position within
* clock based on fs_active_edge),
*    goes high in fs_valid clocks (position based on fs_inactive_edge).
* 1: Active high I2S FS. FS goes high in first I2S clock (position within
* clock based on fs_active_edge),
*    goes low in fs_valid clocks (position based on fs_inactive_edge).
*/
#define IAXXX_I2S_I2S0_GEN_CFG_I2S_FS_POL_MASK 0x00000004
#define IAXXX_I2S_I2S0_GEN_CFG_I2S_FS_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S0_GEN_CFG_I2S_FS_POL_POS 2
#define IAXXX_I2S_I2S0_GEN_CFG_I2S_FS_POL_SIZE 1
#define IAXXX_I2S_I2S0_GEN_CFG_I2S_FS_POL_DECL 2

/*
* 0: In Pseudo Master Mode, an input sync only starts a new FS cycle after
* the previous one has finished.
*    Syncs in the middle of an FS cycle are ignored.
* 1: In Pseudo Master Mode, any input sync finishes the current FS cycle and
* starts a new one.
*    If fs_gen_count is non-zero, this mode should not be used.
*/
#define IAXXX_I2S_I2S0_GEN_CFG_ABORT_ON_SYNC_MASK 0x00000008
#define IAXXX_I2S_I2S0_GEN_CFG_ABORT_ON_SYNC_RESET_VAL 0x0
#define IAXXX_I2S_I2S0_GEN_CFG_ABORT_ON_SYNC_POS 3
#define IAXXX_I2S_I2S0_GEN_CFG_ABORT_ON_SYNC_SIZE 1
#define IAXXX_I2S_I2S0_GEN_CFG_ABORT_ON_SYNC_DECL 3

/*
* Number of I2S clocks per FS Frame. Expressed as an N-1 value.
*/
#define IAXXX_I2S_I2S0_GEN_CFG_I2S_CLKS_PER_FS_MASK 0x00000ff0
#define IAXXX_I2S_I2S0_GEN_CFG_I2S_CLKS_PER_FS_RESET_VAL 0x0
#define IAXXX_I2S_I2S0_GEN_CFG_I2S_CLKS_PER_FS_POS 4
#define IAXXX_I2S_I2S0_GEN_CFG_I2S_CLKS_PER_FS_SIZE 8
#define IAXXX_I2S_I2S0_GEN_CFG_I2S_CLKS_PER_FS_DECL (11:4)

/*
* Number of I2S clocks for which FS should be valid. Polarity of valid
* region defined by i2s_fs_pol.
*/
#define IAXXX_I2S_I2S0_GEN_CFG_FS_VALID_MASK 0x000ff000
#define IAXXX_I2S_I2S0_GEN_CFG_FS_VALID_RESET_VAL 0x0
#define IAXXX_I2S_I2S0_GEN_CFG_FS_VALID_POS 12
#define IAXXX_I2S_I2S0_GEN_CFG_FS_VALID_SIZE 8
#define IAXXX_I2S_I2S0_GEN_CFG_FS_VALID_DECL (19:12)

/*
* 0: Pseudo Master Mode. Sync to edge of external FS.
* 1: Master mode. Generate FS & CLK independently.
*/
#define IAXXX_I2S_I2S0_GEN_CFG_GEN_MASTER_MASK 0x00100000
#define IAXXX_I2S_I2S0_GEN_CFG_GEN_MASTER_RESET_VAL 0x0
#define IAXXX_I2S_I2S0_GEN_CFG_GEN_MASTER_POS 20
#define IAXXX_I2S_I2S0_GEN_CFG_GEN_MASTER_SIZE 1
#define IAXXX_I2S_I2S0_GEN_CFG_GEN_MASTER_DECL 20

/*** I2S_I2S0_CLK_CTRL (0x5004a00c) ***/
/* I2S0 Gen Clock Control Register. */
#define IAXXX_I2S_I2S0_CLK_CTRL_ADDR (0x5004a00c)
#define IAXXX_I2S_I2S0_CLK_CTRL_MASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S0_CLK_CTRL_RMASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S0_CLK_CTRL_WMASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S0_CLK_CTRL_RESET_VAL 0x00000000

/*
* Period of I2S Clock, in oversample clocks. Expressed as an N-1 value.
*/
#define IAXXX_I2S_I2S0_CLK_CTRL_I2S_CLK_PERIOD_MASK 0x000000ff
#define IAXXX_I2S_I2S0_CLK_CTRL_I2S_CLK_PERIOD_RESET_VAL 0x0
#define IAXXX_I2S_I2S0_CLK_CTRL_I2S_CLK_PERIOD_POS 0
#define IAXXX_I2S_I2S0_CLK_CTRL_I2S_CLK_PERIOD_SIZE 8
#define IAXXX_I2S_I2S0_CLK_CTRL_I2S_CLK_PERIOD_DECL (7:0)

/*
* Number of oversample clocks the I2S Clock is low. Expressed as an N-1
* value.
*/
#define IAXXX_I2S_I2S0_CLK_CTRL_I2S_CLK_LOW_MASK 0x0000ff00
#define IAXXX_I2S_I2S0_CLK_CTRL_I2S_CLK_LOW_RESET_VAL 0x0
#define IAXXX_I2S_I2S0_CLK_CTRL_I2S_CLK_LOW_POS 8
#define IAXXX_I2S_I2S0_CLK_CTRL_I2S_CLK_LOW_SIZE 8
#define IAXXX_I2S_I2S0_CLK_CTRL_I2S_CLK_LOW_DECL (15:8)

/*** I2S_I2S0_FS_ALIGN (0x5004a010) ***/
/* I2S0 Gen FS Align Register. */
#define IAXXX_I2S_I2S0_FS_ALIGN_ADDR (0x5004a010)
#define IAXXX_I2S_I2S0_FS_ALIGN_MASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S0_FS_ALIGN_RMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S0_FS_ALIGN_WMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S0_FS_ALIGN_RESET_VAL 0x00000000

/*
* Position (in oversample clocks) of the active edge of FS relative to the
* start of the frame.
* A position of 0 is only allowed in I2S Master Mode and places the active
* edge of FS coincident
* with the start of the I2S clock cycle. Whether this is a negative or
* positive edge depends upon
* the setting of i2s_fs_pol.
*/
#define IAXXX_I2S_I2S0_FS_ALIGN_FS_ALIGN_ACTIVE_MASK 0x000000ff
#define IAXXX_I2S_I2S0_FS_ALIGN_FS_ALIGN_ACTIVE_RESET_VAL 0x0
#define IAXXX_I2S_I2S0_FS_ALIGN_FS_ALIGN_ACTIVE_POS 0
#define IAXXX_I2S_I2S0_FS_ALIGN_FS_ALIGN_ACTIVE_SIZE 8
#define IAXXX_I2S_I2S0_FS_ALIGN_FS_ALIGN_ACTIVE_DECL (7:0)

/*
* Position (in oversample clocks) of the inactive edge of FS relative to the
* start of the I2S
* clock cycle defined by fs_valid. A position of 0 is only allowed in I2S
* Master Mode and places
* the active edge of FS coincident with the start of the I2S clock cycle.
* Whether this is a negative
* or positive edge depends upon the setting of i2s_fs_pol.
*/
#define IAXXX_I2S_I2S0_FS_ALIGN_FS_ALIGN_INACTIVE_MASK 0x0000ff00
#define IAXXX_I2S_I2S0_FS_ALIGN_FS_ALIGN_INACTIVE_RESET_VAL 0x0
#define IAXXX_I2S_I2S0_FS_ALIGN_FS_ALIGN_INACTIVE_POS 8
#define IAXXX_I2S_I2S0_FS_ALIGN_FS_ALIGN_INACTIVE_SIZE 8
#define IAXXX_I2S_I2S0_FS_ALIGN_FS_ALIGN_INACTIVE_DECL (15:8)

/*
* Generate this many FS cycles after receiving a PCM_FS. Expressed as an N-1
* value.
* If this is a non-zero value, abort_on_sync should be set to 0.
*/
#define IAXXX_I2S_I2S0_FS_ALIGN_FS_GEN_COUNT_MASK 0x03ff0000
#define IAXXX_I2S_I2S0_FS_ALIGN_FS_GEN_COUNT_RESET_VAL 0x0
#define IAXXX_I2S_I2S0_FS_ALIGN_FS_GEN_COUNT_POS 16
#define IAXXX_I2S_I2S0_FS_ALIGN_FS_GEN_COUNT_SIZE 10
#define IAXXX_I2S_I2S0_FS_ALIGN_FS_GEN_COUNT_DECL (25:16)

/*** I2S_I2S1_HL (0x5004a020) ***/
/* I2S1 H/L Divider Register. */
#define IAXXX_I2S_I2S1_HL_ADDR (0x5004a020)
#define IAXXX_I2S_I2S1_HL_MASK_VAL 0x0000001f
#define IAXXX_I2S_I2S1_HL_RMASK_VAL 0x0000001f
#define IAXXX_I2S_I2S1_HL_WMASK_VAL 0x0000001f
#define IAXXX_I2S_I2S1_HL_RESET_VAL 0x00000001

/*
* Period of divided clock, in terms of PLL clock. 1=passthrough.
*/
#define IAXXX_I2S_I2S1_HL_P_MASK 0x0000000f
#define IAXXX_I2S_I2S1_HL_P_RESET_VAL 0x1
#define IAXXX_I2S_I2S1_HL_P_POS 0
#define IAXXX_I2S_I2S1_HL_P_SIZE 4
#define IAXXX_I2S_I2S1_HL_P_DECL (3:0)

/*
* Enable for H/L Divider.
*/
#define IAXXX_I2S_I2S1_HL_EN_MASK 0x00000010
#define IAXXX_I2S_I2S1_HL_EN_RESET_VAL 0x0
#define IAXXX_I2S_I2S1_HL_EN_POS 4
#define IAXXX_I2S_I2S1_HL_EN_SIZE 1
#define IAXXX_I2S_I2S1_HL_EN_DECL 4

/*** I2S_I2S1_NR (0x5004a024) ***/
/* I2S1 N/R Divider Register. */
#define IAXXX_I2S_I2S1_NR_ADDR (0x5004a024)
#define IAXXX_I2S_I2S1_NR_MASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S1_NR_RMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S1_NR_WMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S1_NR_RESET_VAL 0x01000001

/*
* ASIC: outclk = (N/D)*inclk
* FPGA: outclk = (N/2D)*inclk
*/
#define IAXXX_I2S_I2S1_NR_N_MASK 0x00000fff
#define IAXXX_I2S_I2S1_NR_N_RESET_VAL 0x1
#define IAXXX_I2S_I2S1_NR_N_POS 0
#define IAXXX_I2S_I2S1_NR_N_SIZE 12
#define IAXXX_I2S_I2S1_NR_N_DECL (11:0)

/*
* R= (2^12 -D + N)
*/
#define IAXXX_I2S_I2S1_NR_R_MASK 0x01fff000
#define IAXXX_I2S_I2S1_NR_R_RESET_VAL 0x1000
#define IAXXX_I2S_I2S1_NR_R_POS 12
#define IAXXX_I2S_I2S1_NR_R_SIZE 13
#define IAXXX_I2S_I2S1_NR_R_DECL (24:12)

/*
* Enable for N/R Divider.
*/
#define IAXXX_I2S_I2S1_NR_EN_MASK 0x02000000
#define IAXXX_I2S_I2S1_NR_EN_RESET_VAL 0x0
#define IAXXX_I2S_I2S1_NR_EN_POS 25
#define IAXXX_I2S_I2S1_NR_EN_SIZE 1
#define IAXXX_I2S_I2S1_NR_EN_DECL 25

/*** I2S_I2S1_GEN_CFG (0x5004a028) ***/
/* I2S1 Gen Config Register. */
#define IAXXX_I2S_I2S1_GEN_CFG_ADDR (0x5004a028)
#define IAXXX_I2S_I2S1_GEN_CFG_MASK_VAL 0x001fffff
#define IAXXX_I2S_I2S1_GEN_CFG_RMASK_VAL 0x001fffff
#define IAXXX_I2S_I2S1_GEN_CFG_WMASK_VAL 0x001fffff
#define IAXXX_I2S_I2S1_GEN_CFG_RESET_VAL 0x00000000

/*
* 0: External FS is active low. Next I2S clock cycle begins after receiving
* falling edge of PCM input FS.
* 1: External FS is active high. Next I2S clock cycle begins after receiving
* rising edge of PCM input FS.
*/
#define IAXXX_I2S_I2S1_GEN_CFG_PCM_FS_POL_MASK 0x00000001
#define IAXXX_I2S_I2S1_GEN_CFG_PCM_FS_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S1_GEN_CFG_PCM_FS_POL_POS 0
#define IAXXX_I2S_I2S1_GEN_CFG_PCM_FS_POL_SIZE 1
#define IAXXX_I2S_I2S1_GEN_CFG_PCM_FS_POL_DECL 0

/*
* 0: Active low I2S CLK. FS changes relative to negative edge of I2S CLK.
* 1: Active high I2S CLK. FS changes relative to positive edge of I2S CLK.
*/
#define IAXXX_I2S_I2S1_GEN_CFG_I2S_CLK_POL_MASK 0x00000002
#define IAXXX_I2S_I2S1_GEN_CFG_I2S_CLK_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S1_GEN_CFG_I2S_CLK_POL_POS 1
#define IAXXX_I2S_I2S1_GEN_CFG_I2S_CLK_POL_SIZE 1
#define IAXXX_I2S_I2S1_GEN_CFG_I2S_CLK_POL_DECL 1

/*
* 0: Active low I2S FS. FS goes low in first I2S clock (position within
* clock based on fs_active_edge),
*    goes high in fs_valid clocks (position based on fs_inactive_edge).
* 1: Active high I2S FS. FS goes high in first I2S clock (position within
* clock based on fs_active_edge),
*    goes low in fs_valid clocks (position based on fs_inactive_edge).
*/
#define IAXXX_I2S_I2S1_GEN_CFG_I2S_FS_POL_MASK 0x00000004
#define IAXXX_I2S_I2S1_GEN_CFG_I2S_FS_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S1_GEN_CFG_I2S_FS_POL_POS 2
#define IAXXX_I2S_I2S1_GEN_CFG_I2S_FS_POL_SIZE 1
#define IAXXX_I2S_I2S1_GEN_CFG_I2S_FS_POL_DECL 2

/*
* 0: In Pseudo Master Mode, an input sync only starts a new FS cycle after
* the previous one has finished.
*    Syncs in the middle of an FS cycle are ignored.
* 1: In Pseudo Master Mode, any input sync finishes the current FS cycle and
* starts a new one.
*    If fs_gen_count is non-zero, this mode should not be used.
*/
#define IAXXX_I2S_I2S1_GEN_CFG_ABORT_ON_SYNC_MASK 0x00000008
#define IAXXX_I2S_I2S1_GEN_CFG_ABORT_ON_SYNC_RESET_VAL 0x0
#define IAXXX_I2S_I2S1_GEN_CFG_ABORT_ON_SYNC_POS 3
#define IAXXX_I2S_I2S1_GEN_CFG_ABORT_ON_SYNC_SIZE 1
#define IAXXX_I2S_I2S1_GEN_CFG_ABORT_ON_SYNC_DECL 3

/*
* Number of I2S clocks per FS Frame. Expressed as an N-1 value.
*/
#define IAXXX_I2S_I2S1_GEN_CFG_I2S_CLKS_PER_FS_MASK 0x00000ff0
#define IAXXX_I2S_I2S1_GEN_CFG_I2S_CLKS_PER_FS_RESET_VAL 0x0
#define IAXXX_I2S_I2S1_GEN_CFG_I2S_CLKS_PER_FS_POS 4
#define IAXXX_I2S_I2S1_GEN_CFG_I2S_CLKS_PER_FS_SIZE 8
#define IAXXX_I2S_I2S1_GEN_CFG_I2S_CLKS_PER_FS_DECL (11:4)

/*
* Number of I2S clocks for which FS should be valid. Polarity of valid
* region defined by i2s_fs_pol.
*/
#define IAXXX_I2S_I2S1_GEN_CFG_FS_VALID_MASK 0x000ff000
#define IAXXX_I2S_I2S1_GEN_CFG_FS_VALID_RESET_VAL 0x0
#define IAXXX_I2S_I2S1_GEN_CFG_FS_VALID_POS 12
#define IAXXX_I2S_I2S1_GEN_CFG_FS_VALID_SIZE 8
#define IAXXX_I2S_I2S1_GEN_CFG_FS_VALID_DECL (19:12)

/*
* 0: Pseudo Master Mode. Sync to edge of external FS.
* 1: Master mode. Generate FS & CLK independently.
*/
#define IAXXX_I2S_I2S1_GEN_CFG_GEN_MASTER_MASK 0x00100000
#define IAXXX_I2S_I2S1_GEN_CFG_GEN_MASTER_RESET_VAL 0x0
#define IAXXX_I2S_I2S1_GEN_CFG_GEN_MASTER_POS 20
#define IAXXX_I2S_I2S1_GEN_CFG_GEN_MASTER_SIZE 1
#define IAXXX_I2S_I2S1_GEN_CFG_GEN_MASTER_DECL 20

/*** I2S_I2S1_CLK_CTRL (0x5004a02c) ***/
/* I2S1 Gen Clock Control Register. */
#define IAXXX_I2S_I2S1_CLK_CTRL_ADDR (0x5004a02c)
#define IAXXX_I2S_I2S1_CLK_CTRL_MASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S1_CLK_CTRL_RMASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S1_CLK_CTRL_WMASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S1_CLK_CTRL_RESET_VAL 0x00000000

/*
* Period of I2S Clock, in oversample clocks. Expressed as an N-1 value.
*/
#define IAXXX_I2S_I2S1_CLK_CTRL_I2S_CLK_PERIOD_MASK 0x000000ff
#define IAXXX_I2S_I2S1_CLK_CTRL_I2S_CLK_PERIOD_RESET_VAL 0x0
#define IAXXX_I2S_I2S1_CLK_CTRL_I2S_CLK_PERIOD_POS 0
#define IAXXX_I2S_I2S1_CLK_CTRL_I2S_CLK_PERIOD_SIZE 8
#define IAXXX_I2S_I2S1_CLK_CTRL_I2S_CLK_PERIOD_DECL (7:0)

/*
* Number of oversample clocks the I2S Clock is low. Expressed as an N-1
* value.
*/
#define IAXXX_I2S_I2S1_CLK_CTRL_I2S_CLK_LOW_MASK 0x0000ff00
#define IAXXX_I2S_I2S1_CLK_CTRL_I2S_CLK_LOW_RESET_VAL 0x0
#define IAXXX_I2S_I2S1_CLK_CTRL_I2S_CLK_LOW_POS 8
#define IAXXX_I2S_I2S1_CLK_CTRL_I2S_CLK_LOW_SIZE 8
#define IAXXX_I2S_I2S1_CLK_CTRL_I2S_CLK_LOW_DECL (15:8)

/*** I2S_I2S1_FS_ALIGN (0x5004a030) ***/
/* I2S1 Gen FS Align Register. */
#define IAXXX_I2S_I2S1_FS_ALIGN_ADDR (0x5004a030)
#define IAXXX_I2S_I2S1_FS_ALIGN_MASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S1_FS_ALIGN_RMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S1_FS_ALIGN_WMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S1_FS_ALIGN_RESET_VAL 0x00000000

/*
* Position (in oversample clocks) of the active edge of FS relative to the
* start of the frame.
* A position of 0 is only allowed in I2S Master Mode and places the active
* edge of FS coincident
* with the start of the I2S clock cycle. Whether this is a negative or
* positive edge depends upon
* the setting of i2s_fs_pol.
*/
#define IAXXX_I2S_I2S1_FS_ALIGN_FS_ALIGN_ACTIVE_MASK 0x000000ff
#define IAXXX_I2S_I2S1_FS_ALIGN_FS_ALIGN_ACTIVE_RESET_VAL 0x0
#define IAXXX_I2S_I2S1_FS_ALIGN_FS_ALIGN_ACTIVE_POS 0
#define IAXXX_I2S_I2S1_FS_ALIGN_FS_ALIGN_ACTIVE_SIZE 8
#define IAXXX_I2S_I2S1_FS_ALIGN_FS_ALIGN_ACTIVE_DECL (7:0)

/*
* Position (in oversample clocks) of the inactive edge of FS relative to the
* start of the I2S
* clock cycle defined by fs_valid. A position of 0 is only allowed in I2S
* Master Mode and places
* the active edge of FS coincident with the start of the I2S clock cycle.
* Whether this is a negative
* or positive edge depends upon the setting of i2s_fs_pol.
*/
#define IAXXX_I2S_I2S1_FS_ALIGN_FS_ALIGN_INACTIVE_MASK 0x0000ff00
#define IAXXX_I2S_I2S1_FS_ALIGN_FS_ALIGN_INACTIVE_RESET_VAL 0x0
#define IAXXX_I2S_I2S1_FS_ALIGN_FS_ALIGN_INACTIVE_POS 8
#define IAXXX_I2S_I2S1_FS_ALIGN_FS_ALIGN_INACTIVE_SIZE 8
#define IAXXX_I2S_I2S1_FS_ALIGN_FS_ALIGN_INACTIVE_DECL (15:8)

/*
* Generate this many FS cycles after receiving a PCM_FS. Expressed as an N-1
* value.
* If this is a non-zero value, abort_on_sync should be set to 0.
*/
#define IAXXX_I2S_I2S1_FS_ALIGN_FS_GEN_COUNT_MASK 0x03ff0000
#define IAXXX_I2S_I2S1_FS_ALIGN_FS_GEN_COUNT_RESET_VAL 0x0
#define IAXXX_I2S_I2S1_FS_ALIGN_FS_GEN_COUNT_POS 16
#define IAXXX_I2S_I2S1_FS_ALIGN_FS_GEN_COUNT_SIZE 10
#define IAXXX_I2S_I2S1_FS_ALIGN_FS_GEN_COUNT_DECL (25:16)

/*** I2S_I2S2_HL (0x5004a040) ***/
/* I2S2 H/L Divider Register. */
#define IAXXX_I2S_I2S2_HL_ADDR (0x5004a040)
#define IAXXX_I2S_I2S2_HL_MASK_VAL 0x0000001f
#define IAXXX_I2S_I2S2_HL_RMASK_VAL 0x0000001f
#define IAXXX_I2S_I2S2_HL_WMASK_VAL 0x0000001f
#define IAXXX_I2S_I2S2_HL_RESET_VAL 0x00000001

/*
* Period of divided clock, in terms of PLL clock. 1=passthrough.
*/
#define IAXXX_I2S_I2S2_HL_P_MASK 0x0000000f
#define IAXXX_I2S_I2S2_HL_P_RESET_VAL 0x1
#define IAXXX_I2S_I2S2_HL_P_POS 0
#define IAXXX_I2S_I2S2_HL_P_SIZE 4
#define IAXXX_I2S_I2S2_HL_P_DECL (3:0)

/*
* Enable for H/L Divider.
*/
#define IAXXX_I2S_I2S2_HL_EN_MASK 0x00000010
#define IAXXX_I2S_I2S2_HL_EN_RESET_VAL 0x0
#define IAXXX_I2S_I2S2_HL_EN_POS 4
#define IAXXX_I2S_I2S2_HL_EN_SIZE 1
#define IAXXX_I2S_I2S2_HL_EN_DECL 4

/*** I2S_I2S2_NR (0x5004a044) ***/
/* I2S2 N/R Divider Register. */
#define IAXXX_I2S_I2S2_NR_ADDR (0x5004a044)
#define IAXXX_I2S_I2S2_NR_MASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S2_NR_RMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S2_NR_WMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S2_NR_RESET_VAL 0x01000001

/*
* ASIC: outclk = (N/D)*inclk
* FPGA: outclk = (N/2D)*inclk
*/
#define IAXXX_I2S_I2S2_NR_N_MASK 0x00000fff
#define IAXXX_I2S_I2S2_NR_N_RESET_VAL 0x1
#define IAXXX_I2S_I2S2_NR_N_POS 0
#define IAXXX_I2S_I2S2_NR_N_SIZE 12
#define IAXXX_I2S_I2S2_NR_N_DECL (11:0)

/*
* R= (2^12 -D + N)
*/
#define IAXXX_I2S_I2S2_NR_R_MASK 0x01fff000
#define IAXXX_I2S_I2S2_NR_R_RESET_VAL 0x1000
#define IAXXX_I2S_I2S2_NR_R_POS 12
#define IAXXX_I2S_I2S2_NR_R_SIZE 13
#define IAXXX_I2S_I2S2_NR_R_DECL (24:12)

/*
* Enable for N/R Divider.
*/
#define IAXXX_I2S_I2S2_NR_EN_MASK 0x02000000
#define IAXXX_I2S_I2S2_NR_EN_RESET_VAL 0x0
#define IAXXX_I2S_I2S2_NR_EN_POS 25
#define IAXXX_I2S_I2S2_NR_EN_SIZE 1
#define IAXXX_I2S_I2S2_NR_EN_DECL 25

/*** I2S_I2S2_GEN_CFG (0x5004a048) ***/
/* I2S2 Gen Config Register. */
#define IAXXX_I2S_I2S2_GEN_CFG_ADDR (0x5004a048)
#define IAXXX_I2S_I2S2_GEN_CFG_MASK_VAL 0x001fffff
#define IAXXX_I2S_I2S2_GEN_CFG_RMASK_VAL 0x001fffff
#define IAXXX_I2S_I2S2_GEN_CFG_WMASK_VAL 0x001fffff
#define IAXXX_I2S_I2S2_GEN_CFG_RESET_VAL 0x00000000

/*
* 0: External FS is active low. Next I2S clock cycle begins after receiving
* falling edge of PCM input FS.
* 1: External FS is active high. Next I2S clock cycle begins after receiving
* rising edge of PCM input FS.
*/
#define IAXXX_I2S_I2S2_GEN_CFG_PCM_FS_POL_MASK 0x00000001
#define IAXXX_I2S_I2S2_GEN_CFG_PCM_FS_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S2_GEN_CFG_PCM_FS_POL_POS 0
#define IAXXX_I2S_I2S2_GEN_CFG_PCM_FS_POL_SIZE 1
#define IAXXX_I2S_I2S2_GEN_CFG_PCM_FS_POL_DECL 0

/*
* 0: Active low I2S CLK. FS changes relative to negative edge of I2S CLK.
* 1: Active high I2S CLK. FS changes relative to positive edge of I2S CLK.
*/
#define IAXXX_I2S_I2S2_GEN_CFG_I2S_CLK_POL_MASK 0x00000002
#define IAXXX_I2S_I2S2_GEN_CFG_I2S_CLK_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S2_GEN_CFG_I2S_CLK_POL_POS 1
#define IAXXX_I2S_I2S2_GEN_CFG_I2S_CLK_POL_SIZE 1
#define IAXXX_I2S_I2S2_GEN_CFG_I2S_CLK_POL_DECL 1

/*
* 0: Active low I2S FS. FS goes low in first I2S clock (position within
* clock based on fs_active_edge),
*    goes high in fs_valid clocks (position based on fs_inactive_edge).
* 1: Active high I2S FS. FS goes high in first I2S clock (position within
* clock based on fs_active_edge),
*    goes low in fs_valid clocks (position based on fs_inactive_edge).
*/
#define IAXXX_I2S_I2S2_GEN_CFG_I2S_FS_POL_MASK 0x00000004
#define IAXXX_I2S_I2S2_GEN_CFG_I2S_FS_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S2_GEN_CFG_I2S_FS_POL_POS 2
#define IAXXX_I2S_I2S2_GEN_CFG_I2S_FS_POL_SIZE 1
#define IAXXX_I2S_I2S2_GEN_CFG_I2S_FS_POL_DECL 2

/*
* 0: In Pseudo Master Mode, an input sync only starts a new FS cycle after
* the previous one has finished.
*    Syncs in the middle of an FS cycle are ignored.
* 1: In Pseudo Master Mode, any input sync finishes the current FS cycle and
* starts a new one.
*    If fs_gen_count is non-zero, this mode should not be used.
*/
#define IAXXX_I2S_I2S2_GEN_CFG_ABORT_ON_SYNC_MASK 0x00000008
#define IAXXX_I2S_I2S2_GEN_CFG_ABORT_ON_SYNC_RESET_VAL 0x0
#define IAXXX_I2S_I2S2_GEN_CFG_ABORT_ON_SYNC_POS 3
#define IAXXX_I2S_I2S2_GEN_CFG_ABORT_ON_SYNC_SIZE 1
#define IAXXX_I2S_I2S2_GEN_CFG_ABORT_ON_SYNC_DECL 3

/*
* Number of I2S clocks per FS Frame. Expressed as an N-1 value.
*/
#define IAXXX_I2S_I2S2_GEN_CFG_I2S_CLKS_PER_FS_MASK 0x00000ff0
#define IAXXX_I2S_I2S2_GEN_CFG_I2S_CLKS_PER_FS_RESET_VAL 0x0
#define IAXXX_I2S_I2S2_GEN_CFG_I2S_CLKS_PER_FS_POS 4
#define IAXXX_I2S_I2S2_GEN_CFG_I2S_CLKS_PER_FS_SIZE 8
#define IAXXX_I2S_I2S2_GEN_CFG_I2S_CLKS_PER_FS_DECL (11:4)

/*
* Number of I2S clocks for which FS should be valid. Polarity of valid
* region defined by i2s_fs_pol.
*/
#define IAXXX_I2S_I2S2_GEN_CFG_FS_VALID_MASK 0x000ff000
#define IAXXX_I2S_I2S2_GEN_CFG_FS_VALID_RESET_VAL 0x0
#define IAXXX_I2S_I2S2_GEN_CFG_FS_VALID_POS 12
#define IAXXX_I2S_I2S2_GEN_CFG_FS_VALID_SIZE 8
#define IAXXX_I2S_I2S2_GEN_CFG_FS_VALID_DECL (19:12)

/*
* 0: Pseudo Master Mode. Sync to edge of external FS.
* 1: Master mode. Generate FS & CLK independently.
*/
#define IAXXX_I2S_I2S2_GEN_CFG_GEN_MASTER_MASK 0x00100000
#define IAXXX_I2S_I2S2_GEN_CFG_GEN_MASTER_RESET_VAL 0x0
#define IAXXX_I2S_I2S2_GEN_CFG_GEN_MASTER_POS 20
#define IAXXX_I2S_I2S2_GEN_CFG_GEN_MASTER_SIZE 1
#define IAXXX_I2S_I2S2_GEN_CFG_GEN_MASTER_DECL 20

/*** I2S_I2S2_CLK_CTRL (0x5004a04c) ***/
/* I2S2 Gen Clock Control Register. */
#define IAXXX_I2S_I2S2_CLK_CTRL_ADDR (0x5004a04c)
#define IAXXX_I2S_I2S2_CLK_CTRL_MASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S2_CLK_CTRL_RMASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S2_CLK_CTRL_WMASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S2_CLK_CTRL_RESET_VAL 0x00000000

/*
* Period of I2S Clock, in oversample clocks. Expressed as an N-1 value.
*/
#define IAXXX_I2S_I2S2_CLK_CTRL_I2S_CLK_PERIOD_MASK 0x000000ff
#define IAXXX_I2S_I2S2_CLK_CTRL_I2S_CLK_PERIOD_RESET_VAL 0x0
#define IAXXX_I2S_I2S2_CLK_CTRL_I2S_CLK_PERIOD_POS 0
#define IAXXX_I2S_I2S2_CLK_CTRL_I2S_CLK_PERIOD_SIZE 8
#define IAXXX_I2S_I2S2_CLK_CTRL_I2S_CLK_PERIOD_DECL (7:0)

/*
* Number of oversample clocks the I2S Clock is low. Expressed as an N-1
* value.
*/
#define IAXXX_I2S_I2S2_CLK_CTRL_I2S_CLK_LOW_MASK 0x0000ff00
#define IAXXX_I2S_I2S2_CLK_CTRL_I2S_CLK_LOW_RESET_VAL 0x0
#define IAXXX_I2S_I2S2_CLK_CTRL_I2S_CLK_LOW_POS 8
#define IAXXX_I2S_I2S2_CLK_CTRL_I2S_CLK_LOW_SIZE 8
#define IAXXX_I2S_I2S2_CLK_CTRL_I2S_CLK_LOW_DECL (15:8)

/*** I2S_I2S2_FS_ALIGN (0x5004a050) ***/
/* I2S2 Gen FS Align Register. */
#define IAXXX_I2S_I2S2_FS_ALIGN_ADDR (0x5004a050)
#define IAXXX_I2S_I2S2_FS_ALIGN_MASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S2_FS_ALIGN_RMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S2_FS_ALIGN_WMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S2_FS_ALIGN_RESET_VAL 0x00000000

/*
* Position (in oversample clocks) of the active edge of FS relative to the
* start of the frame.
* A position of 0 is only allowed in I2S Master Mode and places the active
* edge of FS coincident
* with the start of the I2S clock cycle. Whether this is a negative or
* positive edge depends upon
* the setting of i2s_fs_pol.
*/
#define IAXXX_I2S_I2S2_FS_ALIGN_FS_ALIGN_ACTIVE_MASK 0x000000ff
#define IAXXX_I2S_I2S2_FS_ALIGN_FS_ALIGN_ACTIVE_RESET_VAL 0x0
#define IAXXX_I2S_I2S2_FS_ALIGN_FS_ALIGN_ACTIVE_POS 0
#define IAXXX_I2S_I2S2_FS_ALIGN_FS_ALIGN_ACTIVE_SIZE 8
#define IAXXX_I2S_I2S2_FS_ALIGN_FS_ALIGN_ACTIVE_DECL (7:0)

/*
* Position (in oversample clocks) of the inactive edge of FS relative to the
* start of the I2S
* clock cycle defined by fs_valid. A position of 0 is only allowed in I2S
* Master Mode and places
* the active edge of FS coincident with the start of the I2S clock cycle.
* Whether this is a negative
* or positive edge depends upon the setting of i2s_fs_pol.
*/
#define IAXXX_I2S_I2S2_FS_ALIGN_FS_ALIGN_INACTIVE_MASK 0x0000ff00
#define IAXXX_I2S_I2S2_FS_ALIGN_FS_ALIGN_INACTIVE_RESET_VAL 0x0
#define IAXXX_I2S_I2S2_FS_ALIGN_FS_ALIGN_INACTIVE_POS 8
#define IAXXX_I2S_I2S2_FS_ALIGN_FS_ALIGN_INACTIVE_SIZE 8
#define IAXXX_I2S_I2S2_FS_ALIGN_FS_ALIGN_INACTIVE_DECL (15:8)

/*
* Generate this many FS cycles after receiving a PCM_FS. Expressed as an N-1
* value.
* If this is a non-zero value, abort_on_sync should be set to 0.
*/
#define IAXXX_I2S_I2S2_FS_ALIGN_FS_GEN_COUNT_MASK 0x03ff0000
#define IAXXX_I2S_I2S2_FS_ALIGN_FS_GEN_COUNT_RESET_VAL 0x0
#define IAXXX_I2S_I2S2_FS_ALIGN_FS_GEN_COUNT_POS 16
#define IAXXX_I2S_I2S2_FS_ALIGN_FS_GEN_COUNT_SIZE 10
#define IAXXX_I2S_I2S2_FS_ALIGN_FS_GEN_COUNT_DECL (25:16)

/*** I2S_I2S3_HL (0x5004a060) ***/
/* I2S3 H/L Divider Register. */
#define IAXXX_I2S_I2S3_HL_ADDR (0x5004a060)
#define IAXXX_I2S_I2S3_HL_MASK_VAL 0x0000001f
#define IAXXX_I2S_I2S3_HL_RMASK_VAL 0x0000001f
#define IAXXX_I2S_I2S3_HL_WMASK_VAL 0x0000001f
#define IAXXX_I2S_I2S3_HL_RESET_VAL 0x00000001

/*
* Period of divided clock, in terms of PLL clock. 1=passthrough.
*/
#define IAXXX_I2S_I2S3_HL_P_MASK 0x0000000f
#define IAXXX_I2S_I2S3_HL_P_RESET_VAL 0x1
#define IAXXX_I2S_I2S3_HL_P_POS 0
#define IAXXX_I2S_I2S3_HL_P_SIZE 4
#define IAXXX_I2S_I2S3_HL_P_DECL (3:0)

/*
* Enable for H/L Divider.
*/
#define IAXXX_I2S_I2S3_HL_EN_MASK 0x00000010
#define IAXXX_I2S_I2S3_HL_EN_RESET_VAL 0x0
#define IAXXX_I2S_I2S3_HL_EN_POS 4
#define IAXXX_I2S_I2S3_HL_EN_SIZE 1
#define IAXXX_I2S_I2S3_HL_EN_DECL 4

/*** I2S_I2S3_NR (0x5004a064) ***/
/* I2S3 N/R Divider Register. */
#define IAXXX_I2S_I2S3_NR_ADDR (0x5004a064)
#define IAXXX_I2S_I2S3_NR_MASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S3_NR_RMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S3_NR_WMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S3_NR_RESET_VAL 0x01000001

/*
* ASIC: outclk = (N/D)*inclk
* FPGA: outclk = (N/2D)*inclk
*/
#define IAXXX_I2S_I2S3_NR_N_MASK 0x00000fff
#define IAXXX_I2S_I2S3_NR_N_RESET_VAL 0x1
#define IAXXX_I2S_I2S3_NR_N_POS 0
#define IAXXX_I2S_I2S3_NR_N_SIZE 12
#define IAXXX_I2S_I2S3_NR_N_DECL (11:0)

/*
* R= (2^12 -D + N)
*/
#define IAXXX_I2S_I2S3_NR_R_MASK 0x01fff000
#define IAXXX_I2S_I2S3_NR_R_RESET_VAL 0x1000
#define IAXXX_I2S_I2S3_NR_R_POS 12
#define IAXXX_I2S_I2S3_NR_R_SIZE 13
#define IAXXX_I2S_I2S3_NR_R_DECL (24:12)

/*
* Enable for N/R Divider.
*/
#define IAXXX_I2S_I2S3_NR_EN_MASK 0x02000000
#define IAXXX_I2S_I2S3_NR_EN_RESET_VAL 0x0
#define IAXXX_I2S_I2S3_NR_EN_POS 25
#define IAXXX_I2S_I2S3_NR_EN_SIZE 1
#define IAXXX_I2S_I2S3_NR_EN_DECL 25

/*** I2S_I2S3_GEN_CFG (0x5004a068) ***/
/* I2S3 Gen Config Register. */
#define IAXXX_I2S_I2S3_GEN_CFG_ADDR (0x5004a068)
#define IAXXX_I2S_I2S3_GEN_CFG_MASK_VAL 0x001fffff
#define IAXXX_I2S_I2S3_GEN_CFG_RMASK_VAL 0x001fffff
#define IAXXX_I2S_I2S3_GEN_CFG_WMASK_VAL 0x001fffff
#define IAXXX_I2S_I2S3_GEN_CFG_RESET_VAL 0x00000000

/*
* 0: External FS is active low. Next I2S clock cycle begins after receiving
* falling edge of PCM input FS.
* 1: External FS is active high. Next I2S clock cycle begins after receiving
* rising edge of PCM input FS.
*/
#define IAXXX_I2S_I2S3_GEN_CFG_PCM_FS_POL_MASK 0x00000001
#define IAXXX_I2S_I2S3_GEN_CFG_PCM_FS_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S3_GEN_CFG_PCM_FS_POL_POS 0
#define IAXXX_I2S_I2S3_GEN_CFG_PCM_FS_POL_SIZE 1
#define IAXXX_I2S_I2S3_GEN_CFG_PCM_FS_POL_DECL 0

/*
* 0: Active low I2S CLK. FS changes relative to negative edge of I2S CLK.
* 1: Active high I2S CLK. FS changes relative to positive edge of I2S CLK.
*/
#define IAXXX_I2S_I2S3_GEN_CFG_I2S_CLK_POL_MASK 0x00000002
#define IAXXX_I2S_I2S3_GEN_CFG_I2S_CLK_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S3_GEN_CFG_I2S_CLK_POL_POS 1
#define IAXXX_I2S_I2S3_GEN_CFG_I2S_CLK_POL_SIZE 1
#define IAXXX_I2S_I2S3_GEN_CFG_I2S_CLK_POL_DECL 1

/*
* 0: Active low I2S FS. FS goes low in first I2S clock (position within
* clock based on fs_active_edge),
*    goes high in fs_valid clocks (position based on fs_inactive_edge).
* 1: Active high I2S FS. FS goes high in first I2S clock (position within
* clock based on fs_active_edge),
*    goes low in fs_valid clocks (position based on fs_inactive_edge).
*/
#define IAXXX_I2S_I2S3_GEN_CFG_I2S_FS_POL_MASK 0x00000004
#define IAXXX_I2S_I2S3_GEN_CFG_I2S_FS_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S3_GEN_CFG_I2S_FS_POL_POS 2
#define IAXXX_I2S_I2S3_GEN_CFG_I2S_FS_POL_SIZE 1
#define IAXXX_I2S_I2S3_GEN_CFG_I2S_FS_POL_DECL 2

/*
* 0: In Pseudo Master Mode, an input sync only starts a new FS cycle after
* the previous one has finished.
*    Syncs in the middle of an FS cycle are ignored.
* 1: In Pseudo Master Mode, any input sync finishes the current FS cycle and
* starts a new one.
*    If fs_gen_count is non-zero, this mode should not be used.
*/
#define IAXXX_I2S_I2S3_GEN_CFG_ABORT_ON_SYNC_MASK 0x00000008
#define IAXXX_I2S_I2S3_GEN_CFG_ABORT_ON_SYNC_RESET_VAL 0x0
#define IAXXX_I2S_I2S3_GEN_CFG_ABORT_ON_SYNC_POS 3
#define IAXXX_I2S_I2S3_GEN_CFG_ABORT_ON_SYNC_SIZE 1
#define IAXXX_I2S_I2S3_GEN_CFG_ABORT_ON_SYNC_DECL 3

/*
* Number of I2S clocks per FS Frame. Expressed as an N-1 value.
*/
#define IAXXX_I2S_I2S3_GEN_CFG_I2S_CLKS_PER_FS_MASK 0x00000ff0
#define IAXXX_I2S_I2S3_GEN_CFG_I2S_CLKS_PER_FS_RESET_VAL 0x0
#define IAXXX_I2S_I2S3_GEN_CFG_I2S_CLKS_PER_FS_POS 4
#define IAXXX_I2S_I2S3_GEN_CFG_I2S_CLKS_PER_FS_SIZE 8
#define IAXXX_I2S_I2S3_GEN_CFG_I2S_CLKS_PER_FS_DECL (11:4)

/*
* Number of I2S clocks for which FS should be valid. Polarity of valid
* region defined by i2s_fs_pol.
*/
#define IAXXX_I2S_I2S3_GEN_CFG_FS_VALID_MASK 0x000ff000
#define IAXXX_I2S_I2S3_GEN_CFG_FS_VALID_RESET_VAL 0x0
#define IAXXX_I2S_I2S3_GEN_CFG_FS_VALID_POS 12
#define IAXXX_I2S_I2S3_GEN_CFG_FS_VALID_SIZE 8
#define IAXXX_I2S_I2S3_GEN_CFG_FS_VALID_DECL (19:12)

/*
* 0: Pseudo Master Mode. Sync to edge of external FS.
* 1: Master mode. Generate FS & CLK independently.
*/
#define IAXXX_I2S_I2S3_GEN_CFG_GEN_MASTER_MASK 0x00100000
#define IAXXX_I2S_I2S3_GEN_CFG_GEN_MASTER_RESET_VAL 0x0
#define IAXXX_I2S_I2S3_GEN_CFG_GEN_MASTER_POS 20
#define IAXXX_I2S_I2S3_GEN_CFG_GEN_MASTER_SIZE 1
#define IAXXX_I2S_I2S3_GEN_CFG_GEN_MASTER_DECL 20

/*** I2S_I2S3_CLK_CTRL (0x5004a06c) ***/
/* I2S3 Gen Clock Control Register. */
#define IAXXX_I2S_I2S3_CLK_CTRL_ADDR (0x5004a06c)
#define IAXXX_I2S_I2S3_CLK_CTRL_MASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S3_CLK_CTRL_RMASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S3_CLK_CTRL_WMASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S3_CLK_CTRL_RESET_VAL 0x00000000

/*
* Period of I2S Clock, in oversample clocks. Expressed as an N-1 value.
*/
#define IAXXX_I2S_I2S3_CLK_CTRL_I2S_CLK_PERIOD_MASK 0x000000ff
#define IAXXX_I2S_I2S3_CLK_CTRL_I2S_CLK_PERIOD_RESET_VAL 0x0
#define IAXXX_I2S_I2S3_CLK_CTRL_I2S_CLK_PERIOD_POS 0
#define IAXXX_I2S_I2S3_CLK_CTRL_I2S_CLK_PERIOD_SIZE 8
#define IAXXX_I2S_I2S3_CLK_CTRL_I2S_CLK_PERIOD_DECL (7:0)

/*
* Number of oversample clocks the I2S Clock is low. Expressed as an N-1
* value.
*/
#define IAXXX_I2S_I2S3_CLK_CTRL_I2S_CLK_LOW_MASK 0x0000ff00
#define IAXXX_I2S_I2S3_CLK_CTRL_I2S_CLK_LOW_RESET_VAL 0x0
#define IAXXX_I2S_I2S3_CLK_CTRL_I2S_CLK_LOW_POS 8
#define IAXXX_I2S_I2S3_CLK_CTRL_I2S_CLK_LOW_SIZE 8
#define IAXXX_I2S_I2S3_CLK_CTRL_I2S_CLK_LOW_DECL (15:8)

/*** I2S_I2S3_FS_ALIGN (0x5004a070) ***/
/* I2S3 Gen FS Align Register. */
#define IAXXX_I2S_I2S3_FS_ALIGN_ADDR (0x5004a070)
#define IAXXX_I2S_I2S3_FS_ALIGN_MASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S3_FS_ALIGN_RMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S3_FS_ALIGN_WMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S3_FS_ALIGN_RESET_VAL 0x00000000

/*
* Position (in oversample clocks) of the active edge of FS relative to the
* start of the frame.
* A position of 0 is only allowed in I2S Master Mode and places the active
* edge of FS coincident
* with the start of the I2S clock cycle. Whether this is a negative or
* positive edge depends upon
* the setting of i2s_fs_pol.
*/
#define IAXXX_I2S_I2S3_FS_ALIGN_FS_ALIGN_ACTIVE_MASK 0x000000ff
#define IAXXX_I2S_I2S3_FS_ALIGN_FS_ALIGN_ACTIVE_RESET_VAL 0x0
#define IAXXX_I2S_I2S3_FS_ALIGN_FS_ALIGN_ACTIVE_POS 0
#define IAXXX_I2S_I2S3_FS_ALIGN_FS_ALIGN_ACTIVE_SIZE 8
#define IAXXX_I2S_I2S3_FS_ALIGN_FS_ALIGN_ACTIVE_DECL (7:0)

/*
* Position (in oversample clocks) of the inactive edge of FS relative to the
* start of the I2S
* clock cycle defined by fs_valid. A position of 0 is only allowed in I2S
* Master Mode and places
* the active edge of FS coincident with the start of the I2S clock cycle.
* Whether this is a negative
* or positive edge depends upon the setting of i2s_fs_pol.
*/
#define IAXXX_I2S_I2S3_FS_ALIGN_FS_ALIGN_INACTIVE_MASK 0x0000ff00
#define IAXXX_I2S_I2S3_FS_ALIGN_FS_ALIGN_INACTIVE_RESET_VAL 0x0
#define IAXXX_I2S_I2S3_FS_ALIGN_FS_ALIGN_INACTIVE_POS 8
#define IAXXX_I2S_I2S3_FS_ALIGN_FS_ALIGN_INACTIVE_SIZE 8
#define IAXXX_I2S_I2S3_FS_ALIGN_FS_ALIGN_INACTIVE_DECL (15:8)

/*
* Generate this many FS cycles after receiving a PCM_FS. Expressed as an N-1
* value.
* If this is a non-zero value, abort_on_sync should be set to 0.
*/
#define IAXXX_I2S_I2S3_FS_ALIGN_FS_GEN_COUNT_MASK 0x03ff0000
#define IAXXX_I2S_I2S3_FS_ALIGN_FS_GEN_COUNT_RESET_VAL 0x0
#define IAXXX_I2S_I2S3_FS_ALIGN_FS_GEN_COUNT_POS 16
#define IAXXX_I2S_I2S3_FS_ALIGN_FS_GEN_COUNT_SIZE 10
#define IAXXX_I2S_I2S3_FS_ALIGN_FS_GEN_COUNT_DECL (25:16)

/*** I2S_I2S4_HL (0x5004a080) ***/
/* I2S4 H/L Divider Register. */
#define IAXXX_I2S_I2S4_HL_ADDR (0x5004a080)
#define IAXXX_I2S_I2S4_HL_MASK_VAL 0x0000001f
#define IAXXX_I2S_I2S4_HL_RMASK_VAL 0x0000001f
#define IAXXX_I2S_I2S4_HL_WMASK_VAL 0x0000001f
#define IAXXX_I2S_I2S4_HL_RESET_VAL 0x00000001

/*
* Period of divided clock, in terms of PLL clock. 1=passthrough.
*/
#define IAXXX_I2S_I2S4_HL_P_MASK 0x0000000f
#define IAXXX_I2S_I2S4_HL_P_RESET_VAL 0x1
#define IAXXX_I2S_I2S4_HL_P_POS 0
#define IAXXX_I2S_I2S4_HL_P_SIZE 4
#define IAXXX_I2S_I2S4_HL_P_DECL (3:0)

/*
* Enable for H/L Divider.
*/
#define IAXXX_I2S_I2S4_HL_EN_MASK 0x00000010
#define IAXXX_I2S_I2S4_HL_EN_RESET_VAL 0x0
#define IAXXX_I2S_I2S4_HL_EN_POS 4
#define IAXXX_I2S_I2S4_HL_EN_SIZE 1
#define IAXXX_I2S_I2S4_HL_EN_DECL 4

/*** I2S_I2S4_NR (0x5004a084) ***/
/* I2S4 N/R Divider Register. */
#define IAXXX_I2S_I2S4_NR_ADDR (0x5004a084)
#define IAXXX_I2S_I2S4_NR_MASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S4_NR_RMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S4_NR_WMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S4_NR_RESET_VAL 0x01000001

/*
* ASIC: outclk = (N/D)*inclk
* FPGA: outclk = (N/2D)*inclk
*/
#define IAXXX_I2S_I2S4_NR_N_MASK 0x00000fff
#define IAXXX_I2S_I2S4_NR_N_RESET_VAL 0x1
#define IAXXX_I2S_I2S4_NR_N_POS 0
#define IAXXX_I2S_I2S4_NR_N_SIZE 12
#define IAXXX_I2S_I2S4_NR_N_DECL (11:0)

/*
* R= (2^12 -D + N)
*/
#define IAXXX_I2S_I2S4_NR_R_MASK 0x01fff000
#define IAXXX_I2S_I2S4_NR_R_RESET_VAL 0x1000
#define IAXXX_I2S_I2S4_NR_R_POS 12
#define IAXXX_I2S_I2S4_NR_R_SIZE 13
#define IAXXX_I2S_I2S4_NR_R_DECL (24:12)

/*
* Enable for N/R Divider.
*/
#define IAXXX_I2S_I2S4_NR_EN_MASK 0x02000000
#define IAXXX_I2S_I2S4_NR_EN_RESET_VAL 0x0
#define IAXXX_I2S_I2S4_NR_EN_POS 25
#define IAXXX_I2S_I2S4_NR_EN_SIZE 1
#define IAXXX_I2S_I2S4_NR_EN_DECL 25

/*** I2S_I2S4_GEN_CFG (0x5004a088) ***/
/* I2S4 Gen Config Register. */
#define IAXXX_I2S_I2S4_GEN_CFG_ADDR (0x5004a088)
#define IAXXX_I2S_I2S4_GEN_CFG_MASK_VAL 0x001fffff
#define IAXXX_I2S_I2S4_GEN_CFG_RMASK_VAL 0x001fffff
#define IAXXX_I2S_I2S4_GEN_CFG_WMASK_VAL 0x001fffff
#define IAXXX_I2S_I2S4_GEN_CFG_RESET_VAL 0x00000000

/*
* 0: External FS is active low. Next I2S clock cycle begins after receiving
* falling edge of PCM input FS.
* 1: External FS is active high. Next I2S clock cycle begins after receiving
* rising edge of PCM input FS.
*/
#define IAXXX_I2S_I2S4_GEN_CFG_PCM_FS_POL_MASK 0x00000001
#define IAXXX_I2S_I2S4_GEN_CFG_PCM_FS_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S4_GEN_CFG_PCM_FS_POL_POS 0
#define IAXXX_I2S_I2S4_GEN_CFG_PCM_FS_POL_SIZE 1
#define IAXXX_I2S_I2S4_GEN_CFG_PCM_FS_POL_DECL 0

/*
* 0: Active low I2S CLK. FS changes relative to negative edge of I2S CLK.
* 1: Active high I2S CLK. FS changes relative to positive edge of I2S CLK.
*/
#define IAXXX_I2S_I2S4_GEN_CFG_I2S_CLK_POL_MASK 0x00000002
#define IAXXX_I2S_I2S4_GEN_CFG_I2S_CLK_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S4_GEN_CFG_I2S_CLK_POL_POS 1
#define IAXXX_I2S_I2S4_GEN_CFG_I2S_CLK_POL_SIZE 1
#define IAXXX_I2S_I2S4_GEN_CFG_I2S_CLK_POL_DECL 1

/*
* 0: Active low I2S FS. FS goes low in first I2S clock (position within
* clock based on fs_active_edge),
*    goes high in fs_valid clocks (position based on fs_inactive_edge).
* 1: Active high I2S FS. FS goes high in first I2S clock (position within
* clock based on fs_active_edge),
*    goes low in fs_valid clocks (position based on fs_inactive_edge).
*/
#define IAXXX_I2S_I2S4_GEN_CFG_I2S_FS_POL_MASK 0x00000004
#define IAXXX_I2S_I2S4_GEN_CFG_I2S_FS_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S4_GEN_CFG_I2S_FS_POL_POS 2
#define IAXXX_I2S_I2S4_GEN_CFG_I2S_FS_POL_SIZE 1
#define IAXXX_I2S_I2S4_GEN_CFG_I2S_FS_POL_DECL 2

/*
* 0: In Pseudo Master Mode, an input sync only starts a new FS cycle after
* the previous one has finished.
*    Syncs in the middle of an FS cycle are ignored.
* 1: In Pseudo Master Mode, any input sync finishes the current FS cycle and
* starts a new one.
*    If fs_gen_count is non-zero, this mode should not be used.
*/
#define IAXXX_I2S_I2S4_GEN_CFG_ABORT_ON_SYNC_MASK 0x00000008
#define IAXXX_I2S_I2S4_GEN_CFG_ABORT_ON_SYNC_RESET_VAL 0x0
#define IAXXX_I2S_I2S4_GEN_CFG_ABORT_ON_SYNC_POS 3
#define IAXXX_I2S_I2S4_GEN_CFG_ABORT_ON_SYNC_SIZE 1
#define IAXXX_I2S_I2S4_GEN_CFG_ABORT_ON_SYNC_DECL 3

/*
* Number of I2S clocks per FS Frame. Expressed as an N-1 value.
*/
#define IAXXX_I2S_I2S4_GEN_CFG_I2S_CLKS_PER_FS_MASK 0x00000ff0
#define IAXXX_I2S_I2S4_GEN_CFG_I2S_CLKS_PER_FS_RESET_VAL 0x0
#define IAXXX_I2S_I2S4_GEN_CFG_I2S_CLKS_PER_FS_POS 4
#define IAXXX_I2S_I2S4_GEN_CFG_I2S_CLKS_PER_FS_SIZE 8
#define IAXXX_I2S_I2S4_GEN_CFG_I2S_CLKS_PER_FS_DECL (11:4)

/*
* Number of I2S clocks for which FS should be valid. Polarity of valid
* region defined by i2s_fs_pol.
*/
#define IAXXX_I2S_I2S4_GEN_CFG_FS_VALID_MASK 0x000ff000
#define IAXXX_I2S_I2S4_GEN_CFG_FS_VALID_RESET_VAL 0x0
#define IAXXX_I2S_I2S4_GEN_CFG_FS_VALID_POS 12
#define IAXXX_I2S_I2S4_GEN_CFG_FS_VALID_SIZE 8
#define IAXXX_I2S_I2S4_GEN_CFG_FS_VALID_DECL (19:12)

/*
* 0: Pseudo Master Mode. Sync to edge of external FS.
* 1: Master mode. Generate FS & CLK independently.
*/
#define IAXXX_I2S_I2S4_GEN_CFG_GEN_MASTER_MASK 0x00100000
#define IAXXX_I2S_I2S4_GEN_CFG_GEN_MASTER_RESET_VAL 0x0
#define IAXXX_I2S_I2S4_GEN_CFG_GEN_MASTER_POS 20
#define IAXXX_I2S_I2S4_GEN_CFG_GEN_MASTER_SIZE 1
#define IAXXX_I2S_I2S4_GEN_CFG_GEN_MASTER_DECL 20

/*** I2S_I2S4_CLK_CTRL (0x5004a08c) ***/
/* I2S4 Gen Clock Control Register. */
#define IAXXX_I2S_I2S4_CLK_CTRL_ADDR (0x5004a08c)
#define IAXXX_I2S_I2S4_CLK_CTRL_MASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S4_CLK_CTRL_RMASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S4_CLK_CTRL_WMASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S4_CLK_CTRL_RESET_VAL 0x00000000

/*
* Period of I2S Clock, in oversample clocks. Expressed as an N-1 value.
*/
#define IAXXX_I2S_I2S4_CLK_CTRL_I2S_CLK_PERIOD_MASK 0x000000ff
#define IAXXX_I2S_I2S4_CLK_CTRL_I2S_CLK_PERIOD_RESET_VAL 0x0
#define IAXXX_I2S_I2S4_CLK_CTRL_I2S_CLK_PERIOD_POS 0
#define IAXXX_I2S_I2S4_CLK_CTRL_I2S_CLK_PERIOD_SIZE 8
#define IAXXX_I2S_I2S4_CLK_CTRL_I2S_CLK_PERIOD_DECL (7:0)

/*
* Number of oversample clocks the I2S Clock is low. Expressed as an N-1
* value.
*/
#define IAXXX_I2S_I2S4_CLK_CTRL_I2S_CLK_LOW_MASK 0x0000ff00
#define IAXXX_I2S_I2S4_CLK_CTRL_I2S_CLK_LOW_RESET_VAL 0x0
#define IAXXX_I2S_I2S4_CLK_CTRL_I2S_CLK_LOW_POS 8
#define IAXXX_I2S_I2S4_CLK_CTRL_I2S_CLK_LOW_SIZE 8
#define IAXXX_I2S_I2S4_CLK_CTRL_I2S_CLK_LOW_DECL (15:8)

/*** I2S_I2S4_FS_ALIGN (0x5004a090) ***/
/* I2S4 Gen FS Align Register. */
#define IAXXX_I2S_I2S4_FS_ALIGN_ADDR (0x5004a090)
#define IAXXX_I2S_I2S4_FS_ALIGN_MASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S4_FS_ALIGN_RMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S4_FS_ALIGN_WMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S4_FS_ALIGN_RESET_VAL 0x00000000

/*
* Position (in oversample clocks) of the active edge of FS relative to the
* start of the frame.
* A position of 0 is only allowed in I2S Master Mode and places the active
* edge of FS coincident
* with the start of the I2S clock cycle. Whether this is a negative or
* positive edge depends upon
* the setting of i2s_fs_pol.
*/
#define IAXXX_I2S_I2S4_FS_ALIGN_FS_ALIGN_ACTIVE_MASK 0x000000ff
#define IAXXX_I2S_I2S4_FS_ALIGN_FS_ALIGN_ACTIVE_RESET_VAL 0x0
#define IAXXX_I2S_I2S4_FS_ALIGN_FS_ALIGN_ACTIVE_POS 0
#define IAXXX_I2S_I2S4_FS_ALIGN_FS_ALIGN_ACTIVE_SIZE 8
#define IAXXX_I2S_I2S4_FS_ALIGN_FS_ALIGN_ACTIVE_DECL (7:0)

/*
* Position (in oversample clocks) of the inactive edge of FS relative to the
* start of the I2S
* clock cycle defined by fs_valid. A position of 0 is only allowed in I2S
* Master Mode and places
* the active edge of FS coincident with the start of the I2S clock cycle.
* Whether this is a negative
* or positive edge depends upon the setting of i2s_fs_pol.
*/
#define IAXXX_I2S_I2S4_FS_ALIGN_FS_ALIGN_INACTIVE_MASK 0x0000ff00
#define IAXXX_I2S_I2S4_FS_ALIGN_FS_ALIGN_INACTIVE_RESET_VAL 0x0
#define IAXXX_I2S_I2S4_FS_ALIGN_FS_ALIGN_INACTIVE_POS 8
#define IAXXX_I2S_I2S4_FS_ALIGN_FS_ALIGN_INACTIVE_SIZE 8
#define IAXXX_I2S_I2S4_FS_ALIGN_FS_ALIGN_INACTIVE_DECL (15:8)

/*
* Generate this many FS cycles after receiving a PCM_FS. Expressed as an N-1
* value.
* If this is a non-zero value, abort_on_sync should be set to 0.
*/
#define IAXXX_I2S_I2S4_FS_ALIGN_FS_GEN_COUNT_MASK 0x03ff0000
#define IAXXX_I2S_I2S4_FS_ALIGN_FS_GEN_COUNT_RESET_VAL 0x0
#define IAXXX_I2S_I2S4_FS_ALIGN_FS_GEN_COUNT_POS 16
#define IAXXX_I2S_I2S4_FS_ALIGN_FS_GEN_COUNT_SIZE 10
#define IAXXX_I2S_I2S4_FS_ALIGN_FS_GEN_COUNT_DECL (25:16)

/*** I2S_I2S5_HL (0x5004a0a0) ***/
/* I2S5 H/L Divider Register. */
#define IAXXX_I2S_I2S5_HL_ADDR (0x5004a0a0)
#define IAXXX_I2S_I2S5_HL_MASK_VAL 0x0000001f
#define IAXXX_I2S_I2S5_HL_RMASK_VAL 0x0000001f
#define IAXXX_I2S_I2S5_HL_WMASK_VAL 0x0000001f
#define IAXXX_I2S_I2S5_HL_RESET_VAL 0x00000001

/*
* Period of divided clock, in terms of PLL clock. 1=passthrough.
*/
#define IAXXX_I2S_I2S5_HL_P_MASK 0x0000000f
#define IAXXX_I2S_I2S5_HL_P_RESET_VAL 0x1
#define IAXXX_I2S_I2S5_HL_P_POS 0
#define IAXXX_I2S_I2S5_HL_P_SIZE 4
#define IAXXX_I2S_I2S5_HL_P_DECL (3:0)

/*
* Enable for H/L Divider.
*/
#define IAXXX_I2S_I2S5_HL_EN_MASK 0x00000010
#define IAXXX_I2S_I2S5_HL_EN_RESET_VAL 0x0
#define IAXXX_I2S_I2S5_HL_EN_POS 4
#define IAXXX_I2S_I2S5_HL_EN_SIZE 1
#define IAXXX_I2S_I2S5_HL_EN_DECL 4

/*** I2S_I2S5_NR (0x5004a0a4) ***/
/* I2S5 N/R Divider Register. */
#define IAXXX_I2S_I2S5_NR_ADDR (0x5004a0a4)
#define IAXXX_I2S_I2S5_NR_MASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S5_NR_RMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S5_NR_WMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S5_NR_RESET_VAL 0x01000001

/*
* ASIC: outclk = (N/D)*inclk
* FPGA: outclk = (N/2D)*inclk
*/
#define IAXXX_I2S_I2S5_NR_N_MASK 0x00000fff
#define IAXXX_I2S_I2S5_NR_N_RESET_VAL 0x1
#define IAXXX_I2S_I2S5_NR_N_POS 0
#define IAXXX_I2S_I2S5_NR_N_SIZE 12
#define IAXXX_I2S_I2S5_NR_N_DECL (11:0)

/*
* R= (2^12 -D + N)
*/
#define IAXXX_I2S_I2S5_NR_R_MASK 0x01fff000
#define IAXXX_I2S_I2S5_NR_R_RESET_VAL 0x1000
#define IAXXX_I2S_I2S5_NR_R_POS 12
#define IAXXX_I2S_I2S5_NR_R_SIZE 13
#define IAXXX_I2S_I2S5_NR_R_DECL (24:12)

/*
* Enable for N/R Divider.
*/
#define IAXXX_I2S_I2S5_NR_EN_MASK 0x02000000
#define IAXXX_I2S_I2S5_NR_EN_RESET_VAL 0x0
#define IAXXX_I2S_I2S5_NR_EN_POS 25
#define IAXXX_I2S_I2S5_NR_EN_SIZE 1
#define IAXXX_I2S_I2S5_NR_EN_DECL 25

/*** I2S_I2S5_GEN_CFG (0x5004a0a8) ***/
/* I2S5 Gen Config Register. */
#define IAXXX_I2S_I2S5_GEN_CFG_ADDR (0x5004a0a8)
#define IAXXX_I2S_I2S5_GEN_CFG_MASK_VAL 0x001fffff
#define IAXXX_I2S_I2S5_GEN_CFG_RMASK_VAL 0x001fffff
#define IAXXX_I2S_I2S5_GEN_CFG_WMASK_VAL 0x001fffff
#define IAXXX_I2S_I2S5_GEN_CFG_RESET_VAL 0x00000000

/*
* 0: External FS is active low. Next I2S clock cycle begins after receiving
* falling edge of PCM input FS.
* 1: External FS is active high. Next I2S clock cycle begins after receiving
* rising edge of PCM input FS.
*/
#define IAXXX_I2S_I2S5_GEN_CFG_PCM_FS_POL_MASK 0x00000001
#define IAXXX_I2S_I2S5_GEN_CFG_PCM_FS_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S5_GEN_CFG_PCM_FS_POL_POS 0
#define IAXXX_I2S_I2S5_GEN_CFG_PCM_FS_POL_SIZE 1
#define IAXXX_I2S_I2S5_GEN_CFG_PCM_FS_POL_DECL 0

/*
* 0: Active low I2S CLK. FS changes relative to negative edge of I2S CLK.
* 1: Active high I2S CLK. FS changes relative to positive edge of I2S CLK.
*/
#define IAXXX_I2S_I2S5_GEN_CFG_I2S_CLK_POL_MASK 0x00000002
#define IAXXX_I2S_I2S5_GEN_CFG_I2S_CLK_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S5_GEN_CFG_I2S_CLK_POL_POS 1
#define IAXXX_I2S_I2S5_GEN_CFG_I2S_CLK_POL_SIZE 1
#define IAXXX_I2S_I2S5_GEN_CFG_I2S_CLK_POL_DECL 1

/*
* 0: Active low I2S FS. FS goes low in first I2S clock (position within
* clock based on fs_active_edge),
*    goes high in fs_valid clocks (position based on fs_inactive_edge).
* 1: Active high I2S FS. FS goes high in first I2S clock (position within
* clock based on fs_active_edge),
*    goes low in fs_valid clocks (position based on fs_inactive_edge).
*/
#define IAXXX_I2S_I2S5_GEN_CFG_I2S_FS_POL_MASK 0x00000004
#define IAXXX_I2S_I2S5_GEN_CFG_I2S_FS_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S5_GEN_CFG_I2S_FS_POL_POS 2
#define IAXXX_I2S_I2S5_GEN_CFG_I2S_FS_POL_SIZE 1
#define IAXXX_I2S_I2S5_GEN_CFG_I2S_FS_POL_DECL 2

/*
* 0: In Pseudo Master Mode, an input sync only starts a new FS cycle after
* the previous one has finished.
*    Syncs in the middle of an FS cycle are ignored.
* 1: In Pseudo Master Mode, any input sync finishes the current FS cycle and
* starts a new one.
*    If fs_gen_count is non-zero, this mode should not be used.
*/
#define IAXXX_I2S_I2S5_GEN_CFG_ABORT_ON_SYNC_MASK 0x00000008
#define IAXXX_I2S_I2S5_GEN_CFG_ABORT_ON_SYNC_RESET_VAL 0x0
#define IAXXX_I2S_I2S5_GEN_CFG_ABORT_ON_SYNC_POS 3
#define IAXXX_I2S_I2S5_GEN_CFG_ABORT_ON_SYNC_SIZE 1
#define IAXXX_I2S_I2S5_GEN_CFG_ABORT_ON_SYNC_DECL 3

/*
* Number of I2S clocks per FS Frame. Expressed as an N-1 value.
*/
#define IAXXX_I2S_I2S5_GEN_CFG_I2S_CLKS_PER_FS_MASK 0x00000ff0
#define IAXXX_I2S_I2S5_GEN_CFG_I2S_CLKS_PER_FS_RESET_VAL 0x0
#define IAXXX_I2S_I2S5_GEN_CFG_I2S_CLKS_PER_FS_POS 4
#define IAXXX_I2S_I2S5_GEN_CFG_I2S_CLKS_PER_FS_SIZE 8
#define IAXXX_I2S_I2S5_GEN_CFG_I2S_CLKS_PER_FS_DECL (11:4)

/*
* Number of I2S clocks for which FS should be valid. Polarity of valid
* region defined by i2s_fs_pol.
*/
#define IAXXX_I2S_I2S5_GEN_CFG_FS_VALID_MASK 0x000ff000
#define IAXXX_I2S_I2S5_GEN_CFG_FS_VALID_RESET_VAL 0x0
#define IAXXX_I2S_I2S5_GEN_CFG_FS_VALID_POS 12
#define IAXXX_I2S_I2S5_GEN_CFG_FS_VALID_SIZE 8
#define IAXXX_I2S_I2S5_GEN_CFG_FS_VALID_DECL (19:12)

/*
* 0: Pseudo Master Mode. Sync to edge of external FS.
* 1: Master mode. Generate FS & CLK independently.
*/
#define IAXXX_I2S_I2S5_GEN_CFG_GEN_MASTER_MASK 0x00100000
#define IAXXX_I2S_I2S5_GEN_CFG_GEN_MASTER_RESET_VAL 0x0
#define IAXXX_I2S_I2S5_GEN_CFG_GEN_MASTER_POS 20
#define IAXXX_I2S_I2S5_GEN_CFG_GEN_MASTER_SIZE 1
#define IAXXX_I2S_I2S5_GEN_CFG_GEN_MASTER_DECL 20

/*** I2S_I2S5_CLK_CTRL (0x5004a0ac) ***/
/* I2S5 Gen Clock Control Register. */
#define IAXXX_I2S_I2S5_CLK_CTRL_ADDR (0x5004a0ac)
#define IAXXX_I2S_I2S5_CLK_CTRL_MASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S5_CLK_CTRL_RMASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S5_CLK_CTRL_WMASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S5_CLK_CTRL_RESET_VAL 0x00000000

/*
* Period of I2S Clock, in oversample clocks. Expressed as an N-1 value.
*/
#define IAXXX_I2S_I2S5_CLK_CTRL_I2S_CLK_PERIOD_MASK 0x000000ff
#define IAXXX_I2S_I2S5_CLK_CTRL_I2S_CLK_PERIOD_RESET_VAL 0x0
#define IAXXX_I2S_I2S5_CLK_CTRL_I2S_CLK_PERIOD_POS 0
#define IAXXX_I2S_I2S5_CLK_CTRL_I2S_CLK_PERIOD_SIZE 8
#define IAXXX_I2S_I2S5_CLK_CTRL_I2S_CLK_PERIOD_DECL (7:0)

/*
* Number of oversample clocks the I2S Clock is low. Expressed as an N-1
* value.
*/
#define IAXXX_I2S_I2S5_CLK_CTRL_I2S_CLK_LOW_MASK 0x0000ff00
#define IAXXX_I2S_I2S5_CLK_CTRL_I2S_CLK_LOW_RESET_VAL 0x0
#define IAXXX_I2S_I2S5_CLK_CTRL_I2S_CLK_LOW_POS 8
#define IAXXX_I2S_I2S5_CLK_CTRL_I2S_CLK_LOW_SIZE 8
#define IAXXX_I2S_I2S5_CLK_CTRL_I2S_CLK_LOW_DECL (15:8)

/*** I2S_I2S5_FS_ALIGN (0x5004a0b0) ***/
/* I2S5 Gen FS Align Register. */
#define IAXXX_I2S_I2S5_FS_ALIGN_ADDR (0x5004a0b0)
#define IAXXX_I2S_I2S5_FS_ALIGN_MASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S5_FS_ALIGN_RMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S5_FS_ALIGN_WMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S5_FS_ALIGN_RESET_VAL 0x00000000

/*
* Position (in oversample clocks) of the active edge of FS relative to the
* start of the frame.
* A position of 0 is only allowed in I2S Master Mode and places the active
* edge of FS coincident
* with the start of the I2S clock cycle. Whether this is a negative or
* positive edge depends upon
* the setting of i2s_fs_pol.
*/
#define IAXXX_I2S_I2S5_FS_ALIGN_FS_ALIGN_ACTIVE_MASK 0x000000ff
#define IAXXX_I2S_I2S5_FS_ALIGN_FS_ALIGN_ACTIVE_RESET_VAL 0x0
#define IAXXX_I2S_I2S5_FS_ALIGN_FS_ALIGN_ACTIVE_POS 0
#define IAXXX_I2S_I2S5_FS_ALIGN_FS_ALIGN_ACTIVE_SIZE 8
#define IAXXX_I2S_I2S5_FS_ALIGN_FS_ALIGN_ACTIVE_DECL (7:0)

/*
* Position (in oversample clocks) of the inactive edge of FS relative to the
* start of the I2S
* clock cycle defined by fs_valid. A position of 0 is only allowed in I2S
* Master Mode and places
* the active edge of FS coincident with the start of the I2S clock cycle.
* Whether this is a negative
* or positive edge depends upon the setting of i2s_fs_pol.
*/
#define IAXXX_I2S_I2S5_FS_ALIGN_FS_ALIGN_INACTIVE_MASK 0x0000ff00
#define IAXXX_I2S_I2S5_FS_ALIGN_FS_ALIGN_INACTIVE_RESET_VAL 0x0
#define IAXXX_I2S_I2S5_FS_ALIGN_FS_ALIGN_INACTIVE_POS 8
#define IAXXX_I2S_I2S5_FS_ALIGN_FS_ALIGN_INACTIVE_SIZE 8
#define IAXXX_I2S_I2S5_FS_ALIGN_FS_ALIGN_INACTIVE_DECL (15:8)

/*
* Generate this many FS cycles after receiving a PCM_FS. Expressed as an N-1
* value.
* If this is a non-zero value, abort_on_sync should be set to 0.
*/
#define IAXXX_I2S_I2S5_FS_ALIGN_FS_GEN_COUNT_MASK 0x03ff0000
#define IAXXX_I2S_I2S5_FS_ALIGN_FS_GEN_COUNT_RESET_VAL 0x0
#define IAXXX_I2S_I2S5_FS_ALIGN_FS_GEN_COUNT_POS 16
#define IAXXX_I2S_I2S5_FS_ALIGN_FS_GEN_COUNT_SIZE 10
#define IAXXX_I2S_I2S5_FS_ALIGN_FS_GEN_COUNT_DECL (25:16)

/*** I2S_I2S6_HL (0x5004a0c0) ***/
/* I2S6 H/L Divider Register. */
#define IAXXX_I2S_I2S6_HL_ADDR (0x5004a0c0)
#define IAXXX_I2S_I2S6_HL_MASK_VAL 0x0000001f
#define IAXXX_I2S_I2S6_HL_RMASK_VAL 0x0000001f
#define IAXXX_I2S_I2S6_HL_WMASK_VAL 0x0000001f
#define IAXXX_I2S_I2S6_HL_RESET_VAL 0x00000001

/*
* Period of divided clock, in terms of PLL clock. 1=passthrough.
*/
#define IAXXX_I2S_I2S6_HL_P_MASK 0x0000000f
#define IAXXX_I2S_I2S6_HL_P_RESET_VAL 0x1
#define IAXXX_I2S_I2S6_HL_P_POS 0
#define IAXXX_I2S_I2S6_HL_P_SIZE 4
#define IAXXX_I2S_I2S6_HL_P_DECL (3:0)

/*
* Enable for H/L Divider.
*/
#define IAXXX_I2S_I2S6_HL_EN_MASK 0x00000010
#define IAXXX_I2S_I2S6_HL_EN_RESET_VAL 0x0
#define IAXXX_I2S_I2S6_HL_EN_POS 4
#define IAXXX_I2S_I2S6_HL_EN_SIZE 1
#define IAXXX_I2S_I2S6_HL_EN_DECL 4

/*** I2S_I2S6_NR (0x5004a0c4) ***/
/* I2S6 N/R Divider Register. */
#define IAXXX_I2S_I2S6_NR_ADDR (0x5004a0c4)
#define IAXXX_I2S_I2S6_NR_MASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S6_NR_RMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S6_NR_WMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S6_NR_RESET_VAL 0x01000001

/*
* ASIC: outclk = (N/D)*inclk
* FPGA: outclk = (N/2D)*inclk
*/
#define IAXXX_I2S_I2S6_NR_N_MASK 0x00000fff
#define IAXXX_I2S_I2S6_NR_N_RESET_VAL 0x1
#define IAXXX_I2S_I2S6_NR_N_POS 0
#define IAXXX_I2S_I2S6_NR_N_SIZE 12
#define IAXXX_I2S_I2S6_NR_N_DECL (11:0)

/*
* R= (2^12 -D + N)
*/
#define IAXXX_I2S_I2S6_NR_R_MASK 0x01fff000
#define IAXXX_I2S_I2S6_NR_R_RESET_VAL 0x1000
#define IAXXX_I2S_I2S6_NR_R_POS 12
#define IAXXX_I2S_I2S6_NR_R_SIZE 13
#define IAXXX_I2S_I2S6_NR_R_DECL (24:12)

/*
* Enable for N/R Divider.
*/
#define IAXXX_I2S_I2S6_NR_EN_MASK 0x02000000
#define IAXXX_I2S_I2S6_NR_EN_RESET_VAL 0x0
#define IAXXX_I2S_I2S6_NR_EN_POS 25
#define IAXXX_I2S_I2S6_NR_EN_SIZE 1
#define IAXXX_I2S_I2S6_NR_EN_DECL 25

/*** I2S_I2S6_GEN_CFG (0x5004a0c8) ***/
/* I2S6 Gen Config Register. */
#define IAXXX_I2S_I2S6_GEN_CFG_ADDR (0x5004a0c8)
#define IAXXX_I2S_I2S6_GEN_CFG_MASK_VAL 0x001fffff
#define IAXXX_I2S_I2S6_GEN_CFG_RMASK_VAL 0x001fffff
#define IAXXX_I2S_I2S6_GEN_CFG_WMASK_VAL 0x001fffff
#define IAXXX_I2S_I2S6_GEN_CFG_RESET_VAL 0x00000000

/*
* 0: External FS is active low. Next I2S clock cycle begins after receiving
* falling edge of PCM input FS.
* 1: External FS is active high. Next I2S clock cycle begins after receiving
* rising edge of PCM input FS.
*/
#define IAXXX_I2S_I2S6_GEN_CFG_PCM_FS_POL_MASK 0x00000001
#define IAXXX_I2S_I2S6_GEN_CFG_PCM_FS_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S6_GEN_CFG_PCM_FS_POL_POS 0
#define IAXXX_I2S_I2S6_GEN_CFG_PCM_FS_POL_SIZE 1
#define IAXXX_I2S_I2S6_GEN_CFG_PCM_FS_POL_DECL 0

/*
* 0: Active low I2S CLK. FS changes relative to negative edge of I2S CLK.
* 1: Active high I2S CLK. FS changes relative to positive edge of I2S CLK.
*/
#define IAXXX_I2S_I2S6_GEN_CFG_I2S_CLK_POL_MASK 0x00000002
#define IAXXX_I2S_I2S6_GEN_CFG_I2S_CLK_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S6_GEN_CFG_I2S_CLK_POL_POS 1
#define IAXXX_I2S_I2S6_GEN_CFG_I2S_CLK_POL_SIZE 1
#define IAXXX_I2S_I2S6_GEN_CFG_I2S_CLK_POL_DECL 1

/*
* 0: Active low I2S FS. FS goes low in first I2S clock (position within
* clock based on fs_active_edge),
*    goes high in fs_valid clocks (position based on fs_inactive_edge).
* 1: Active high I2S FS. FS goes high in first I2S clock (position within
* clock based on fs_active_edge),
*    goes low in fs_valid clocks (position based on fs_inactive_edge).
*/
#define IAXXX_I2S_I2S6_GEN_CFG_I2S_FS_POL_MASK 0x00000004
#define IAXXX_I2S_I2S6_GEN_CFG_I2S_FS_POL_RESET_VAL 0x0
#define IAXXX_I2S_I2S6_GEN_CFG_I2S_FS_POL_POS 2
#define IAXXX_I2S_I2S6_GEN_CFG_I2S_FS_POL_SIZE 1
#define IAXXX_I2S_I2S6_GEN_CFG_I2S_FS_POL_DECL 2

/*
* 0: In Pseudo Master Mode, an input sync only starts a new FS cycle after
* the previous one has finished.
*    Syncs in the middle of an FS cycle are ignored.
* 1: In Pseudo Master Mode, any input sync finishes the current FS cycle and
* starts a new one.
*    If fs_gen_count is non-zero, this mode should not be used.
*/
#define IAXXX_I2S_I2S6_GEN_CFG_ABORT_ON_SYNC_MASK 0x00000008
#define IAXXX_I2S_I2S6_GEN_CFG_ABORT_ON_SYNC_RESET_VAL 0x0
#define IAXXX_I2S_I2S6_GEN_CFG_ABORT_ON_SYNC_POS 3
#define IAXXX_I2S_I2S6_GEN_CFG_ABORT_ON_SYNC_SIZE 1
#define IAXXX_I2S_I2S6_GEN_CFG_ABORT_ON_SYNC_DECL 3

/*
* Number of I2S clocks per FS Frame. Expressed as an N-1 value.
*/
#define IAXXX_I2S_I2S6_GEN_CFG_I2S_CLKS_PER_FS_MASK 0x00000ff0
#define IAXXX_I2S_I2S6_GEN_CFG_I2S_CLKS_PER_FS_RESET_VAL 0x0
#define IAXXX_I2S_I2S6_GEN_CFG_I2S_CLKS_PER_FS_POS 4
#define IAXXX_I2S_I2S6_GEN_CFG_I2S_CLKS_PER_FS_SIZE 8
#define IAXXX_I2S_I2S6_GEN_CFG_I2S_CLKS_PER_FS_DECL (11:4)

/*
* Number of I2S clocks for which FS should be valid. Polarity of valid
* region defined by i2s_fs_pol.
*/
#define IAXXX_I2S_I2S6_GEN_CFG_FS_VALID_MASK 0x000ff000
#define IAXXX_I2S_I2S6_GEN_CFG_FS_VALID_RESET_VAL 0x0
#define IAXXX_I2S_I2S6_GEN_CFG_FS_VALID_POS 12
#define IAXXX_I2S_I2S6_GEN_CFG_FS_VALID_SIZE 8
#define IAXXX_I2S_I2S6_GEN_CFG_FS_VALID_DECL (19:12)

/*
* 0: Pseudo Master Mode. Sync to edge of external FS.
* 1: Master mode. Generate FS & CLK independently.
*/
#define IAXXX_I2S_I2S6_GEN_CFG_GEN_MASTER_MASK 0x00100000
#define IAXXX_I2S_I2S6_GEN_CFG_GEN_MASTER_RESET_VAL 0x0
#define IAXXX_I2S_I2S6_GEN_CFG_GEN_MASTER_POS 20
#define IAXXX_I2S_I2S6_GEN_CFG_GEN_MASTER_SIZE 1
#define IAXXX_I2S_I2S6_GEN_CFG_GEN_MASTER_DECL 20

/*** I2S_I2S6_CLK_CTRL (0x5004a0cc) ***/
/* I2S6 Gen Clock Control Register. */
#define IAXXX_I2S_I2S6_CLK_CTRL_ADDR (0x5004a0cc)
#define IAXXX_I2S_I2S6_CLK_CTRL_MASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S6_CLK_CTRL_RMASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S6_CLK_CTRL_WMASK_VAL 0x0000ffff
#define IAXXX_I2S_I2S6_CLK_CTRL_RESET_VAL 0x00000000

/*
* Period of I2S Clock, in oversample clocks. Expressed as an N-1 value.
*/
#define IAXXX_I2S_I2S6_CLK_CTRL_I2S_CLK_PERIOD_MASK 0x000000ff
#define IAXXX_I2S_I2S6_CLK_CTRL_I2S_CLK_PERIOD_RESET_VAL 0x0
#define IAXXX_I2S_I2S6_CLK_CTRL_I2S_CLK_PERIOD_POS 0
#define IAXXX_I2S_I2S6_CLK_CTRL_I2S_CLK_PERIOD_SIZE 8
#define IAXXX_I2S_I2S6_CLK_CTRL_I2S_CLK_PERIOD_DECL (7:0)

/*
* Number of oversample clocks the I2S Clock is low. Expressed as an N-1
* value.
*/
#define IAXXX_I2S_I2S6_CLK_CTRL_I2S_CLK_LOW_MASK 0x0000ff00
#define IAXXX_I2S_I2S6_CLK_CTRL_I2S_CLK_LOW_RESET_VAL 0x0
#define IAXXX_I2S_I2S6_CLK_CTRL_I2S_CLK_LOW_POS 8
#define IAXXX_I2S_I2S6_CLK_CTRL_I2S_CLK_LOW_SIZE 8
#define IAXXX_I2S_I2S6_CLK_CTRL_I2S_CLK_LOW_DECL (15:8)

/*** I2S_I2S6_FS_ALIGN (0x5004a0d0) ***/
/* I2S6 Gen FS Align Register. */
#define IAXXX_I2S_I2S6_FS_ALIGN_ADDR (0x5004a0d0)
#define IAXXX_I2S_I2S6_FS_ALIGN_MASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S6_FS_ALIGN_RMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S6_FS_ALIGN_WMASK_VAL 0x03ffffff
#define IAXXX_I2S_I2S6_FS_ALIGN_RESET_VAL 0x00000000

/*
* Position (in oversample clocks) of the active edge of FS relative to the
* start of the frame.
* A position of 0 is only allowed in I2S Master Mode and places the active
* edge of FS coincident
* with the start of the I2S clock cycle. Whether this is a negative or
* positive edge depends upon
* the setting of i2s_fs_pol.
*/
#define IAXXX_I2S_I2S6_FS_ALIGN_FS_ALIGN_ACTIVE_MASK 0x000000ff
#define IAXXX_I2S_I2S6_FS_ALIGN_FS_ALIGN_ACTIVE_RESET_VAL 0x0
#define IAXXX_I2S_I2S6_FS_ALIGN_FS_ALIGN_ACTIVE_POS 0
#define IAXXX_I2S_I2S6_FS_ALIGN_FS_ALIGN_ACTIVE_SIZE 8
#define IAXXX_I2S_I2S6_FS_ALIGN_FS_ALIGN_ACTIVE_DECL (7:0)

/*
* Position (in oversample clocks) of the inactive edge of FS relative to the
* start of the I2S
* clock cycle defined by fs_valid. A position of 0 is only allowed in I2S
* Master Mode and places
* the active edge of FS coincident with the start of the I2S clock cycle.
* Whether this is a negative
* or positive edge depends upon the setting of i2s_fs_pol.
*/
#define IAXXX_I2S_I2S6_FS_ALIGN_FS_ALIGN_INACTIVE_MASK 0x0000ff00
#define IAXXX_I2S_I2S6_FS_ALIGN_FS_ALIGN_INACTIVE_RESET_VAL 0x0
#define IAXXX_I2S_I2S6_FS_ALIGN_FS_ALIGN_INACTIVE_POS 8
#define IAXXX_I2S_I2S6_FS_ALIGN_FS_ALIGN_INACTIVE_SIZE 8
#define IAXXX_I2S_I2S6_FS_ALIGN_FS_ALIGN_INACTIVE_DECL (15:8)

/*
* Generate this many FS cycles after receiving a PCM_FS. Expressed as an N-1
* value.
* If this is a non-zero value, abort_on_sync should be set to 0.
*/
#define IAXXX_I2S_I2S6_FS_ALIGN_FS_GEN_COUNT_MASK 0x03ff0000
#define IAXXX_I2S_I2S6_FS_ALIGN_FS_GEN_COUNT_RESET_VAL 0x0
#define IAXXX_I2S_I2S6_FS_ALIGN_FS_GEN_COUNT_POS 16
#define IAXXX_I2S_I2S6_FS_ALIGN_FS_GEN_COUNT_SIZE 10
#define IAXXX_I2S_I2S6_FS_ALIGN_FS_GEN_COUNT_DECL (25:16)

/*** I2S_I2S_MUX_SEL (0x5004a0e0) ***/
/* I2S Mux Select Register. */
#define IAXXX_I2S_I2S_MUX_SEL_ADDR (0x5004a0e0)
#define IAXXX_I2S_I2S_MUX_SEL_MASK_VAL 0x001fffff
#define IAXXX_I2S_I2S_MUX_SEL_RMASK_VAL 0x001fffff
#define IAXXX_I2S_I2S_MUX_SEL_WMASK_VAL 0x001fffff
#define IAXXX_I2S_I2S_MUX_SEL_RESET_VAL 0x00000000

/*
* Selects which PCM_FS (0-5) is sent to this I2S Generator. Only used if in
* Pseudo Master mode.
*/
#define IAXXX_I2S_I2S_MUX_SEL_I2S0_MASK 0x00000007
#define IAXXX_I2S_I2S_MUX_SEL_I2S0_RESET_VAL 0x0
#define IAXXX_I2S_I2S_MUX_SEL_I2S0_POS 0
#define IAXXX_I2S_I2S_MUX_SEL_I2S0_SIZE 3
#define IAXXX_I2S_I2S_MUX_SEL_I2S0_DECL (2:0)

/*
* Selects which PCM_FS (0-5) is sent to this I2S Generator. Only used if in
* Pseudo Master mode.
*/
#define IAXXX_I2S_I2S_MUX_SEL_I2S1_MASK 0x00000038
#define IAXXX_I2S_I2S_MUX_SEL_I2S1_RESET_VAL 0x0
#define IAXXX_I2S_I2S_MUX_SEL_I2S1_POS 3
#define IAXXX_I2S_I2S_MUX_SEL_I2S1_SIZE 3
#define IAXXX_I2S_I2S_MUX_SEL_I2S1_DECL (5:3)

/*
* Selects which PCM_FS (0-5) is sent to this I2S Generator. Only used if in
* Pseudo Master mode.
*/
#define IAXXX_I2S_I2S_MUX_SEL_I2S2_MASK 0x000001c0
#define IAXXX_I2S_I2S_MUX_SEL_I2S2_RESET_VAL 0x0
#define IAXXX_I2S_I2S_MUX_SEL_I2S2_POS 6
#define IAXXX_I2S_I2S_MUX_SEL_I2S2_SIZE 3
#define IAXXX_I2S_I2S_MUX_SEL_I2S2_DECL (8:6)

/*
* Selects which PCM_FS (0-5) is sent to this I2S Generator. Only used if in
* Pseudo Master mode.
*/
#define IAXXX_I2S_I2S_MUX_SEL_I2S3_MASK 0x00000e00
#define IAXXX_I2S_I2S_MUX_SEL_I2S3_RESET_VAL 0x0
#define IAXXX_I2S_I2S_MUX_SEL_I2S3_POS 9
#define IAXXX_I2S_I2S_MUX_SEL_I2S3_SIZE 3
#define IAXXX_I2S_I2S_MUX_SEL_I2S3_DECL (11:9)

/*
* Selects which PCM_FS (0-5) is sent to this I2S Generator. Only used if in
* Pseudo Master mode.
*/
#define IAXXX_I2S_I2S_MUX_SEL_I2S4_MASK 0x00007000
#define IAXXX_I2S_I2S_MUX_SEL_I2S4_RESET_VAL 0x0
#define IAXXX_I2S_I2S_MUX_SEL_I2S4_POS 12
#define IAXXX_I2S_I2S_MUX_SEL_I2S4_SIZE 3
#define IAXXX_I2S_I2S_MUX_SEL_I2S4_DECL (14:12)

/*
* Selects which PCM_FS (0-5) is sent to this I2S Generator. Only used if in
* Pseudo Master mode.
*/
#define IAXXX_I2S_I2S_MUX_SEL_I2S5_MASK 0x00038000
#define IAXXX_I2S_I2S_MUX_SEL_I2S5_RESET_VAL 0x0
#define IAXXX_I2S_I2S_MUX_SEL_I2S5_POS 15
#define IAXXX_I2S_I2S_MUX_SEL_I2S5_SIZE 3
#define IAXXX_I2S_I2S_MUX_SEL_I2S5_DECL (17:15)

/*
* Selects which PCM_FS (0-5) is sent to this I2S Generator. Only used if in
* Pseudo Master mode.
*/
#define IAXXX_I2S_I2S_MUX_SEL_I2S6_MASK 0x001c0000
#define IAXXX_I2S_I2S_MUX_SEL_I2S6_RESET_VAL 0x0
#define IAXXX_I2S_I2S_MUX_SEL_I2S6_POS 18
#define IAXXX_I2S_I2S_MUX_SEL_I2S6_SIZE 3
#define IAXXX_I2S_I2S_MUX_SEL_I2S6_DECL (20:18)

/*** I2S_I2S_TRIGGER_GEN (0x5004a0e4) ***/
#define IAXXX_I2S_I2S_TRIGGER_GEN_ADDR (0x5004a0e4)
#define IAXXX_I2S_I2S_TRIGGER_GEN_MASK_VAL 0x00000001
#define IAXXX_I2S_I2S_TRIGGER_GEN_RMASK_VAL 0x00000000
#define IAXXX_I2S_I2S_TRIGGER_GEN_WMASK_VAL 0x00000001
#define IAXXX_I2S_I2S_TRIGGER_GEN_RESET_VAL 0x00000000

/*
* Writing a "1" to this register enables or disables the I2S generators as set
* in the I2S_ENABLE(MASK)
*/
#define IAXXX_I2S_I2S_TRIGGER_GEN_TRIGGER_MASK 0x00000001
#define IAXXX_I2S_I2S_TRIGGER_GEN_TRIGGER_RESET_VAL 0x0
#define IAXXX_I2S_I2S_TRIGGER_GEN_TRIGGER_POS 0
#define IAXXX_I2S_I2S_TRIGGER_GEN_TRIGGER_SIZE 1
#define IAXXX_I2S_I2S_TRIGGER_GEN_TRIGGER_DECL 0

#endif /* __IAXXX_REGISTER_DEFS_I2S_H__ */
