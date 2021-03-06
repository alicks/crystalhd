/***************************************************************************
 *     Copyright (c) 1999-2009, Broadcom Corporation
 *
 **********************************************************************
 * This file is part of the crystalhd device driver.
 *
 * This driver is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 2 of the License.
 *
 * This driver is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this driver.  If not, see <http://www.gnu.org/licenses/>.
 **********************************************************************
 *
 * $brcm_Workfile: bchp_bop_aes.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 7:57p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:43:05 2009
 *                 MD5 Checksum         2914699efc3fb3edefca5cb4f4f38b34
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_bop_aes.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 7:57p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_BOP_AES_H__
#define BCHP_BOP_AES_H__

/***************************************************************************
 *BOP_AES - BOP Top Control Registers
 ***************************************************************************/
#define BCHP_BOP_AES_CTRL                        0x00510000 /* AES Control Register */
#define BCHP_BOP_AES_SCRAMBLE_SETUP              0x00510004 /* AES Scramble Setup Register */
#define BCHP_BOP_AES_ENCRYPTION_SETUP            0x00510008 /* AES Encryption Setup Register */
#define BCHP_BOP_AES_STATUS                      0x0051000c /* AES Status Register */
#define BCHP_BOP_AES_SCRAMBLE_NONCE0             0x00510010 /* AES Scramble Nonce Register0 */
#define BCHP_BOP_AES_SCRAMBLE_NONCE1             0x00510014 /* AES Scramble Nonce Register1 */
#define BCHP_BOP_AES_INITIAL_VECTOR0             0x00510018 /* AES Initial Vector Register0 */
#define BCHP_BOP_AES_INITIAL_VECTOR1             0x0051001c /* AES Initial Vector Register1 */
#define BCHP_BOP_AES_INITIAL_VECTOR2             0x00510020 /* AES Initial Vector Register2 */
#define BCHP_BOP_AES_INITIAL_VECTOR3             0x00510024 /* AES Initial Vector Register3 */
#define BCHP_BOP_AES_INITIAL_COUNTER0            0x00510028 /* AES Initial Counter Register0 */
#define BCHP_BOP_AES_INITIAL_COUNTER1            0x0051002c /* AES Initial Counter Register1 */
#define BCHP_BOP_AES_INITIAL_COUNTER2            0x00510030 /* AES Initial Counter Register2 */
#define BCHP_BOP_AES_INITIAL_COUNTER3            0x00510034 /* AES Initial Counter Register3 */

/***************************************************************************
 *CTRL - AES Control Register
 ***************************************************************************/
/* BOP_AES :: CTRL :: reserved0 [31:11] */
#define BCHP_BOP_AES_CTRL_reserved0_MASK                           0xfffff800
#define BCHP_BOP_AES_CTRL_reserved0_SHIFT                          11

/* BOP_AES :: CTRL :: SCRAMBLE_MODE [10:10] */
#define BCHP_BOP_AES_CTRL_SCRAMBLE_MODE_MASK                       0x00000400
#define BCHP_BOP_AES_CTRL_SCRAMBLE_MODE_SHIFT                      10

/* BOP_AES :: CTRL :: ENCRYPTION_MODE [09:08] */
#define BCHP_BOP_AES_CTRL_ENCRYPTION_MODE_MASK                     0x00000300
#define BCHP_BOP_AES_CTRL_ENCRYPTION_MODE_SHIFT                    8

/* BOP_AES :: CTRL :: reserved1 [07:05] */
#define BCHP_BOP_AES_CTRL_reserved1_MASK                           0x000000e0
#define BCHP_BOP_AES_CTRL_reserved1_SHIFT                          5

/* BOP_AES :: CTRL :: SWAP [04:04] */
#define BCHP_BOP_AES_CTRL_SWAP_MASK                                0x00000010
#define BCHP_BOP_AES_CTRL_SWAP_SHIFT                               4

/* BOP_AES :: CTRL :: reserved2 [03:01] */
#define BCHP_BOP_AES_CTRL_reserved2_MASK                           0x0000000e
#define BCHP_BOP_AES_CTRL_reserved2_SHIFT                          1

/* BOP_AES :: CTRL :: START_ENCRYPTION_SCRAMBLE [00:00] */
#define BCHP_BOP_AES_CTRL_START_ENCRYPTION_SCRAMBLE_MASK           0x00000001
#define BCHP_BOP_AES_CTRL_START_ENCRYPTION_SCRAMBLE_SHIFT          0

/***************************************************************************
 *SCRAMBLE_SETUP - AES Scramble Setup Register
 ***************************************************************************/
/* BOP_AES :: SCRAMBLE_SETUP :: Length [31:16] */
#define BCHP_BOP_AES_SCRAMBLE_SETUP_Length_MASK                    0xffff0000
#define BCHP_BOP_AES_SCRAMBLE_SETUP_Length_SHIFT                   16

/* BOP_AES :: SCRAMBLE_SETUP :: OFFSET [15:00] */
#define BCHP_BOP_AES_SCRAMBLE_SETUP_OFFSET_MASK                    0x0000ffff
#define BCHP_BOP_AES_SCRAMBLE_SETUP_OFFSET_SHIFT                   0

/***************************************************************************
 *ENCRYPTION_SETUP - AES Encryption Setup Register
 ***************************************************************************/
/* BOP_AES :: ENCRYPTION_SETUP :: Length [31:16] */
#define BCHP_BOP_AES_ENCRYPTION_SETUP_Length_MASK                  0xffff0000
#define BCHP_BOP_AES_ENCRYPTION_SETUP_Length_SHIFT                 16

/* BOP_AES :: ENCRYPTION_SETUP :: OFFSET [15:00] */
#define BCHP_BOP_AES_ENCRYPTION_SETUP_OFFSET_MASK                  0x0000ffff
#define BCHP_BOP_AES_ENCRYPTION_SETUP_OFFSET_SHIFT                 0

/***************************************************************************
 *STATUS - AES Status Register
 ***************************************************************************/
/* BOP_AES :: STATUS :: reserved0 [31:04] */
#define BCHP_BOP_AES_STATUS_reserved0_MASK                         0xfffffff0
#define BCHP_BOP_AES_STATUS_reserved0_SHIFT                        4

/* BOP_AES :: STATUS :: SCRAMBLE_KEY_NUMBER_IN_USE [03:02] */
#define BCHP_BOP_AES_STATUS_SCRAMBLE_KEY_NUMBER_IN_USE_MASK        0x0000000c
#define BCHP_BOP_AES_STATUS_SCRAMBLE_KEY_NUMBER_IN_USE_SHIFT       2

/* BOP_AES :: STATUS :: ENCRYPTION_KEY_NUMBER_IN_USE [01:00] */
#define BCHP_BOP_AES_STATUS_ENCRYPTION_KEY_NUMBER_IN_USE_MASK      0x00000003
#define BCHP_BOP_AES_STATUS_ENCRYPTION_KEY_NUMBER_IN_USE_SHIFT     0

/***************************************************************************
 *SCRAMBLE_NONCE0 - AES Scramble Nonce Register0
 ***************************************************************************/
/* BOP_AES :: SCRAMBLE_NONCE0 :: SCRAMBLE_NONCE [31:00] */
#define BCHP_BOP_AES_SCRAMBLE_NONCE0_SCRAMBLE_NONCE_MASK           0xffffffff
#define BCHP_BOP_AES_SCRAMBLE_NONCE0_SCRAMBLE_NONCE_SHIFT          0

/***************************************************************************
 *SCRAMBLE_NONCE1 - AES Scramble Nonce Register1
 ***************************************************************************/
/* BOP_AES :: SCRAMBLE_NONCE1 :: SCRAMBLE_NONCE [31:00] */
#define BCHP_BOP_AES_SCRAMBLE_NONCE1_SCRAMBLE_NONCE_MASK           0xffffffff
#define BCHP_BOP_AES_SCRAMBLE_NONCE1_SCRAMBLE_NONCE_SHIFT          0

/***************************************************************************
 *INITIAL_VECTOR0 - AES Initial Vector Register0
 ***************************************************************************/
/* BOP_AES :: INITIAL_VECTOR0 :: INITIAL_VECTOR [31:00] */
#define BCHP_BOP_AES_INITIAL_VECTOR0_INITIAL_VECTOR_MASK           0xffffffff
#define BCHP_BOP_AES_INITIAL_VECTOR0_INITIAL_VECTOR_SHIFT          0

/***************************************************************************
 *INITIAL_VECTOR1 - AES Initial Vector Register1
 ***************************************************************************/
/* BOP_AES :: INITIAL_VECTOR1 :: INITIAL_VECTOR [31:00] */
#define BCHP_BOP_AES_INITIAL_VECTOR1_INITIAL_VECTOR_MASK           0xffffffff
#define BCHP_BOP_AES_INITIAL_VECTOR1_INITIAL_VECTOR_SHIFT          0

/***************************************************************************
 *INITIAL_VECTOR2 - AES Initial Vector Register2
 ***************************************************************************/
/* BOP_AES :: INITIAL_VECTOR2 :: INITIAL_VECTOR [31:00] */
#define BCHP_BOP_AES_INITIAL_VECTOR2_INITIAL_VECTOR_MASK           0xffffffff
#define BCHP_BOP_AES_INITIAL_VECTOR2_INITIAL_VECTOR_SHIFT          0

/***************************************************************************
 *INITIAL_VECTOR3 - AES Initial Vector Register3
 ***************************************************************************/
/* BOP_AES :: INITIAL_VECTOR3 :: INITIAL_VECTOR [31:00] */
#define BCHP_BOP_AES_INITIAL_VECTOR3_INITIAL_VECTOR_MASK           0xffffffff
#define BCHP_BOP_AES_INITIAL_VECTOR3_INITIAL_VECTOR_SHIFT          0

/***************************************************************************
 *INITIAL_COUNTER0 - AES Initial Counter Register0
 ***************************************************************************/
/* BOP_AES :: INITIAL_COUNTER0 :: INITIAL_COUNTER [31:00] */
#define BCHP_BOP_AES_INITIAL_COUNTER0_INITIAL_COUNTER_MASK         0xffffffff
#define BCHP_BOP_AES_INITIAL_COUNTER0_INITIAL_COUNTER_SHIFT        0

/***************************************************************************
 *INITIAL_COUNTER1 - AES Initial Counter Register1
 ***************************************************************************/
/* BOP_AES :: INITIAL_COUNTER1 :: INITIAL_COUNTER [31:00] */
#define BCHP_BOP_AES_INITIAL_COUNTER1_INITIAL_COUNTER_MASK         0xffffffff
#define BCHP_BOP_AES_INITIAL_COUNTER1_INITIAL_COUNTER_SHIFT        0

/***************************************************************************
 *INITIAL_COUNTER2 - AES Initial Counter Register2
 ***************************************************************************/
/* BOP_AES :: INITIAL_COUNTER2 :: INITIAL_COUNTER [31:00] */
#define BCHP_BOP_AES_INITIAL_COUNTER2_INITIAL_COUNTER_MASK         0xffffffff
#define BCHP_BOP_AES_INITIAL_COUNTER2_INITIAL_COUNTER_SHIFT        0

/***************************************************************************
 *INITIAL_COUNTER3 - AES Initial Counter Register3
 ***************************************************************************/
/* BOP_AES :: INITIAL_COUNTER3 :: INITIAL_COUNTER [31:00] */
#define BCHP_BOP_AES_INITIAL_COUNTER3_INITIAL_COUNTER_MASK         0xffffffff
#define BCHP_BOP_AES_INITIAL_COUNTER3_INITIAL_COUNTER_SHIFT        0

#endif /* #ifndef BCHP_BOP_AES_H__ */

/* End of File */
