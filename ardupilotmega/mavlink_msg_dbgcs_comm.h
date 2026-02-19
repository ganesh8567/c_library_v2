#pragma once
// MESSAGE DBGCS_COMM PACKING

#define MAVLINK_MSG_ID_DBGCS_COMM 13001


typedef struct __mavlink_dbgcs_comm_t {
 uint32_t flight_time; /*< [s]  Flight time, gets its value from autopilot*/
 float flowmeter_val; /*<   indicates value of the flowmeter*/
 float remaining_payload; /*<   indicates value of the fuel remaining*/
 uint8_t pu_feeback_val; /*<   1 indicates pump is on and spraying | 0 indicate the pump is off or faulty.*/
} mavlink_dbgcs_comm_t;

#define MAVLINK_MSG_ID_DBGCS_COMM_LEN 13
#define MAVLINK_MSG_ID_DBGCS_COMM_MIN_LEN 13
#define MAVLINK_MSG_ID_13001_LEN 13
#define MAVLINK_MSG_ID_13001_MIN_LEN 13

#define MAVLINK_MSG_ID_DBGCS_COMM_CRC 97
#define MAVLINK_MSG_ID_13001_CRC 97



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DBGCS_COMM { \
    13001, \
    "DBGCS_COMM", \
    4, \
    {  { "pu_feeback_val", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_dbgcs_comm_t, pu_feeback_val) }, \
         { "flight_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_dbgcs_comm_t, flight_time) }, \
         { "flowmeter_val", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_dbgcs_comm_t, flowmeter_val) }, \
         { "remaining_payload", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_dbgcs_comm_t, remaining_payload) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DBGCS_COMM { \
    "DBGCS_COMM", \
    4, \
    {  { "pu_feeback_val", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_dbgcs_comm_t, pu_feeback_val) }, \
         { "flight_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_dbgcs_comm_t, flight_time) }, \
         { "flowmeter_val", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_dbgcs_comm_t, flowmeter_val) }, \
         { "remaining_payload", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_dbgcs_comm_t, remaining_payload) }, \
         } \
}
#endif

/**
 * @brief Pack a dbgcs_comm message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param pu_feeback_val   1 indicates pump is on and spraying | 0 indicate the pump is off or faulty.
 * @param flight_time [s]  Flight time, gets its value from autopilot
 * @param flowmeter_val   indicates value of the flowmeter
 * @param remaining_payload   indicates value of the fuel remaining
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dbgcs_comm_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t pu_feeback_val, uint32_t flight_time, float flowmeter_val, float remaining_payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DBGCS_COMM_LEN];
    _mav_put_uint32_t(buf, 0, flight_time);
    _mav_put_float(buf, 4, flowmeter_val);
    _mav_put_float(buf, 8, remaining_payload);
    _mav_put_uint8_t(buf, 12, pu_feeback_val);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DBGCS_COMM_LEN);
#else
    mavlink_dbgcs_comm_t packet;
    packet.flight_time = flight_time;
    packet.flowmeter_val = flowmeter_val;
    packet.remaining_payload = remaining_payload;
    packet.pu_feeback_val = pu_feeback_val;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DBGCS_COMM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DBGCS_COMM;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DBGCS_COMM_MIN_LEN, MAVLINK_MSG_ID_DBGCS_COMM_LEN, MAVLINK_MSG_ID_DBGCS_COMM_CRC);
}

/**
 * @brief Pack a dbgcs_comm message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param pu_feeback_val   1 indicates pump is on and spraying | 0 indicate the pump is off or faulty.
 * @param flight_time [s]  Flight time, gets its value from autopilot
 * @param flowmeter_val   indicates value of the flowmeter
 * @param remaining_payload   indicates value of the fuel remaining
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dbgcs_comm_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t pu_feeback_val, uint32_t flight_time, float flowmeter_val, float remaining_payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DBGCS_COMM_LEN];
    _mav_put_uint32_t(buf, 0, flight_time);
    _mav_put_float(buf, 4, flowmeter_val);
    _mav_put_float(buf, 8, remaining_payload);
    _mav_put_uint8_t(buf, 12, pu_feeback_val);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DBGCS_COMM_LEN);
#else
    mavlink_dbgcs_comm_t packet;
    packet.flight_time = flight_time;
    packet.flowmeter_val = flowmeter_val;
    packet.remaining_payload = remaining_payload;
    packet.pu_feeback_val = pu_feeback_val;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DBGCS_COMM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DBGCS_COMM;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DBGCS_COMM_MIN_LEN, MAVLINK_MSG_ID_DBGCS_COMM_LEN, MAVLINK_MSG_ID_DBGCS_COMM_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DBGCS_COMM_MIN_LEN, MAVLINK_MSG_ID_DBGCS_COMM_LEN);
#endif
}

/**
 * @brief Pack a dbgcs_comm message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param pu_feeback_val   1 indicates pump is on and spraying | 0 indicate the pump is off or faulty.
 * @param flight_time [s]  Flight time, gets its value from autopilot
 * @param flowmeter_val   indicates value of the flowmeter
 * @param remaining_payload   indicates value of the fuel remaining
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dbgcs_comm_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t pu_feeback_val,uint32_t flight_time,float flowmeter_val,float remaining_payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DBGCS_COMM_LEN];
    _mav_put_uint32_t(buf, 0, flight_time);
    _mav_put_float(buf, 4, flowmeter_val);
    _mav_put_float(buf, 8, remaining_payload);
    _mav_put_uint8_t(buf, 12, pu_feeback_val);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DBGCS_COMM_LEN);
#else
    mavlink_dbgcs_comm_t packet;
    packet.flight_time = flight_time;
    packet.flowmeter_val = flowmeter_val;
    packet.remaining_payload = remaining_payload;
    packet.pu_feeback_val = pu_feeback_val;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DBGCS_COMM_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DBGCS_COMM;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DBGCS_COMM_MIN_LEN, MAVLINK_MSG_ID_DBGCS_COMM_LEN, MAVLINK_MSG_ID_DBGCS_COMM_CRC);
}

/**
 * @brief Encode a dbgcs_comm struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param dbgcs_comm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dbgcs_comm_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_dbgcs_comm_t* dbgcs_comm)
{
    return mavlink_msg_dbgcs_comm_pack(system_id, component_id, msg, dbgcs_comm->pu_feeback_val, dbgcs_comm->flight_time, dbgcs_comm->flowmeter_val, dbgcs_comm->remaining_payload);
}

/**
 * @brief Encode a dbgcs_comm struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param dbgcs_comm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dbgcs_comm_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_dbgcs_comm_t* dbgcs_comm)
{
    return mavlink_msg_dbgcs_comm_pack_chan(system_id, component_id, chan, msg, dbgcs_comm->pu_feeback_val, dbgcs_comm->flight_time, dbgcs_comm->flowmeter_val, dbgcs_comm->remaining_payload);
}

/**
 * @brief Encode a dbgcs_comm struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param dbgcs_comm C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dbgcs_comm_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_dbgcs_comm_t* dbgcs_comm)
{
    return mavlink_msg_dbgcs_comm_pack_status(system_id, component_id, _status, msg,  dbgcs_comm->pu_feeback_val, dbgcs_comm->flight_time, dbgcs_comm->flowmeter_val, dbgcs_comm->remaining_payload);
}

/**
 * @brief Send a dbgcs_comm message
 * @param chan MAVLink channel to send the message
 *
 * @param pu_feeback_val   1 indicates pump is on and spraying | 0 indicate the pump is off or faulty.
 * @param flight_time [s]  Flight time, gets its value from autopilot
 * @param flowmeter_val   indicates value of the flowmeter
 * @param remaining_payload   indicates value of the fuel remaining
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_dbgcs_comm_send(mavlink_channel_t chan, uint8_t pu_feeback_val, uint32_t flight_time, float flowmeter_val, float remaining_payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DBGCS_COMM_LEN];
    _mav_put_uint32_t(buf, 0, flight_time);
    _mav_put_float(buf, 4, flowmeter_val);
    _mav_put_float(buf, 8, remaining_payload);
    _mav_put_uint8_t(buf, 12, pu_feeback_val);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DBGCS_COMM, buf, MAVLINK_MSG_ID_DBGCS_COMM_MIN_LEN, MAVLINK_MSG_ID_DBGCS_COMM_LEN, MAVLINK_MSG_ID_DBGCS_COMM_CRC);
#else
    mavlink_dbgcs_comm_t packet;
    packet.flight_time = flight_time;
    packet.flowmeter_val = flowmeter_val;
    packet.remaining_payload = remaining_payload;
    packet.pu_feeback_val = pu_feeback_val;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DBGCS_COMM, (const char *)&packet, MAVLINK_MSG_ID_DBGCS_COMM_MIN_LEN, MAVLINK_MSG_ID_DBGCS_COMM_LEN, MAVLINK_MSG_ID_DBGCS_COMM_CRC);
#endif
}

/**
 * @brief Send a dbgcs_comm message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_dbgcs_comm_send_struct(mavlink_channel_t chan, const mavlink_dbgcs_comm_t* dbgcs_comm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_dbgcs_comm_send(chan, dbgcs_comm->pu_feeback_val, dbgcs_comm->flight_time, dbgcs_comm->flowmeter_val, dbgcs_comm->remaining_payload);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DBGCS_COMM, (const char *)dbgcs_comm, MAVLINK_MSG_ID_DBGCS_COMM_MIN_LEN, MAVLINK_MSG_ID_DBGCS_COMM_LEN, MAVLINK_MSG_ID_DBGCS_COMM_CRC);
#endif
}

#if MAVLINK_MSG_ID_DBGCS_COMM_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_dbgcs_comm_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t pu_feeback_val, uint32_t flight_time, float flowmeter_val, float remaining_payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, flight_time);
    _mav_put_float(buf, 4, flowmeter_val);
    _mav_put_float(buf, 8, remaining_payload);
    _mav_put_uint8_t(buf, 12, pu_feeback_val);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DBGCS_COMM, buf, MAVLINK_MSG_ID_DBGCS_COMM_MIN_LEN, MAVLINK_MSG_ID_DBGCS_COMM_LEN, MAVLINK_MSG_ID_DBGCS_COMM_CRC);
#else
    mavlink_dbgcs_comm_t *packet = (mavlink_dbgcs_comm_t *)msgbuf;
    packet->flight_time = flight_time;
    packet->flowmeter_val = flowmeter_val;
    packet->remaining_payload = remaining_payload;
    packet->pu_feeback_val = pu_feeback_val;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DBGCS_COMM, (const char *)packet, MAVLINK_MSG_ID_DBGCS_COMM_MIN_LEN, MAVLINK_MSG_ID_DBGCS_COMM_LEN, MAVLINK_MSG_ID_DBGCS_COMM_CRC);
#endif
}
#endif

#endif

// MESSAGE DBGCS_COMM UNPACKING


/**
 * @brief Get field pu_feeback_val from dbgcs_comm message
 *
 * @return   1 indicates pump is on and spraying | 0 indicate the pump is off or faulty.
 */
static inline uint8_t mavlink_msg_dbgcs_comm_get_pu_feeback_val(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field flight_time from dbgcs_comm message
 *
 * @return [s]  Flight time, gets its value from autopilot
 */
static inline uint32_t mavlink_msg_dbgcs_comm_get_flight_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field flowmeter_val from dbgcs_comm message
 *
 * @return   indicates value of the flowmeter
 */
static inline float mavlink_msg_dbgcs_comm_get_flowmeter_val(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field remaining_payload from dbgcs_comm message
 *
 * @return   indicates value of the fuel remaining
 */
static inline float mavlink_msg_dbgcs_comm_get_remaining_payload(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a dbgcs_comm message into a struct
 *
 * @param msg The message to decode
 * @param dbgcs_comm C-struct to decode the message contents into
 */
static inline void mavlink_msg_dbgcs_comm_decode(const mavlink_message_t* msg, mavlink_dbgcs_comm_t* dbgcs_comm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    dbgcs_comm->flight_time = mavlink_msg_dbgcs_comm_get_flight_time(msg);
    dbgcs_comm->flowmeter_val = mavlink_msg_dbgcs_comm_get_flowmeter_val(msg);
    dbgcs_comm->remaining_payload = mavlink_msg_dbgcs_comm_get_remaining_payload(msg);
    dbgcs_comm->pu_feeback_val = mavlink_msg_dbgcs_comm_get_pu_feeback_val(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DBGCS_COMM_LEN? msg->len : MAVLINK_MSG_ID_DBGCS_COMM_LEN;
        memset(dbgcs_comm, 0, MAVLINK_MSG_ID_DBGCS_COMM_LEN);
    memcpy(dbgcs_comm, _MAV_PAYLOAD(msg), len);
#endif
}
