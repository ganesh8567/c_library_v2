/** @file
 *  @brief MAVLink comm protocol generated from dbgcs.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_DBGCS_H
#define MAVLINK_DBGCS_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_DBGCS.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_DBGCS_XML_HASH 1030164308285271835

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{13000, 242, 2, 2, 0, 0, 0}, {13001, 97, 13, 13, 0, 0, 0}, {13002, 65, 14, 14, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_DBGCS

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_dbgcs_comm_control.h"
#include "./mavlink_msg_dbgcs_comm.h"
#include "./mavlink_msg_dbgcs_motorcan.h"

// base include



#if MAVLINK_DBGCS_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_DBGCS_COMM_CONTROL, MAVLINK_MESSAGE_INFO_DBGCS_COMM, MAVLINK_MESSAGE_INFO_DBGCS_MOTORCAN}
# define MAVLINK_MESSAGE_NAMES {{ "DBGCS_COMM", 13001 }, { "DBGCS_COMM_CONTROL", 13000 }, { "DBGCS_MOTORCAN", 13002 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_DBGCS_H
