#pragma once
// MESSAGE DBGCS_COMM_Control PACKING

#define MAVLINK_MSG_ID_DBGCS_COMM_Control 13000


typedef struct __mavlink_dbgcs_comm_control_t {
 uint8_t pump_OnOFF; /*<   1 indicates to power on the pump | 0 to power off the pump*/
 uint8_t resumemission_OnOFF; /*<   1 indicates to resume mission enable | 0 to resume mission disable*/
} mavlink_dbgcs_comm_control_t;

#define MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN 2
#define MAVLINK_MSG_ID_DBGCS_COMM_Control_MIN_LEN 2
#define MAVLINK_MSG_ID_13000_LEN 2
#define MAVLINK_MSG_ID_13000_MIN_LEN 2

#define MAVLINK_MSG_ID_DBGCS_COMM_Control_CRC 211
#define MAVLINK_MSG_ID_13000_CRC 211



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DBGCS_COMM_Control { \
    13000, \
    "DBGCS_COMM_Control", \
    2, \
    {  { "pump_OnOFF", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_dbgcs_comm_control_t, pump_OnOFF) }, \
         { "resumemission_OnOFF", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_dbgcs_comm_control_t, resumemission_OnOFF) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DBGCS_COMM_Control { \
    "DBGCS_COMM_Control", \
    2, \
    {  { "pump_OnOFF", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_dbgcs_comm_control_t, pump_OnOFF) }, \
         { "resumemission_OnOFF", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_dbgcs_comm_control_t, resumemission_OnOFF) }, \
         } \
}
#endif

/**
 * @brief Pack a dbgcs_comm_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pump_OnOFF   1 indicates to power on the pump | 0 to power off the pump
 * @param resumemission_OnOFF   1 indicates to resume mission enable | 0 to resume mission disable
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dbgcs_comm_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t pump_OnOFF, uint8_t resumemission_OnOFF)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN];
    _mav_put_uint8_t(buf, 0, pump_OnOFF);
    _mav_put_uint8_t(buf, 1, resumemission_OnOFF);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN);
#else
    mavlink_dbgcs_comm_control_t packet;
    packet.pump_OnOFF = pump_OnOFF;
    packet.resumemission_OnOFF = resumemission_OnOFF;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DBGCS_COMM_Control;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DBGCS_COMM_Control_MIN_LEN, MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN, MAVLINK_MSG_ID_DBGCS_COMM_Control_CRC);
}

/**
 * @brief Pack a dbgcs_comm_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param pump_OnOFF   1 indicates to power on the pump | 0 to power off the pump
 * @param resumemission_OnOFF   1 indicates to resume mission enable | 0 to resume mission disable
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dbgcs_comm_control_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t pump_OnOFF, uint8_t resumemission_OnOFF)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN];
    _mav_put_uint8_t(buf, 0, pump_OnOFF);
    _mav_put_uint8_t(buf, 1, resumemission_OnOFF);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN);
#else
    mavlink_dbgcs_comm_control_t packet;
    packet.pump_OnOFF = pump_OnOFF;
    packet.resumemission_OnOFF = resumemission_OnOFF;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DBGCS_COMM_Control;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DBGCS_COMM_Control_MIN_LEN, MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN, MAVLINK_MSG_ID_DBGCS_COMM_Control_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DBGCS_COMM_Control_MIN_LEN, MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN);
#endif
}

/**
 * @brief Pack a dbgcs_comm_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pump_OnOFF   1 indicates to power on the pump | 0 to power off the pump
 * @param resumemission_OnOFF   1 indicates to resume mission enable | 0 to resume mission disable
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dbgcs_comm_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t pump_OnOFF,uint8_t resumemission_OnOFF)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN];
    _mav_put_uint8_t(buf, 0, pump_OnOFF);
    _mav_put_uint8_t(buf, 1, resumemission_OnOFF);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN);
#else
    mavlink_dbgcs_comm_control_t packet;
    packet.pump_OnOFF = pump_OnOFF;
    packet.resumemission_OnOFF = resumemission_OnOFF;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DBGCS_COMM_Control;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DBGCS_COMM_Control_MIN_LEN, MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN, MAVLINK_MSG_ID_DBGCS_COMM_Control_CRC);
}

/**
 * @brief Encode a dbgcs_comm_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param dbgcs_comm_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dbgcs_comm_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_dbgcs_comm_control_t* dbgcs_comm_control)
{
    return mavlink_msg_dbgcs_comm_control_pack(system_id, component_id, msg, dbgcs_comm_control->pump_OnOFF, dbgcs_comm_control->resumemission_OnOFF);
}

/**
 * @brief Encode a dbgcs_comm_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param dbgcs_comm_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dbgcs_comm_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_dbgcs_comm_control_t* dbgcs_comm_control)
{
    return mavlink_msg_dbgcs_comm_control_pack_chan(system_id, component_id, chan, msg, dbgcs_comm_control->pump_OnOFF, dbgcs_comm_control->resumemission_OnOFF);
}

/**
 * @brief Encode a dbgcs_comm_control struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param dbgcs_comm_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dbgcs_comm_control_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_dbgcs_comm_control_t* dbgcs_comm_control)
{
    return mavlink_msg_dbgcs_comm_control_pack_status(system_id, component_id, _status, msg,  dbgcs_comm_control->pump_OnOFF, dbgcs_comm_control->resumemission_OnOFF);
}

/**
 * @brief Send a dbgcs_comm_control message
 * @param chan MAVLink channel to send the message
 *
 * @param pump_OnOFF   1 indicates to power on the pump | 0 to power off the pump
 * @param resumemission_OnOFF   1 indicates to resume mission enable | 0 to resume mission disable
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_dbgcs_comm_control_send(mavlink_channel_t chan, uint8_t pump_OnOFF, uint8_t resumemission_OnOFF)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN];
    _mav_put_uint8_t(buf, 0, pump_OnOFF);
    _mav_put_uint8_t(buf, 1, resumemission_OnOFF);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DBGCS_COMM_Control, buf, MAVLINK_MSG_ID_DBGCS_COMM_Control_MIN_LEN, MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN, MAVLINK_MSG_ID_DBGCS_COMM_Control_CRC);
#else
    mavlink_dbgcs_comm_control_t packet;
    packet.pump_OnOFF = pump_OnOFF;
    packet.resumemission_OnOFF = resumemission_OnOFF;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DBGCS_COMM_Control, (const char *)&packet, MAVLINK_MSG_ID_DBGCS_COMM_Control_MIN_LEN, MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN, MAVLINK_MSG_ID_DBGCS_COMM_Control_CRC);
#endif
}

/**
 * @brief Send a dbgcs_comm_control message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_dbgcs_comm_control_send_struct(mavlink_channel_t chan, const mavlink_dbgcs_comm_control_t* dbgcs_comm_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_dbgcs_comm_control_send(chan, dbgcs_comm_control->pump_OnOFF, dbgcs_comm_control->resumemission_OnOFF);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DBGCS_COMM_Control, (const char *)dbgcs_comm_control, MAVLINK_MSG_ID_DBGCS_COMM_Control_MIN_LEN, MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN, MAVLINK_MSG_ID_DBGCS_COMM_Control_CRC);
#endif
}

#if MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_dbgcs_comm_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t pump_OnOFF, uint8_t resumemission_OnOFF)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, pump_OnOFF);
    _mav_put_uint8_t(buf, 1, resumemission_OnOFF);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DBGCS_COMM_Control, buf, MAVLINK_MSG_ID_DBGCS_COMM_Control_MIN_LEN, MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN, MAVLINK_MSG_ID_DBGCS_COMM_Control_CRC);
#else
    mavlink_dbgcs_comm_control_t *packet = (mavlink_dbgcs_comm_control_t *)msgbuf;
    packet->pump_OnOFF = pump_OnOFF;
    packet->resumemission_OnOFF = resumemission_OnOFF;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DBGCS_COMM_Control, (const char *)packet, MAVLINK_MSG_ID_DBGCS_COMM_Control_MIN_LEN, MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN, MAVLINK_MSG_ID_DBGCS_COMM_Control_CRC);
#endif
}
#endif

#endif

// MESSAGE DBGCS_COMM_Control UNPACKING


/**
 * @brief Get field pump_OnOFF from dbgcs_comm_control message
 *
 * @return   1 indicates to power on the pump | 0 to power off the pump
 */
static inline uint8_t mavlink_msg_dbgcs_comm_control_get_pump_OnOFF(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field resumemission_OnOFF from dbgcs_comm_control message
 *
 * @return   1 indicates to resume mission enable | 0 to resume mission disable
 */
static inline uint8_t mavlink_msg_dbgcs_comm_control_get_resumemission_OnOFF(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Decode a dbgcs_comm_control message into a struct
 *
 * @param msg The message to decode
 * @param dbgcs_comm_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_dbgcs_comm_control_decode(const mavlink_message_t* msg, mavlink_dbgcs_comm_control_t* dbgcs_comm_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    dbgcs_comm_control->pump_OnOFF = mavlink_msg_dbgcs_comm_control_get_pump_OnOFF(msg);
    dbgcs_comm_control->resumemission_OnOFF = mavlink_msg_dbgcs_comm_control_get_resumemission_OnOFF(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN? msg->len : MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN;
        memset(dbgcs_comm_control, 0, MAVLINK_MSG_ID_DBGCS_COMM_Control_LEN);
    memcpy(dbgcs_comm_control, _MAV_PAYLOAD(msg), len);
#endif
}
