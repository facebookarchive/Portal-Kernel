/*
 * iaxxx-register-defs-tunnel-header.h -- IAxxx register definition
 *
 * Copyright (c) 2016 Knowles, inc.
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

#ifndef __IAXXX_REGISTER_DEFS_TNL_HDR_H__
#define __IAXXX_REGISTER_DEFS_TNL_HDR_H__

/*** The base address for this set of registers ***/
#define IAXXX_TNL_HDR_REGS_ADDR (0x03000000)

/*** TNL_HDR_TNL_COUNT (0x03000000) ***/
/*
 * Number of tunnel groups in the tunnel block.
 */
#define IAXXX_TNL_HDR_TNL_COUNT_ADDR (0x03000000)
#define IAXXX_TNL_HDR_TNL_COUNT_MASK_VAL 0xffffffff
#define IAXXX_TNL_HDR_TNL_COUNT_RMASK_VAL 0xffffffff
#define IAXXX_TNL_HDR_TNL_COUNT_WMASK_VAL 0x00000000
#define IAXXX_TNL_HDR_TNL_COUNT_RESET_VAL 0x00000000

/*
 * Number of tunnel groups in the tunnel block.
 */
#define IAXXX_TNL_HDR_TNL_COUNT_REG_MASK 0xffffffff
#define IAXXX_TNL_HDR_TNL_COUNT_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_COUNT_REG_POS 0
#define IAXXX_TNL_HDR_TNL_COUNT_REG_SIZE 32
#define IAXXX_TNL_HDR_TNL_COUNT_REG_DECL (31 : 0)

/*** TNL_HDR_TNL_ENABLE (0x03000004) ***/
/*
 * Enable/Disable Tunnels.
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_ADDR (0x03000004)
#define IAXXX_TNL_HDR_TNL_ENABLE_MASK_VAL 0xffffffff
#define IAXXX_TNL_HDR_TNL_ENABLE_RMASK_VAL 0xffffffff
#define IAXXX_TNL_HDR_TNL_ENABLE_WMASK_VAL 0xffffffff
#define IAXXX_TNL_HDR_TNL_ENABLE_RESET_VAL 0x00000000

/*
 * Enable/Disable tunnel 0
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_0_REG_MASK 0x00000001
#define IAXXX_TNL_HDR_TNL_ENABLE_0_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_0_REG_POS 0
#define IAXXX_TNL_HDR_TNL_ENABLE_0_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_0_REG_DECL 0

/*
 * Enable/Disable tunnel 1
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_1_REG_MASK 0x00000002
#define IAXXX_TNL_HDR_TNL_ENABLE_1_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_1_REG_POS 1
#define IAXXX_TNL_HDR_TNL_ENABLE_1_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_1_REG_DECL 1

/*
 * Enable/Disable tunnel 2
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_2_REG_MASK 0x00000004
#define IAXXX_TNL_HDR_TNL_ENABLE_2_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_2_REG_POS 2
#define IAXXX_TNL_HDR_TNL_ENABLE_2_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_2_REG_DECL 2

/*
 * Enable/Disable tunnel 3
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_3_REG_MASK 0x00000008
#define IAXXX_TNL_HDR_TNL_ENABLE_3_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_3_REG_POS 3
#define IAXXX_TNL_HDR_TNL_ENABLE_3_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_3_REG_DECL 3

/*
 * Enable/Disable tunnel 4
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_4_REG_MASK 0x00000010
#define IAXXX_TNL_HDR_TNL_ENABLE_4_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_4_REG_POS 4
#define IAXXX_TNL_HDR_TNL_ENABLE_4_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_4_REG_DECL 4

/*
 * Enable/Disable tunnel 5
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_5_REG_MASK 0x00000020
#define IAXXX_TNL_HDR_TNL_ENABLE_5_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_5_REG_POS 5
#define IAXXX_TNL_HDR_TNL_ENABLE_5_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_5_REG_DECL 5

/*
 * Enable/Disable tunnel 6
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_6_REG_MASK 0x00000040
#define IAXXX_TNL_HDR_TNL_ENABLE_6_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_6_REG_POS 6
#define IAXXX_TNL_HDR_TNL_ENABLE_6_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_6_REG_DECL 6

/*
 * Enable/Disable tunnel 7
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_7_REG_MASK 0x00000080
#define IAXXX_TNL_HDR_TNL_ENABLE_7_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_7_REG_POS 7
#define IAXXX_TNL_HDR_TNL_ENABLE_7_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_7_REG_DECL 7

/*
 * Enable/Disable tunnel 8
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_8_REG_MASK 0x00000100
#define IAXXX_TNL_HDR_TNL_ENABLE_8_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_8_REG_POS 8
#define IAXXX_TNL_HDR_TNL_ENABLE_8_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_8_REG_DECL 8

/*
 * Enable/Disable tunnel 9
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_9_REG_MASK 0x00000200
#define IAXXX_TNL_HDR_TNL_ENABLE_9_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_9_REG_POS 9
#define IAXXX_TNL_HDR_TNL_ENABLE_9_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_9_REG_DECL 9

/*
 * Enable/Disable tunnel 10
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_10_REG_MASK 0x00000400
#define IAXXX_TNL_HDR_TNL_ENABLE_10_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_10_REG_POS 10
#define IAXXX_TNL_HDR_TNL_ENABLE_10_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_10_REG_DECL 10

/*
 * Enable/Disable tunnel 11
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_11_REG_MASK 0x00000800
#define IAXXX_TNL_HDR_TNL_ENABLE_11_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_11_REG_POS 11
#define IAXXX_TNL_HDR_TNL_ENABLE_11_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_11_REG_DECL 11

/*
 * Enable/Disable tunnel 12
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_12_REG_MASK 0x00001000
#define IAXXX_TNL_HDR_TNL_ENABLE_12_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_12_REG_POS 12
#define IAXXX_TNL_HDR_TNL_ENABLE_12_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_12_REG_DECL 12

/*
 * Enable/Disable tunnel 13
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_13_REG_MASK 0x00002000
#define IAXXX_TNL_HDR_TNL_ENABLE_13_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_13_REG_POS 13
#define IAXXX_TNL_HDR_TNL_ENABLE_13_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_13_REG_DECL 13

/*
 * Enable/Disable tunnel 14
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_14_REG_MASK 0x00004000
#define IAXXX_TNL_HDR_TNL_ENABLE_14_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_14_REG_POS 14
#define IAXXX_TNL_HDR_TNL_ENABLE_14_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_14_REG_DECL 14

/*
 * Enable/Disable tunnel 15
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_15_REG_MASK 0x00008000
#define IAXXX_TNL_HDR_TNL_ENABLE_15_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_15_REG_POS 15
#define IAXXX_TNL_HDR_TNL_ENABLE_15_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_15_REG_DECL 15

/*
 * Enable/Disable tunnel 16
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_16_REG_MASK 0x00010000
#define IAXXX_TNL_HDR_TNL_ENABLE_16_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_16_REG_POS 16
#define IAXXX_TNL_HDR_TNL_ENABLE_16_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_16_REG_DECL 16

/*
 * Enable/Disable tunnel 17
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_17_REG_MASK 0x00020000
#define IAXXX_TNL_HDR_TNL_ENABLE_17_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_17_REG_POS 17
#define IAXXX_TNL_HDR_TNL_ENABLE_17_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_17_REG_DECL 17

/*
 * Enable/Disable tunnel 18
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_18_REG_MASK 0x00040000
#define IAXXX_TNL_HDR_TNL_ENABLE_18_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_18_REG_POS 18
#define IAXXX_TNL_HDR_TNL_ENABLE_18_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_18_REG_DECL 18

/*
 * Enable/Disable tunnel 19
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_19_REG_MASK 0x00080000
#define IAXXX_TNL_HDR_TNL_ENABLE_19_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_19_REG_POS 19
#define IAXXX_TNL_HDR_TNL_ENABLE_19_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_19_REG_DECL 19

/*
 * Enable/Disable tunnel 20
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_20_REG_MASK 0x00100000
#define IAXXX_TNL_HDR_TNL_ENABLE_20_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_20_REG_POS 20
#define IAXXX_TNL_HDR_TNL_ENABLE_20_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_20_REG_DECL 20

/*
 * Enable/Disable tunnel 21
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_21_REG_MASK 0x00200000
#define IAXXX_TNL_HDR_TNL_ENABLE_21_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_21_REG_POS 21
#define IAXXX_TNL_HDR_TNL_ENABLE_21_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_21_REG_DECL 21

/*
 * Enable/Disable tunnel 22
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_22_REG_MASK 0x00400000
#define IAXXX_TNL_HDR_TNL_ENABLE_22_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_22_REG_POS 22
#define IAXXX_TNL_HDR_TNL_ENABLE_22_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_22_REG_DECL 22

/*
 * Enable/Disable tunnel 23
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_23_REG_MASK 0x00800000
#define IAXXX_TNL_HDR_TNL_ENABLE_23_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_23_REG_POS 23
#define IAXXX_TNL_HDR_TNL_ENABLE_23_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_23_REG_DECL 23

/*
 * Enable/Disable tunnel 24
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_24_REG_MASK 0x01000000
#define IAXXX_TNL_HDR_TNL_ENABLE_24_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_24_REG_POS 24
#define IAXXX_TNL_HDR_TNL_ENABLE_24_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_24_REG_DECL 24

/*
 * Enable/Disable tunnel 25
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_25_REG_MASK 0x02000000
#define IAXXX_TNL_HDR_TNL_ENABLE_25_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_25_REG_POS 25
#define IAXXX_TNL_HDR_TNL_ENABLE_25_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_25_REG_DECL 25

/*
 * Enable/Disable tunnel 26
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_26_REG_MASK 0x04000000
#define IAXXX_TNL_HDR_TNL_ENABLE_26_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_26_REG_POS 26
#define IAXXX_TNL_HDR_TNL_ENABLE_26_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_26_REG_DECL 26

/*
 * Enable/Disable tunnel 27
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_27_REG_MASK 0x08000000
#define IAXXX_TNL_HDR_TNL_ENABLE_27_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_27_REG_POS 27
#define IAXXX_TNL_HDR_TNL_ENABLE_27_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_27_REG_DECL 27

/*
 * Enable/Disable tunnel 28
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_28_REG_MASK 0x10000000
#define IAXXX_TNL_HDR_TNL_ENABLE_28_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_28_REG_POS 28
#define IAXXX_TNL_HDR_TNL_ENABLE_28_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_28_REG_DECL 28

/*
 * Enable/Disable tunnel 29
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_29_REG_MASK 0x20000000
#define IAXXX_TNL_HDR_TNL_ENABLE_29_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_29_REG_POS 29
#define IAXXX_TNL_HDR_TNL_ENABLE_29_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_29_REG_DECL 29

/*
 * Enable/Disable tunnel 30
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_30_REG_MASK 0x40000000
#define IAXXX_TNL_HDR_TNL_ENABLE_30_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_30_REG_POS 30
#define IAXXX_TNL_HDR_TNL_ENABLE_30_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_30_REG_DECL 30

/*
 * Enable/Disable tunnel 31
 * 0 - Disable
 * 1 - Enable
 */
#define IAXXX_TNL_HDR_TNL_ENABLE_31_REG_MASK 0x80000000
#define IAXXX_TNL_HDR_TNL_ENABLE_31_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_ENABLE_31_REG_POS 31
#define IAXXX_TNL_HDR_TNL_ENABLE_31_REG_SIZE 1
#define IAXXX_TNL_HDR_TNL_ENABLE_31_REG_DECL 31

/*** TNL_HDR_TNL_OUT_BUF_SIZE (0x03000008) ***/
/*
 * Size of the tunnel output circular buffer in 32 bit words.
 */
#define IAXXX_TNL_HDR_TNL_OUT_BUF_SIZE_ADDR (0x03000008)
#define IAXXX_TNL_HDR_TNL_OUT_BUF_SIZE_MASK_VAL 0xffffffff
#define IAXXX_TNL_HDR_TNL_OUT_BUF_SIZE_RMASK_VAL 0xffffffff
#define IAXXX_TNL_HDR_TNL_OUT_BUF_SIZE_WMASK_VAL 0x00000000
#define IAXXX_TNL_HDR_TNL_OUT_BUF_SIZE_RESET_VAL 0x00000000

/*
 * Size of the tunnel buffer in 32 bit words.
 */
#define IAXXX_TNL_HDR_TNL_OUT_BUF_SIZE_REG_MASK 0xffffffff
#define IAXXX_TNL_HDR_TNL_OUT_BUF_SIZE_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_OUT_BUF_SIZE_REG_POS 0
#define IAXXX_TNL_HDR_TNL_OUT_BUF_SIZE_REG_SIZE 32
#define IAXXX_TNL_HDR_TNL_OUT_BUF_SIZE_REG_DECL (31 : 0)

/*** TNL_HDR_TNL_OUT_BUF_ADDR (0x0300000c) ***/
/*
 * Base address of the tunnel output circular buffer
 */
#define IAXXX_TNL_HDR_TNL_OUT_BUF_ADDR_ADDR (0x0300000c)
#define IAXXX_TNL_HDR_TNL_OUT_BUF_ADDR_MASK_VAL 0xffffffff
#define IAXXX_TNL_HDR_TNL_OUT_BUF_ADDR_RMASK_VAL 0xffffffff
#define IAXXX_TNL_HDR_TNL_OUT_BUF_ADDR_WMASK_VAL 0x00000000
#define IAXXX_TNL_HDR_TNL_OUT_BUF_ADDR_RESET_VAL 0x00000000

/*
 * Base address of the tunnel output circular buffer
 */
#define IAXXX_TNL_HDR_TNL_OUT_BUF_ADDR_REG_MASK 0xffffffff
#define IAXXX_TNL_HDR_TNL_OUT_BUF_ADDR_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_OUT_BUF_ADDR_REG_POS 0
#define IAXXX_TNL_HDR_TNL_OUT_BUF_ADDR_REG_SIZE 32
#define IAXXX_TNL_HDR_TNL_OUT_BUF_ADDR_REG_DECL (31 : 0)

/*** TNL_HDR_TNL_OUT_BUF_HEAD (0x03000010) ***/
/*
 * Head of the tunnel output circular buffer. It is 32 bit word offeset from
 * the base. Host should read from this address.
 */
#define IAXXX_TNL_HDR_TNL_OUT_BUF_HEAD_ADDR (0x03000010)
#define IAXXX_TNL_HDR_TNL_OUT_BUF_HEAD_MASK_VAL 0xffffffff
#define IAXXX_TNL_HDR_TNL_OUT_BUF_HEAD_RMASK_VAL 0xffffffff
#define IAXXX_TNL_HDR_TNL_OUT_BUF_HEAD_WMASK_VAL 0xffffffff
#define IAXXX_TNL_HDR_TNL_OUT_BUF_HEAD_RESET_VAL 0x00000000

/*
 * Head of the tunnel output circular buffer. It is 32 bit word offeset from
 * the base. Host should read from this address. Once host has read the data,
 * host should update the value of this register to the location till which
 * it has read the data.
 */
#define IAXXX_TNL_HDR_TNL_OUT_BUF_HEAD_REG_MASK 0xffffffff
#define IAXXX_TNL_HDR_TNL_OUT_BUF_HEAD_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_OUT_BUF_HEAD_REG_POS 0
#define IAXXX_TNL_HDR_TNL_OUT_BUF_HEAD_REG_SIZE 32
#define IAXXX_TNL_HDR_TNL_OUT_BUF_HEAD_REG_DECL (31 : 0)

/*** TNL_HDR_TNL_OUT_BUF_TAIL (0x03000014) ***/
/*
 * Tail of the tunnel output circular buffer. It is 32 bit word offeset from
 * the base. Host should read till this address.
 */
#define IAXXX_TNL_HDR_TNL_OUT_BUF_TAIL_ADDR (0x03000014)
#define IAXXX_TNL_HDR_TNL_OUT_BUF_TAIL_MASK_VAL 0xffffffff
#define IAXXX_TNL_HDR_TNL_OUT_BUF_TAIL_RMASK_VAL 0xffffffff
#define IAXXX_TNL_HDR_TNL_OUT_BUF_TAIL_WMASK_VAL 0x00000000
#define IAXXX_TNL_HDR_TNL_OUT_BUF_TAIL_RESET_VAL 0x00000000

/*
 * Head of the tunnel output circular buffer. It is 32 bit word offeset from
 * the base. Host should read till this address. Device updates this register
 * whenever it adds more data to the circular buffer.
 */
#define IAXXX_TNL_HDR_TNL_OUT_BUF_TAIL_REG_MASK 0xffffffff
#define IAXXX_TNL_HDR_TNL_OUT_BUF_TAIL_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_OUT_BUF_TAIL_REG_POS 0
#define IAXXX_TNL_HDR_TNL_OUT_BUF_TAIL_REG_SIZE 32
#define IAXXX_TNL_HDR_TNL_OUT_BUF_TAIL_REG_DECL (31 : 0)

/*** TNL_HDR_TNL_OUT_BUF_THRESHOLD (0x03000018) ***/
/*
 * When the data in the buffer crosses these many 32 bit words, an event will
 * be generated to notify host.
 */
#define IAXXX_TNL_HDR_TNL_OUT_BUF_THRESHOLD_ADDR (0x03000018)
#define IAXXX_TNL_HDR_TNL_OUT_BUF_THRESHOLD_MASK_VAL 0xffffffff
#define IAXXX_TNL_HDR_TNL_OUT_BUF_THRESHOLD_RMASK_VAL 0xffffffff
#define IAXXX_TNL_HDR_TNL_OUT_BUF_THRESHOLD_WMASK_VAL 0xffffffff
#define IAXXX_TNL_HDR_TNL_OUT_BUF_THRESHOLD_RESET_VAL 0x00000000

/*
 * Event generation threshold value in terms of number of 32 bit words. If
 * the value is 0, event generation is disabled.
 */
#define IAXXX_TNL_HDR_TNL_OUT_BUF_THRESHOLD_REG_MASK 0xffffffff
#define IAXXX_TNL_HDR_TNL_OUT_BUF_THRESHOLD_REG_RESET_VAL 0x0
#define IAXXX_TNL_HDR_TNL_OUT_BUF_THRESHOLD_REG_POS 0
#define IAXXX_TNL_HDR_TNL_OUT_BUF_THRESHOLD_REG_SIZE 32
#define IAXXX_TNL_HDR_TNL_OUT_BUF_THRESHOLD_REG_DECL (31 : 0)

/*** TNL_HDR_TNL_RESERVED_1 (0x0300001c) ***/
/*
 * Reserved register space for future use
 */
#define IAXXX_TNL_HDR_TNL_RESERVED_1_ADDR (0x0300001c)
#define IAXXX_TNL_HDR_TNL_RESERVED_1_MASK_VAL 0x00000000
#define IAXXX_TNL_HDR_TNL_RESERVED_1_RMASK_VAL 0x00000000
#define IAXXX_TNL_HDR_TNL_RESERVED_1_WMASK_VAL 0x00000000
#define IAXXX_TNL_HDR_TNL_RESERVED_1_RESET_VAL 0x00000000

/*** TNL_HDR_TNL_RESERVED_2 (0x03000020) ***/
/*
 * Reserved register space for future use
 */
#define IAXXX_TNL_HDR_TNL_RESERVED_2_ADDR (0x03000020)
#define IAXXX_TNL_HDR_TNL_RESERVED_2_MASK_VAL 0x00000000
#define IAXXX_TNL_HDR_TNL_RESERVED_2_RMASK_VAL 0x00000000
#define IAXXX_TNL_HDR_TNL_RESERVED_2_WMASK_VAL 0x00000000
#define IAXXX_TNL_HDR_TNL_RESERVED_2_RESET_VAL 0x00000000

/*** TNL_HDR_TNL_RESERVED_3 (0x03000024) ***/
/*
 * Reserved register space for future use
 */
#define IAXXX_TNL_HDR_TNL_RESERVED_3_ADDR (0x03000024)
#define IAXXX_TNL_HDR_TNL_RESERVED_3_MASK_VAL 0x00000000
#define IAXXX_TNL_HDR_TNL_RESERVED_3_RMASK_VAL 0x00000000
#define IAXXX_TNL_HDR_TNL_RESERVED_3_WMASK_VAL 0x00000000
#define IAXXX_TNL_HDR_TNL_RESERVED_3_RESET_VAL 0x00000000

/*** TNL_HDR_TNL_RESERVED_4 (0x03000028) ***/
/*
 * Reserved register space for future use
 */
#define IAXXX_TNL_HDR_TNL_RESERVED_4_ADDR (0x03000028)
#define IAXXX_TNL_HDR_TNL_RESERVED_4_MASK_VAL 0x00000000
#define IAXXX_TNL_HDR_TNL_RESERVED_4_RMASK_VAL 0x00000000
#define IAXXX_TNL_HDR_TNL_RESERVED_4_WMASK_VAL 0x00000000
#define IAXXX_TNL_HDR_TNL_RESERVED_4_RESET_VAL 0x00000000

/*** TNL_HDR_TNL_RESERVED_5 (0x0300002c) ***/
/*
 * Reserved register space for future use
 */
#define IAXXX_TNL_HDR_TNL_RESERVED_5_ADDR (0x0300002c)
#define IAXXX_TNL_HDR_TNL_RESERVED_5_MASK_VAL 0x00000000
#define IAXXX_TNL_HDR_TNL_RESERVED_5_RMASK_VAL 0x00000000
#define IAXXX_TNL_HDR_TNL_RESERVED_5_WMASK_VAL 0x00000000
#define IAXXX_TNL_HDR_TNL_RESERVED_5_RESET_VAL 0x00000000

/* Number of registers in the module */
#define IAXXX_TNL_HDR_REG_NUM 12

#endif /* __IAXXX_REGISTER_DEFS_TNL_HDR_H__ */
