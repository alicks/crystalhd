/***************************************************************************
 *     Copyright (c) 1999-2009, Broadcom Corporation
 *     All Rights Reserved
 *     Confidential Property of Broadcom Corporation
 *
 *
 * THIS SOFTWARE MAY ONLY BE USED SUBJECT TO AN EXECUTED SOFTWARE LICENSE
 * AGREEMENT  BETWEEN THE USER AND BROADCOM.  YOU HAVE NO RIGHT TO USE OR
 * EXPLOIT THIS MATERIAL EXCEPT SUBJECT TO THE TERMS OF SUCH AN AGREEMENT.
 *
 * $brcm_Workfile: bchp_pcie_tl.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 8:13p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:42:28 2009
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
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_pcie_tl.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 8:13p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_PCIE_TL_H__
#define BCHP_PCIE_TL_H__

/***************************************************************************
 *PCIE_TL - PCIE TL related registers
 ***************************************************************************/
#define BCHP_PCIE_TL_TL_CONTROL                  0x00500400 /* TL_CONTROL Register */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION   0x00500404 /* TRANSACTION_CONFIGURATION Register */
#define BCHP_PCIE_TL_WRITE_DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC 0x00500408 /* WRITE_DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC Register */
#define BCHP_PCIE_TL_WRITE_DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC_2 0x0050040c /* WRITE_DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC_2 Register */
#define BCHP_PCIE_TL_DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC 0x00500410 /* DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC Register */
#define BCHP_PCIE_TL_DMA_REQUEST_LOWER_ADDRESS_DIAGNOSTIC_2 0x00500414 /* DMA_REQUEST_LOWER_ADDRESS_DIAGNOSTIC_2 Register */
#define BCHP_PCIE_TL_DMA_REQUEST_LENGTH_BYTE_ENABLE_DIAGNOSTIC 0x00500418 /* DMA_REQUEST_LENGTH_BYTE_ENABLE_DIAGNOSTIC Register */
#define BCHP_PCIE_TL_DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC 0x0050041c /* DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC Register */
#define BCHP_PCIE_TL_READ_DMA_SPLIT_IDS_DIAGNOSTIC 0x00500420 /* READ_DMA_SPLIT_IDS_DIAGNOSTIC Register */
#define BCHP_PCIE_TL_READ_DMA_SPLIT_LENGTH_DIAGNOSTIC 0x00500424 /* READ_DMA_SPLIT_LENGTH_DIAGNOSTIC Register */
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC 0x0050043c /* XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC Register */
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC 0x00500458 /* DMA_COMPLETION_MISC__DIAGNOSTIC Register */
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_0_DIAGNOSTIC 0x0050045c /* SPLIT_CONTROLLER_MISC_0_DIAGNOSTIC Register */
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC 0x00500460 /* SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC Register */
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC 0x00500464 /* SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC Register */
#define BCHP_PCIE_TL_TL_BUS_NO_DEV__NO__FUNC__NO 0x00500468 /* TL_BUS_NO_DEV__NO__FUNC__NO Register */
#define BCHP_PCIE_TL_TL_DEBUG                    0x0050046c /* TL_DEBUG Register */

/***************************************************************************
 *TL_CONTROL - TL_CONTROL Register
 ***************************************************************************/
/* PCIE_TL :: TL_CONTROL :: RESERVED_0 [31:31] */
#define BCHP_PCIE_TL_TL_CONTROL_RESERVED_0_MASK                    0x80000000
#define BCHP_PCIE_TL_TL_CONTROL_RESERVED_0_SHIFT                   31

/* PCIE_TL :: TL_CONTROL :: CQ14298_FIX_ENA_N [30:30] */
#define BCHP_PCIE_TL_TL_CONTROL_CQ14298_FIX_ENA_N_MASK             0x40000000
#define BCHP_PCIE_TL_TL_CONTROL_CQ14298_FIX_ENA_N_SHIFT            30

/* PCIE_TL :: TL_CONTROL :: RESERVED_1 [29:29] */
#define BCHP_PCIE_TL_TL_CONTROL_RESERVED_1_MASK                    0x20000000
#define BCHP_PCIE_TL_TL_CONTROL_RESERVED_1_SHIFT                   29

/* PCIE_TL :: TL_CONTROL :: INTA_WAKEUP_LINK_CLKREQ_DA [28:28] */
#define BCHP_PCIE_TL_TL_CONTROL_INTA_WAKEUP_LINK_CLKREQ_DA_MASK    0x10000000
#define BCHP_PCIE_TL_TL_CONTROL_INTA_WAKEUP_LINK_CLKREQ_DA_SHIFT   28

/* PCIE_TL :: TL_CONTROL :: RESERVED_2 [27:27] */
#define BCHP_PCIE_TL_TL_CONTROL_RESERVED_2_MASK                    0x08000000
#define BCHP_PCIE_TL_TL_CONTROL_RESERVED_2_SHIFT                   27

/* PCIE_TL :: TL_CONTROL :: CQ9583_TYPE_1_VENDOR_DEFINED_MESSAGE_FIX [26:26] */
#define BCHP_PCIE_TL_TL_CONTROL_CQ9583_TYPE_1_VENDOR_DEFINED_MESSAGE_FIX_MASK 0x04000000
#define BCHP_PCIE_TL_TL_CONTROL_CQ9583_TYPE_1_VENDOR_DEFINED_MESSAGE_FIX_SHIFT 26

/* PCIE_TL :: TL_CONTROL :: RESERVED_3 [25:25] */
#define BCHP_PCIE_TL_TL_CONTROL_RESERVED_3_MASK                    0x02000000
#define BCHP_PCIE_TL_TL_CONTROL_RESERVED_3_SHIFT                   25

/* PCIE_TL :: TL_CONTROL :: RESERVED_4 [24:24] */
#define BCHP_PCIE_TL_TL_CONTROL_RESERVED_4_MASK                    0x01000000
#define BCHP_PCIE_TL_TL_CONTROL_RESERVED_4_SHIFT                   24

/* PCIE_TL :: TL_CONTROL :: RESERVED_5 [23:23] */
#define BCHP_PCIE_TL_TL_CONTROL_RESERVED_5_MASK                    0x00800000
#define BCHP_PCIE_TL_TL_CONTROL_RESERVED_5_SHIFT                   23

/* PCIE_TL :: TL_CONTROL :: CRC_SWAP [22:22] */
#define BCHP_PCIE_TL_TL_CONTROL_CRC_SWAP_MASK                      0x00400000
#define BCHP_PCIE_TL_TL_CONTROL_CRC_SWAP_SHIFT                     22

/* PCIE_TL :: TL_CONTROL :: SLV_CMP_DIS_CA_ERROR [21:21] */
#define BCHP_PCIE_TL_TL_CONTROL_SLV_CMP_DIS_CA_ERROR_MASK          0x00200000
#define BCHP_PCIE_TL_TL_CONTROL_SLV_CMP_DIS_CA_ERROR_SHIFT         21

/* PCIE_TL :: TL_CONTROL :: SLV_CMP_DIS_UR_ERROR [20:20] */
#define BCHP_PCIE_TL_TL_CONTROL_SLV_CMP_DIS_UR_ERROR_MASK          0x00100000
#define BCHP_PCIE_TL_TL_CONTROL_SLV_CMP_DIS_UR_ERROR_SHIFT         20

/* PCIE_TL :: TL_CONTROL :: SLV_CMP_DIS_RSV_ERROR [19:19] */
#define BCHP_PCIE_TL_TL_CONTROL_SLV_CMP_DIS_RSV_ERROR_MASK         0x00080000
#define BCHP_PCIE_TL_TL_CONTROL_SLV_CMP_DIS_RSV_ERROR_SHIFT        19

/* PCIE_TL :: TL_CONTROL :: RESERVED_6 [18:18] */
#define BCHP_PCIE_TL_TL_CONTROL_RESERVED_6_MASK                    0x00040000
#define BCHP_PCIE_TL_TL_CONTROL_RESERVED_6_SHIFT                   18

/* PCIE_TL :: TL_CONTROL :: SLV_CMP_DIS_EP_ERROR [17:17] */
#define BCHP_PCIE_TL_TL_CONTROL_SLV_CMP_DIS_EP_ERROR_MASK          0x00020000
#define BCHP_PCIE_TL_TL_CONTROL_SLV_CMP_DIS_EP_ERROR_SHIFT         17

/* PCIE_TL :: TL_CONTROL :: ENABLE_BYTECOUNT_CHECK [16:16] */
#define BCHP_PCIE_TL_TL_CONTROL_ENABLE_BYTECOUNT_CHECK_MASK        0x00010000
#define BCHP_PCIE_TL_TL_CONTROL_ENABLE_BYTECOUNT_CHECK_SHIFT       16

/* PCIE_TL :: TL_CONTROL :: NOT_USED [15:14] */
#define BCHP_PCIE_TL_TL_CONTROL_NOT_USED_MASK                      0x0000c000
#define BCHP_PCIE_TL_TL_CONTROL_NOT_USED_SHIFT                     14

/* PCIE_TL :: TL_CONTROL :: TRAFFIC_CLASS_DR [13:11] */
#define BCHP_PCIE_TL_TL_CONTROL_TRAFFIC_CLASS_DR_MASK              0x00003800
#define BCHP_PCIE_TL_TL_CONTROL_TRAFFIC_CLASS_DR_SHIFT             11

/* PCIE_TL :: TL_CONTROL :: TRAFFIC_CLASS_DW [10:08] */
#define BCHP_PCIE_TL_TL_CONTROL_TRAFFIC_CLASS_DW_MASK              0x00000700
#define BCHP_PCIE_TL_TL_CONTROL_TRAFFIC_CLASS_DW_SHIFT             8

/* PCIE_TL :: TL_CONTROL :: NOT_USED_0 [07:06] */
#define BCHP_PCIE_TL_TL_CONTROL_NOT_USED_0_MASK                    0x000000c0
#define BCHP_PCIE_TL_TL_CONTROL_NOT_USED_0_SHIFT                   6

/* PCIE_TL :: TL_CONTROL :: NOT_USED_1 [05:00] */
#define BCHP_PCIE_TL_TL_CONTROL_NOT_USED_1_MASK                    0x0000003f
#define BCHP_PCIE_TL_TL_CONTROL_NOT_USED_1_SHIFT                   0

/***************************************************************************
 *TRANSACTION_CONFIGURATION - TRANSACTION_CONFIGURATION Register
 ***************************************************************************/
/* PCIE_TL :: TRANSACTION_CONFIGURATION :: ENABLE_RETRY_BUFFER_TIMING_MOD [31:31] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_RETRY_BUFFER_TIMING_MOD_MASK 0x80000000
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_RETRY_BUFFER_TIMING_MOD_SHIFT 31

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: RESERVED_0 [30:30] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_RESERVED_0_MASK     0x40000000
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_RESERVED_0_SHIFT    30

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: MSI_SINGLE_SHOT_ENABLE [29:29] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_MSI_SINGLE_SHOT_ENABLE_MASK 0x20000000
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_MSI_SINGLE_SHOT_ENABLE_SHIFT 29

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: RESERVED_1 [28:28] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_RESERVED_1_MASK     0x10000000
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_RESERVED_1_SHIFT    28

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: SELECT_CORE_CLOCK_OVERRIDE [27:27] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_SELECT_CORE_CLOCK_OVERRIDE_MASK 0x08000000
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_SELECT_CORE_CLOCK_OVERRIDE_SHIFT 27

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: CQ9139_FIX_ENABLE [26:26] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_CQ9139_FIX_ENABLE_MASK 0x04000000
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_CQ9139_FIX_ENABLE_SHIFT 26

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: ENABLE_CMPT_PWR_CHECK [25:25] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_CMPT_PWR_CHECK_MASK 0x02000000
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_CMPT_PWR_CHECK_SHIFT 25

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: ENABLE_CQ12696_FIX [24:24] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_CQ12696_FIX_MASK 0x01000000
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_CQ12696_FIX_SHIFT 24

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: DEVICE_SERIAL_NO_OVERRIDE [23:23] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_DEVICE_SERIAL_NO_OVERRIDE_MASK 0x00800000
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_DEVICE_SERIAL_NO_OVERRIDE_SHIFT 23

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: ENABLE_CQ12455_FIX [22:22] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_CQ12455_FIX_MASK 0x00400000
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_CQ12455_FIX_SHIFT 22

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: ENABLE_TC_VC_FILTERING_CHECK [21:21] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_TC_VC_FILTERING_CHECK_MASK 0x00200000
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_TC_VC_FILTERING_CHECK_SHIFT 21

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: DONT_GEN_HOT_PLUG_MSG [20:20] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_DONT_GEN_HOT_PLUG_MSG_MASK 0x00100000
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_DONT_GEN_HOT_PLUG_MSG_SHIFT 20

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: IGNORE_HOTPLUG_MSG [19:19] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_IGNORE_HOTPLUG_MSG_MASK 0x00080000
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_IGNORE_HOTPLUG_MSG_SHIFT 19

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: MSI_MULTMSG_CAPABLE [18:16] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_MSI_MULTMSG_CAPABLE_MASK 0x00070000
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_MSI_MULTMSG_CAPABLE_SHIFT 16

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: DATA_SELECT_LIMIT [15:12] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_DATA_SELECT_LIMIT_MASK 0x0000f000
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_DATA_SELECT_LIMIT_SHIFT 12

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: ENABLE_PCIE_1_1_PL [11:11] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_PCIE_1_1_PL_MASK 0x00000800
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_PCIE_1_1_PL_SHIFT 11

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: ENABLE_PCIE_1_1_DL [10:10] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_PCIE_1_1_DL_MASK 0x00000400
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_PCIE_1_1_DL_SHIFT 10

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: ENABLE_PCIE_1_1_TL [09:09] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_PCIE_1_1_TL_MASK 0x00000200
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_PCIE_1_1_TL_SHIFT 9

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: RESERVED_2 [08:08] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_RESERVED_2_MASK     0x00000100
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_RESERVED_2_SHIFT    8

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: DEVICE_SERIAL_CAP_ENABLE [07:07] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_DEVICE_SERIAL_CAP_ENABLE_MASK 0x00000080
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_DEVICE_SERIAL_CAP_ENABLE_SHIFT 7

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: PCIE_POWER_BUDGET_CAP_ENABLE [06:06] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_PCIE_POWER_BUDGET_CAP_ENABLE_MASK 0x00000040
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_PCIE_POWER_BUDGET_CAP_ENABLE_SHIFT 6

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: LOM_CONFIGURATION [05:05] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_LOM_CONFIGURATION_MASK 0x00000020
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_LOM_CONFIGURATION_SHIFT 5

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: CONCATE_SELECT [04:04] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_CONCATE_SELECT_MASK 0x00000010
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_CONCATE_SELECT_SHIFT 4

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: RESERVED_3 [03:03] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_RESERVED_3_MASK     0x00000008
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_RESERVED_3_SHIFT    3

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: ENABLE_9468_FIX [02:02] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_9468_FIX_MASK 0x00000004
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_9468_FIX_SHIFT 2

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: POWER_STATE_WRITE_MEM_ENABLE [01:01] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_POWER_STATE_WRITE_MEM_ENABLE_MASK 0x00000002
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_POWER_STATE_WRITE_MEM_ENABLE_SHIFT 1

/* PCIE_TL :: TRANSACTION_CONFIGURATION :: ENABLE_9709_ENABLE [00:00] */
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_9709_ENABLE_MASK 0x00000001
#define BCHP_PCIE_TL_TRANSACTION_CONFIGURATION_ENABLE_9709_ENABLE_SHIFT 0

/***************************************************************************
 *WRITE_DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC - WRITE_DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC Register
 ***************************************************************************/
/* PCIE_TL :: WRITE_DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC :: RESERVED_0 [31:00] */
#define BCHP_PCIE_TL_WRITE_DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC_RESERVED_0_MASK 0xffffffff
#define BCHP_PCIE_TL_WRITE_DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC_RESERVED_0_SHIFT 0

/***************************************************************************
 *WRITE_DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC_2 - WRITE_DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC_2 Register
 ***************************************************************************/
/* PCIE_TL :: WRITE_DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC_2 :: RESERVED_0 [31:00] */
#define BCHP_PCIE_TL_WRITE_DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC_2_RESERVED_0_MASK 0xffffffff
#define BCHP_PCIE_TL_WRITE_DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC_2_RESERVED_0_SHIFT 0

/***************************************************************************
 *DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC - DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC Register
 ***************************************************************************/
/* PCIE_TL :: DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC :: REG_MADDR_UPR [31:00] */
#define BCHP_PCIE_TL_DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC_REG_MADDR_UPR_MASK 0xffffffff
#define BCHP_PCIE_TL_DMA_REQUEST_UPPER_ADDRESS_DIAGNOSTIC_REG_MADDR_UPR_SHIFT 0

/***************************************************************************
 *DMA_REQUEST_LOWER_ADDRESS_DIAGNOSTIC_2 - DMA_REQUEST_LOWER_ADDRESS_DIAGNOSTIC_2 Register
 ***************************************************************************/
/* PCIE_TL :: DMA_REQUEST_LOWER_ADDRESS_DIAGNOSTIC_2 :: REG_MADDR_LWR [31:00] */
#define BCHP_PCIE_TL_DMA_REQUEST_LOWER_ADDRESS_DIAGNOSTIC_2_REG_MADDR_LWR_MASK 0xffffffff
#define BCHP_PCIE_TL_DMA_REQUEST_LOWER_ADDRESS_DIAGNOSTIC_2_REG_MADDR_LWR_SHIFT 0

/***************************************************************************
 *DMA_REQUEST_LENGTH_BYTE_ENABLE_DIAGNOSTIC - DMA_REQUEST_LENGTH_BYTE_ENABLE_DIAGNOSTIC Register
 ***************************************************************************/
/* PCIE_TL :: DMA_REQUEST_LENGTH_BYTE_ENABLE_DIAGNOSTIC :: REG_MLEN_BE [31:24] */
#define BCHP_PCIE_TL_DMA_REQUEST_LENGTH_BYTE_ENABLE_DIAGNOSTIC_REG_MLEN_BE_MASK 0xff000000
#define BCHP_PCIE_TL_DMA_REQUEST_LENGTH_BYTE_ENABLE_DIAGNOSTIC_REG_MLEN_BE_SHIFT 24

/* PCIE_TL :: DMA_REQUEST_LENGTH_BYTE_ENABLE_DIAGNOSTIC :: DMA_REQUEST_FIRST_DW_BYTE_ENABLES [23:20] */
#define BCHP_PCIE_TL_DMA_REQUEST_LENGTH_BYTE_ENABLE_DIAGNOSTIC_DMA_REQUEST_FIRST_DW_BYTE_ENABLES_MASK 0x00f00000
#define BCHP_PCIE_TL_DMA_REQUEST_LENGTH_BYTE_ENABLE_DIAGNOSTIC_DMA_REQUEST_FIRST_DW_BYTE_ENABLES_SHIFT 20

/* PCIE_TL :: DMA_REQUEST_LENGTH_BYTE_ENABLE_DIAGNOSTIC :: DMA_REQUEST_LAST_DW_BYTE_ENABLES [19:16] */
#define BCHP_PCIE_TL_DMA_REQUEST_LENGTH_BYTE_ENABLE_DIAGNOSTIC_DMA_REQUEST_LAST_DW_BYTE_ENABLES_MASK 0x000f0000
#define BCHP_PCIE_TL_DMA_REQUEST_LENGTH_BYTE_ENABLE_DIAGNOSTIC_DMA_REQUEST_LAST_DW_BYTE_ENABLES_SHIFT 16

/* PCIE_TL :: DMA_REQUEST_LENGTH_BYTE_ENABLE_DIAGNOSTIC :: RESERVED_0 [15:11] */
#define BCHP_PCIE_TL_DMA_REQUEST_LENGTH_BYTE_ENABLE_DIAGNOSTIC_RESERVED_0_MASK 0x0000f800
#define BCHP_PCIE_TL_DMA_REQUEST_LENGTH_BYTE_ENABLE_DIAGNOSTIC_RESERVED_0_SHIFT 11

/* PCIE_TL :: DMA_REQUEST_LENGTH_BYTE_ENABLE_DIAGNOSTIC :: DMA_REQUEST_DW_LENGTH [10:00] */
#define BCHP_PCIE_TL_DMA_REQUEST_LENGTH_BYTE_ENABLE_DIAGNOSTIC_DMA_REQUEST_DW_LENGTH_MASK 0x000007ff
#define BCHP_PCIE_TL_DMA_REQUEST_LENGTH_BYTE_ENABLE_DIAGNOSTIC_DMA_REQUEST_DW_LENGTH_SHIFT 0

/***************************************************************************
 *DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC - DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC Register
 ***************************************************************************/
/* PCIE_TL :: DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC :: REG_MTAG_ATTR [31:19] */
#define BCHP_PCIE_TL_DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC_REG_MTAG_ATTR_MASK 0xfff80000
#define BCHP_PCIE_TL_DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC_REG_MTAG_ATTR_SHIFT 19

/* PCIE_TL :: DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC :: DMA_REQUEST_FUNCTION [18:16] */
#define BCHP_PCIE_TL_DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC_DMA_REQUEST_FUNCTION_MASK 0x00070000
#define BCHP_PCIE_TL_DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC_DMA_REQUEST_FUNCTION_SHIFT 16

/* PCIE_TL :: DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC :: RESERVED_0 [15:13] */
#define BCHP_PCIE_TL_DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC_RESERVED_0_MASK 0x0000e000
#define BCHP_PCIE_TL_DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC_RESERVED_0_SHIFT 13

/* PCIE_TL :: DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC :: DMA_REQUEST_ATTRIBUTES [12:08] */
#define BCHP_PCIE_TL_DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC_DMA_REQUEST_ATTRIBUTES_MASK 0x00001f00
#define BCHP_PCIE_TL_DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC_DMA_REQUEST_ATTRIBUTES_SHIFT 8

/* PCIE_TL :: DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC :: RESERVED_1 [07:05] */
#define BCHP_PCIE_TL_DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC_RESERVED_1_MASK 0x000000e0
#define BCHP_PCIE_TL_DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC_RESERVED_1_SHIFT 5

/* PCIE_TL :: DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC :: DMA_REQUEST_TAG [04:00] */
#define BCHP_PCIE_TL_DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC_DMA_REQUEST_TAG_MASK 0x0000001f
#define BCHP_PCIE_TL_DMA_REQUEST_TAG_ATTRIBUTE_FUNCTION_DIAGNOSTIC_DMA_REQUEST_TAG_SHIFT 0

/***************************************************************************
 *READ_DMA_SPLIT_IDS_DIAGNOSTIC - READ_DMA_SPLIT_IDS_DIAGNOSTIC Register
 ***************************************************************************/
/* PCIE_TL :: READ_DMA_SPLIT_IDS_DIAGNOSTIC :: REG_SPLIT_ID [31:16] */
#define BCHP_PCIE_TL_READ_DMA_SPLIT_IDS_DIAGNOSTIC_REG_SPLIT_ID_MASK 0xffff0000
#define BCHP_PCIE_TL_READ_DMA_SPLIT_IDS_DIAGNOSTIC_REG_SPLIT_ID_SHIFT 16

/* PCIE_TL :: READ_DMA_SPLIT_IDS_DIAGNOSTIC :: RESERVED_0 [15:13] */
#define BCHP_PCIE_TL_READ_DMA_SPLIT_IDS_DIAGNOSTIC_RESERVED_0_MASK 0x0000e000
#define BCHP_PCIE_TL_READ_DMA_SPLIT_IDS_DIAGNOSTIC_RESERVED_0_SHIFT 13

/* PCIE_TL :: READ_DMA_SPLIT_IDS_DIAGNOSTIC :: READ_DMA_SPLIT_ATTRIBUTES [12:11] */
#define BCHP_PCIE_TL_READ_DMA_SPLIT_IDS_DIAGNOSTIC_READ_DMA_SPLIT_ATTRIBUTES_MASK 0x00001800
#define BCHP_PCIE_TL_READ_DMA_SPLIT_IDS_DIAGNOSTIC_READ_DMA_SPLIT_ATTRIBUTES_SHIFT 11

/* PCIE_TL :: READ_DMA_SPLIT_IDS_DIAGNOSTIC :: READ_DMA_SPLIT_TC [10:08] */
#define BCHP_PCIE_TL_READ_DMA_SPLIT_IDS_DIAGNOSTIC_READ_DMA_SPLIT_TC_MASK 0x00000700
#define BCHP_PCIE_TL_READ_DMA_SPLIT_IDS_DIAGNOSTIC_READ_DMA_SPLIT_TC_SHIFT 8

/* PCIE_TL :: READ_DMA_SPLIT_IDS_DIAGNOSTIC :: RESERVED_1 [07:05] */
#define BCHP_PCIE_TL_READ_DMA_SPLIT_IDS_DIAGNOSTIC_RESERVED_1_MASK 0x000000e0
#define BCHP_PCIE_TL_READ_DMA_SPLIT_IDS_DIAGNOSTIC_RESERVED_1_SHIFT 5

/* PCIE_TL :: READ_DMA_SPLIT_IDS_DIAGNOSTIC :: READ_DMA_SPLIT_TAG [04:00] */
#define BCHP_PCIE_TL_READ_DMA_SPLIT_IDS_DIAGNOSTIC_READ_DMA_SPLIT_TAG_MASK 0x0000001f
#define BCHP_PCIE_TL_READ_DMA_SPLIT_IDS_DIAGNOSTIC_READ_DMA_SPLIT_TAG_SHIFT 0

/***************************************************************************
 *READ_DMA_SPLIT_LENGTH_DIAGNOSTIC - READ_DMA_SPLIT_LENGTH_DIAGNOSTIC Register
 ***************************************************************************/
/* PCIE_TL :: READ_DMA_SPLIT_LENGTH_DIAGNOSTIC :: REG_SPLIT_LEN [31:13] */
#define BCHP_PCIE_TL_READ_DMA_SPLIT_LENGTH_DIAGNOSTIC_REG_SPLIT_LEN_MASK 0xffffe000
#define BCHP_PCIE_TL_READ_DMA_SPLIT_LENGTH_DIAGNOSTIC_REG_SPLIT_LEN_SHIFT 13

/* PCIE_TL :: READ_DMA_SPLIT_LENGTH_DIAGNOSTIC :: READ_DMA_SPLIT_INITIAL_BYTE_COUNT [12:00] */
#define BCHP_PCIE_TL_READ_DMA_SPLIT_LENGTH_DIAGNOSTIC_READ_DMA_SPLIT_INITIAL_BYTE_COUNT_MASK 0x00001fff
#define BCHP_PCIE_TL_READ_DMA_SPLIT_LENGTH_DIAGNOSTIC_READ_DMA_SPLIT_INITIAL_BYTE_COUNT_SHIFT 0

/***************************************************************************
 *XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC - XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC Register
 ***************************************************************************/
/* PCIE_TL :: XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC :: REG_SM_R0_R3 [31:31] */
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_REG_SM_R0_R3_MASK 0x80000000
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_REG_SM_R0_R3_SHIFT 31

/* PCIE_TL :: XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC :: TLP_TRANSMITTER_DATA_STATE_MACHINE [30:28] */
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_TLP_TRANSMITTER_DATA_STATE_MACHINE_MASK 0x70000000
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_TLP_TRANSMITTER_DATA_STATE_MACHINE_SHIFT 28

/* PCIE_TL :: XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC :: TLP_TRANSMITTER_ARBITRATION_STATE_MACHINE [27:23] */
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_TLP_TRANSMITTER_ARBITRATION_STATE_MACHINE_MASK 0x0f800000
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_TLP_TRANSMITTER_ARBITRATION_STATE_MACHINE_SHIFT 23

/* PCIE_TL :: XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC :: RESERVED_0 [22:07] */
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_RESERVED_0_MASK 0x007fff80
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_RESERVED_0_SHIFT 7

/* PCIE_TL :: XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC :: READ_DMA_RAW_REQUEST [06:06] */
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_READ_DMA_RAW_REQUEST_MASK 0x00000040
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_READ_DMA_RAW_REQUEST_SHIFT 6

/* PCIE_TL :: XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC :: WRITE_DMA_RAW_REQUEST [05:05] */
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_WRITE_DMA_RAW_REQUEST_MASK 0x00000020
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_WRITE_DMA_RAW_REQUEST_SHIFT 5

/* PCIE_TL :: XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC :: INTERRUPT_MSG_GATED_REQUEST [04:04] */
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_INTERRUPT_MSG_GATED_REQUEST_MASK 0x00000010
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_INTERRUPT_MSG_GATED_REQUEST_SHIFT 4

/* PCIE_TL :: XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC :: MSI_DMA_GATED_REQUEST [03:03] */
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_MSI_DMA_GATED_REQUEST_MASK 0x00000008
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_MSI_DMA_GATED_REQUEST_SHIFT 3

/* PCIE_TL :: XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC :: TARGET_COMPLETION_OR_MSG_GATED_REQUEST [02:02] */
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_TARGET_COMPLETION_OR_MSG_GATED_REQUEST_MASK 0x00000004
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_TARGET_COMPLETION_OR_MSG_GATED_REQUEST_SHIFT 2

/* PCIE_TL :: XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC :: READ_DMA_GATED_REQUEST [01:01] */
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_READ_DMA_GATED_REQUEST_MASK 0x00000002
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_READ_DMA_GATED_REQUEST_SHIFT 1

/* PCIE_TL :: XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC :: WRITE_DMA_GATED_REQUEST [00:00] */
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_WRITE_DMA_GATED_REQUEST_MASK 0x00000001
#define BCHP_PCIE_TL_XMT_STATE_MACHINES_AND_REQUEST_DIAGNOSTIC_WRITE_DMA_GATED_REQUEST_SHIFT 0

/***************************************************************************
 *DMA_COMPLETION_MISC__DIAGNOSTIC - DMA_COMPLETION_MISC__DIAGNOSTIC Register
 ***************************************************************************/
/* PCIE_TL :: DMA_COMPLETION_MISC__DIAGNOSTIC :: REG_DMA_CMPT_MISC2 [31:29] */
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_REG_DMA_CMPT_MISC2_MASK 0xe0000000
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_REG_DMA_CMPT_MISC2_SHIFT 29

/* PCIE_TL :: DMA_COMPLETION_MISC__DIAGNOSTIC :: SPLIT_BYTE_LENGTH_REMAINING [28:16] */
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_SPLIT_BYTE_LENGTH_REMAINING_MASK 0x1fff0000
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_SPLIT_BYTE_LENGTH_REMAINING_SHIFT 16

/* PCIE_TL :: DMA_COMPLETION_MISC__DIAGNOSTIC :: NOT_USED [15:15] */
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_NOT_USED_MASK 0x00008000
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_NOT_USED_SHIFT 15

/* PCIE_TL :: DMA_COMPLETION_MISC__DIAGNOSTIC :: LAST_COMPLETION_TLP_INDICATOR_SPLITCTL_GENERATED [14:14] */
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_LAST_COMPLETION_TLP_INDICATOR_SPLITCTL_GENERATED_MASK 0x00004000
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_LAST_COMPLETION_TLP_INDICATOR_SPLITCTL_GENERATED_SHIFT 14

/* PCIE_TL :: DMA_COMPLETION_MISC__DIAGNOSTIC :: LAST_COMPLETION_TLP_INDICATOR_DMA_CMPT_GENERATED [13:13] */
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_LAST_COMPLETION_TLP_INDICATOR_DMA_CMPT_GENERATED_MASK 0x00002000
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_LAST_COMPLETION_TLP_INDICATOR_DMA_CMPT_GENERATED_SHIFT 13

/* PCIE_TL :: DMA_COMPLETION_MISC__DIAGNOSTIC :: DW_LENGTH_REMAINING_IN_CURRENT_COMPLETION_TLP_IS_GREATER_THAN_1 [12:12] */
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_DW_LENGTH_REMAINING_IN_CURRENT_COMPLETION_TLP_IS_GREATER_THAN_1_MASK 0x00001000
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_DW_LENGTH_REMAINING_IN_CURRENT_COMPLETION_TLP_IS_GREATER_THAN_1_SHIFT 12

/* PCIE_TL :: DMA_COMPLETION_MISC__DIAGNOSTIC :: SPLIT_TRANSACTION_ACTIVE_SPLIT_PENDING_BLOCK_REQUEST [11:11] */
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_SPLIT_TRANSACTION_ACTIVE_SPLIT_PENDING_BLOCK_REQUEST_MASK 0x00000800
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_SPLIT_TRANSACTION_ACTIVE_SPLIT_PENDING_BLOCK_REQUEST_SHIFT 11

/* PCIE_TL :: DMA_COMPLETION_MISC__DIAGNOSTIC :: COMPLETION_TLP_MATCHES_REQUEST_WITHOUT_BC_LADDR_CHECKS [10:10] */
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_COMPLETION_TLP_MATCHES_REQUEST_WITHOUT_BC_LADDR_CHECKS_MASK 0x00000400
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_COMPLETION_TLP_MATCHES_REQUEST_WITHOUT_BC_LADDR_CHECKS_SHIFT 10

/* PCIE_TL :: DMA_COMPLETION_MISC__DIAGNOSTIC :: COMPLETION_TLP_MATCHES_REQUEST_FULLY [09:09] */
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_COMPLETION_TLP_MATCHES_REQUEST_FULLY_MASK 0x00000200
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_COMPLETION_TLP_MATCHES_REQUEST_FULLY_SHIFT 9

/* PCIE_TL :: DMA_COMPLETION_MISC__DIAGNOSTIC :: SPLIT_DW_DATA_VALID_ADDRESS_ACK [08:08] */
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_SPLIT_DW_DATA_VALID_ADDRESS_ACK_MASK 0x00000100
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_SPLIT_DW_DATA_VALID_ADDRESS_ACK_SHIFT 8

/* PCIE_TL :: DMA_COMPLETION_MISC__DIAGNOSTIC :: COMPLETION_TOO_MUCH_DATA_ERROR_COUNTER [07:04] */
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_COMPLETION_TOO_MUCH_DATA_ERROR_COUNTER_MASK 0x000000f0
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_COMPLETION_TOO_MUCH_DATA_ERROR_COUNTER_SHIFT 4

/* PCIE_TL :: DMA_COMPLETION_MISC__DIAGNOSTIC :: FRAME_DEAD_TIME_ERROR_COUNTER [03:00] */
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_FRAME_DEAD_TIME_ERROR_COUNTER_MASK 0x0000000f
#define BCHP_PCIE_TL_DMA_COMPLETION_MISC__DIAGNOSTIC_FRAME_DEAD_TIME_ERROR_COUNTER_SHIFT 0

/***************************************************************************
 *SPLIT_CONTROLLER_MISC_0_DIAGNOSTIC - SPLIT_CONTROLLER_MISC_0_DIAGNOSTIC Register
 ***************************************************************************/
/* PCIE_TL :: SPLIT_CONTROLLER_MISC_0_DIAGNOSTIC :: REG_SPLITCTL_MISC0 [31:29] */
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_0_DIAGNOSTIC_REG_SPLITCTL_MISC0_MASK 0xe0000000
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_0_DIAGNOSTIC_REG_SPLITCTL_MISC0_SHIFT 29

/* PCIE_TL :: SPLIT_CONTROLLER_MISC_0_DIAGNOSTIC :: LOOKUP_RESULT_FOR_EXPECTED_BYTE_COUNT_REMAINING [28:16] */
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_0_DIAGNOSTIC_LOOKUP_RESULT_FOR_EXPECTED_BYTE_COUNT_REMAINING_MASK 0x1fff0000
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_0_DIAGNOSTIC_LOOKUP_RESULT_FOR_EXPECTED_BYTE_COUNT_REMAINING_SHIFT 16

/* PCIE_TL :: SPLIT_CONTROLLER_MISC_0_DIAGNOSTIC :: LOOKUP_RESULT_FOR_EXPECTED_REQUESTER_ID [15:00] */
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_0_DIAGNOSTIC_LOOKUP_RESULT_FOR_EXPECTED_REQUESTER_ID_MASK 0x0000ffff
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_0_DIAGNOSTIC_LOOKUP_RESULT_FOR_EXPECTED_REQUESTER_ID_SHIFT 0

/***************************************************************************
 *SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC - SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC Register
 ***************************************************************************/
/* PCIE_TL :: SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC :: REG_SPLITCTL_MISC1 [31:16] */
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC_REG_SPLITCTL_MISC1_MASK 0xffff0000
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC_REG_SPLITCTL_MISC1_SHIFT 16

/* PCIE_TL :: SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC :: RESERVED_0 [15:15] */
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC_RESERVED_0_MASK 0x00008000
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC_RESERVED_0_SHIFT 15

/* PCIE_TL :: SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC :: LOOKUP_RESULT_FOR_EXPECTED_LOWER_ADDRESS [14:08] */
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC_LOOKUP_RESULT_FOR_EXPECTED_LOWER_ADDRESS_MASK 0x00007f00
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC_LOOKUP_RESULT_FOR_EXPECTED_LOWER_ADDRESS_SHIFT 8

/* PCIE_TL :: SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC :: RESERVED_1 [07:07] */
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC_RESERVED_1_MASK 0x00000080
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC_RESERVED_1_SHIFT 7

/* PCIE_TL :: SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC :: LOOKUP_RESULT_FOR_EXPECTED_ATTRIBUTE [06:05] */
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC_LOOKUP_RESULT_FOR_EXPECTED_ATTRIBUTE_MASK 0x00000060
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC_LOOKUP_RESULT_FOR_EXPECTED_ATTRIBUTE_SHIFT 5

/* PCIE_TL :: SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC :: LOOKUP_TAG [04:00] */
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC_LOOKUP_TAG_MASK 0x0000001f
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_1_DIAGNOSTIC_LOOKUP_TAG_SHIFT 0

/***************************************************************************
 *SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC - SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC Register
 ***************************************************************************/
/* PCIE_TL :: SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC :: REG_SPLITCTL_MISC2 [31:31] */
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC_REG_SPLITCTL_MISC2_MASK 0x80000000
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC_REG_SPLITCTL_MISC2_SHIFT 31

/* PCIE_TL :: SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC :: COMPLETION_TLP_MATCHES_EXPECTED_LOWER_ADDRESS [30:30] */
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC_COMPLETION_TLP_MATCHES_EXPECTED_LOWER_ADDRESS_MASK 0x40000000
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC_COMPLETION_TLP_MATCHES_EXPECTED_LOWER_ADDRESS_SHIFT 30

/* PCIE_TL :: SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC :: COMPLETION_TLP_MATCHES_VALID_TAG [29:29] */
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC_COMPLETION_TLP_MATCHES_VALID_TAG_MASK 0x20000000
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC_COMPLETION_TLP_MATCHES_VALID_TAG_SHIFT 29

/* PCIE_TL :: SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC :: UPDATED_BYTE_COUNT [28:16] */
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC_UPDATED_BYTE_COUNT_MASK 0x1fff0000
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC_UPDATED_BYTE_COUNT_SHIFT 16

/* PCIE_TL :: SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC :: RESERVED_0 [15:08] */
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC_RESERVED_0_MASK 0x0000ff00
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC_RESERVED_0_SHIFT 8

/* PCIE_TL :: SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC :: SPLIT_TABLE_VALID_ARRAY [07:00] */
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC_SPLIT_TABLE_VALID_ARRAY_MASK 0x000000ff
#define BCHP_PCIE_TL_SPLIT_CONTROLLER_MISC_2_DIAGNOSTIC_SPLIT_TABLE_VALID_ARRAY_SHIFT 0

/***************************************************************************
 *TL_BUS_NO_DEV__NO__FUNC__NO - TL_BUS_NO_DEV__NO__FUNC__NO Register
 ***************************************************************************/
/* PCIE_TL :: TL_BUS_NO_DEV__NO__FUNC__NO :: RESERVED_0 [31:17] */
#define BCHP_PCIE_TL_TL_BUS_NO_DEV__NO__FUNC__NO_RESERVED_0_MASK   0xfffe0000
#define BCHP_PCIE_TL_TL_BUS_NO_DEV__NO__FUNC__NO_RESERVED_0_SHIFT  17

/* PCIE_TL :: TL_BUS_NO_DEV__NO__FUNC__NO :: CONFIG_WRITE_INDICATER [16:16] */
#define BCHP_PCIE_TL_TL_BUS_NO_DEV__NO__FUNC__NO_CONFIG_WRITE_INDICATER_MASK 0x00010000
#define BCHP_PCIE_TL_TL_BUS_NO_DEV__NO__FUNC__NO_CONFIG_WRITE_INDICATER_SHIFT 16

/* PCIE_TL :: TL_BUS_NO_DEV__NO__FUNC__NO :: BUS_NUMBER [15:08] */
#define BCHP_PCIE_TL_TL_BUS_NO_DEV__NO__FUNC__NO_BUS_NUMBER_MASK   0x0000ff00
#define BCHP_PCIE_TL_TL_BUS_NO_DEV__NO__FUNC__NO_BUS_NUMBER_SHIFT  8

/* PCIE_TL :: TL_BUS_NO_DEV__NO__FUNC__NO :: DEVICE_NUMBER [07:03] */
#define BCHP_PCIE_TL_TL_BUS_NO_DEV__NO__FUNC__NO_DEVICE_NUMBER_MASK 0x000000f8
#define BCHP_PCIE_TL_TL_BUS_NO_DEV__NO__FUNC__NO_DEVICE_NUMBER_SHIFT 3

/* PCIE_TL :: TL_BUS_NO_DEV__NO__FUNC__NO :: FUNCTION_NUMBER [02:00] */
#define BCHP_PCIE_TL_TL_BUS_NO_DEV__NO__FUNC__NO_FUNCTION_NUMBER_MASK 0x00000007
#define BCHP_PCIE_TL_TL_BUS_NO_DEV__NO__FUNC__NO_FUNCTION_NUMBER_SHIFT 0

/***************************************************************************
 *TL_DEBUG - TL_DEBUG Register
 ***************************************************************************/
/* PCIE_TL :: TL_DEBUG :: A4_DEVICE_INDICATION_BIT [31:31] */
#define BCHP_PCIE_TL_TL_DEBUG_A4_DEVICE_INDICATION_BIT_MASK        0x80000000
#define BCHP_PCIE_TL_TL_DEBUG_A4_DEVICE_INDICATION_BIT_SHIFT       31

/* PCIE_TL :: TL_DEBUG :: B1_DEVICE_INDICATION_BIT [30:30] */
#define BCHP_PCIE_TL_TL_DEBUG_B1_DEVICE_INDICATION_BIT_MASK        0x40000000
#define BCHP_PCIE_TL_TL_DEBUG_B1_DEVICE_INDICATION_BIT_SHIFT       30

/* PCIE_TL :: TL_DEBUG :: RESERVED_0 [29:00] */
#define BCHP_PCIE_TL_TL_DEBUG_RESERVED_0_MASK                      0x3fffffff
#define BCHP_PCIE_TL_TL_DEBUG_RESERVED_0_SHIFT                     0

#endif /* #ifndef BCHP_PCIE_TL_H__ */

/* End of File */