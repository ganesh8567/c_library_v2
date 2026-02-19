#pragma once
// MESSAGE DBGCS_MOTORCAN PACKING

#define MAVLINK_MSG_ID_DBGCS_MOTORCAN 13002


typedef struct __mavlink_dbgcs_motorcan_t {
 float current; /*<   indicates value of the current*/
 float voltage; /*<   indicates value of the voltage*/
 float rpm; /*<   motor speed */
 uint8_t error_flags; /*<   States err if any in Motor*/
 uint8_t temperature; /*< [deg]  Temperature of motors*/
} mavlink_dbgcs_motorcan_t;

#define MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN 14
#define MAVLINK_MSG_ID_DBGCS_MOTORCAN_MIN_LEN 14
#define MAVLINK_MSG_ID_13002_LEN 14
#define MAVLINK_MSG_ID_13002_MIN_LEN 14

#define MAVLINK_MSG_ID_DBGCS_MOTORCAN_CRC 65
#define MAVLINK_MSG_ID_13002_CRC 65



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_DBGCS_MOTORCAN { \
    13002, \
    "DBGCS_MOTORCAN", \
    5, \
    {  { "error_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_dbgcs_motorcan_t, error_flags) }, \
         { "temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_dbgcs_motorcan_t, temperature) }, \
         { "current", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_dbgcs_motorcan_t, current) }, \
         { "voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_dbgcs_motorcan_t, voltage) }, \
         { "rpm", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_dbgcs_motorcan_t, rpm) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_DBGCS_MOTORCAN { \
    "DBGCS_MOTORCAN", \
    5, \
    {  { "error_flags", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_dbgcs_motorcan_t, error_flags) }, \
         { "temperature", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_dbgcs_motorcan_t, temperature) }, \
         { "current", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_dbgcs_motorcan_t, current) }, \
         { "voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_dbgcs_motorcan_t, voltage) }, \
         { "rpm", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_dbgcs_motorcan_t, rpm) }, \
         } \
}
#endif

/**
 * @brief Pack a dbgcs_motorcan message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param error_flags   States err if any in Motor
 * @param temperature [deg]  Temperature of motors
 * @param current   indicates value of the current
 * @param voltage   indicates value of the voltage
 * @param rpm   motor speed 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dbgcs_motorcan_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t error_flags, uint8_t temperature, float current, float voltage, float rpm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN];
    _mav_put_float(buf, 0, current);
    _mav_put_float(buf, 4, voltage);
    _mav_put_float(buf, 8, rpm);
    _mav_put_uint8_t(buf, 12, error_flags);
    _mav_put_uint8_t(buf, 13, temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN);
#else
    mavlink_dbgcs_motorcan_t packet;
    packet.current = current;
    packet.voltage = voltage;
    packet.rpm = rpm;
    packet.error_flags = error_flags;
    packet.temperature = temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DBGCS_MOTORCAN;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_DBGCS_MOTORCAN_MIN_LEN, MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN, MAVLINK_MSG_ID_DBGCS_MOTORCAN_CRC);
}

/**
 * @brief Pack a dbgcs_motorcan message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param error_flags   States err if any in Motor
 * @param temperature [deg]  Temperature of motors
 * @param current   indicates value of the current
 * @param voltage   indicates value of the voltage
 * @param rpm   motor speed 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dbgcs_motorcan_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t error_flags, uint8_t temperature, float current, float voltage, float rpm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN];
    _mav_put_float(buf, 0, current);
    _mav_put_float(buf, 4, voltage);
    _mav_put_float(buf, 8, rpm);
    _mav_put_uint8_t(buf, 12, error_flags);
    _mav_put_uint8_t(buf, 13, temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN);
#else
    mavlink_dbgcs_motorcan_t packet;
    packet.current = current;
    packet.voltage = voltage;
    packet.rpm = rpm;
    packet.error_flags = error_flags;
    packet.temperature = temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DBGCS_MOTORCAN;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DBGCS_MOTORCAN_MIN_LEN, MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN, MAVLINK_MSG_ID_DBGCS_MOTORCAN_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_DBGCS_MOTORCAN_MIN_LEN, MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN);
#endif
}

/**
 * @brief Pack a dbgcs_motorcan message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param error_flags   States err if any in Motor
 * @param temperature [deg]  Temperature of motors
 * @param current   indicates value of the current
 * @param voltage   indicates value of the voltage
 * @param rpm   motor speed 
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_dbgcs_motorcan_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t error_flags,uint8_t temperature,float current,float voltage,float rpm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN];
    _mav_put_float(buf, 0, current);
    _mav_put_float(buf, 4, voltage);
    _mav_put_float(buf, 8, rpm);
    _mav_put_uint8_t(buf, 12, error_flags);
    _mav_put_uint8_t(buf, 13, temperature);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN);
#else
    mavlink_dbgcs_motorcan_t packet;
    packet.current = current;
    packet.voltage = voltage;
    packet.rpm = rpm;
    packet.error_flags = error_flags;
    packet.temperature = temperature;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_DBGCS_MOTORCAN;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_DBGCS_MOTORCAN_MIN_LEN, MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN, MAVLINK_MSG_ID_DBGCS_MOTORCAN_CRC);
}

/**
 * @brief Encode a dbgcs_motorcan struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param dbgcs_motorcan C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dbgcs_motorcan_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_dbgcs_motorcan_t* dbgcs_motorcan)
{
    return mavlink_msg_dbgcs_motorcan_pack(system_id, component_id, msg, dbgcs_motorcan->error_flags, dbgcs_motorcan->temperature, dbgcs_motorcan->current, dbgcs_motorcan->voltage, dbgcs_motorcan->rpm);
}

/**
 * @brief Encode a dbgcs_motorcan struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param dbgcs_motorcan C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dbgcs_motorcan_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_dbgcs_motorcan_t* dbgcs_motorcan)
{
    return mavlink_msg_dbgcs_motorcan_pack_chan(system_id, component_id, chan, msg, dbgcs_motorcan->error_flags, dbgcs_motorcan->temperature, dbgcs_motorcan->current, dbgcs_motorcan->voltage, dbgcs_motorcan->rpm);
}

/**
 * @brief Encode a dbgcs_motorcan struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param dbgcs_motorcan C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_dbgcs_motorcan_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_dbgcs_motorcan_t* dbgcs_motorcan)
{
    return mavlink_msg_dbgcs_motorcan_pack_status(system_id, component_id, _status, msg,  dbgcs_motorcan->error_flags, dbgcs_motorcan->temperature, dbgcs_motorcan->current, dbgcs_motorcan->voltage, dbgcs_motorcan->rpm);
}

/**
 * @brief Send a dbgcs_motorcan message
 * @param chan MAVLink channel to send the message
 *
 * @param error_flags   States err if any in Motor
 * @param temperature [deg]  Temperature of motors
 * @param current   indicates value of the current
 * @param voltage   indicates value of the voltage
 * @param rpm   motor speed 
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_dbgcs_motorcan_send(mavlink_channel_t chan, uint8_t error_flags, uint8_t temperature, float current, float voltage, float rpm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN];
    _mav_put_float(buf, 0, current);
    _mav_put_float(buf, 4, voltage);
    _mav_put_float(buf, 8, rpm);
    _mav_put_uint8_t(buf, 12, error_flags);
    _mav_put_uint8_t(buf, 13, temperature);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DBGCS_MOTORCAN, buf, MAVLINK_MSG_ID_DBGCS_MOTORCAN_MIN_LEN, MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN, MAVLINK_MSG_ID_DBGCS_MOTORCAN_CRC);
#else
    mavlink_dbgcs_motorcan_t packet;
    packet.current = current;
    packet.voltage = voltage;
    packet.rpm = rpm;
    packet.error_flags = error_flags;
    packet.temperature = temperature;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DBGCS_MOTORCAN, (const char *)&packet, MAVLINK_MSG_ID_DBGCS_MOTORCAN_MIN_LEN, MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN, MAVLINK_MSG_ID_DBGCS_MOTORCAN_CRC);
#endif
}

/**
 * @brief Send a dbgcs_motorcan message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_dbgcs_motorcan_send_struct(mavlink_channel_t chan, const mavlink_dbgcs_motorcan_t* dbgcs_motorcan)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_dbgcs_motorcan_send(chan, dbgcs_motorcan->error_flags, dbgcs_motorcan->temperature, dbgcs_motorcan->current, dbgcs_motorcan->voltage, dbgcs_motorcan->rpm);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DBGCS_MOTORCAN, (const char *)dbgcs_motorcan, MAVLINK_MSG_ID_DBGCS_MOTORCAN_MIN_LEN, MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN, MAVLINK_MSG_ID_DBGCS_MOTORCAN_CRC);
#endif
}

#if MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_dbgcs_motorcan_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t error_flags, uint8_t temperature, float current, float voltage, float rpm)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, current);
    _mav_put_float(buf, 4, voltage);
    _mav_put_float(buf, 8, rpm);
    _mav_put_uint8_t(buf, 12, error_flags);
    _mav_put_uint8_t(buf, 13, temperature);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DBGCS_MOTORCAN, buf, MAVLINK_MSG_ID_DBGCS_MOTORCAN_MIN_LEN, MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN, MAVLINK_MSG_ID_DBGCS_MOTORCAN_CRC);
#else
    mavlink_dbgcs_motorcan_t *packet = (mavlink_dbgcs_motorcan_t *)msgbuf;
    packet->current = current;
    packet->voltage = voltage;
    packet->rpm = rpm;
    packet->error_flags = error_flags;
    packet->temperature = temperature;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_DBGCS_MOTORCAN, (const char *)packet, MAVLINK_MSG_ID_DBGCS_MOTORCAN_MIN_LEN, MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN, MAVLINK_MSG_ID_DBGCS_MOTORCAN_CRC);
#endif
}
#endif

#endif

// MESSAGE DBGCS_MOTORCAN UNPACKING


/**
 * @brief Get field error_flags from dbgcs_motorcan message
 *
 * @return   States err if any in Motor
 */
static inline uint8_t mavlink_msg_dbgcs_motorcan_get_error_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field temperature from dbgcs_motorcan message
 *
 * @return [deg]  Temperature of motors
 */
static inline uint8_t mavlink_msg_dbgcs_motorcan_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field current from dbgcs_motorcan message
 *
 * @return   indicates value of the current
 */
static inline float mavlink_msg_dbgcs_motorcan_get_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field voltage from dbgcs_motorcan message
 *
 * @return   indicates value of the voltage
 */
static inline float mavlink_msg_dbgcs_motorcan_get_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field rpm from dbgcs_motorcan message
 *
 * @return   motor speed 
 */
static inline float mavlink_msg_dbgcs_motorcan_get_rpm(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Decode a dbgcs_motorcan message into a struct
 *
 * @param msg The message to decode
 * @param dbgcs_motorcan C-struct to decode the message contents into
 */
static inline void mavlink_msg_dbgcs_motorcan_decode(const mavlink_message_t* msg, mavlink_dbgcs_motorcan_t* dbgcs_motorcan)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    dbgcs_motorcan->current = mavlink_msg_dbgcs_motorcan_get_current(msg);
    dbgcs_motorcan->voltage = mavlink_msg_dbgcs_motorcan_get_voltage(msg);
    dbgcs_motorcan->rpm = mavlink_msg_dbgcs_motorcan_get_rpm(msg);
    dbgcs_motorcan->error_flags = mavlink_msg_dbgcs_motorcan_get_error_flags(msg);
    dbgcs_motorcan->temperature = mavlink_msg_dbgcs_motorcan_get_temperature(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN? msg->len : MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN;
        memset(dbgcs_motorcan, 0, MAVLINK_MSG_ID_DBGCS_MOTORCAN_LEN);
    memcpy(dbgcs_motorcan, _MAV_PAYLOAD(msg), len);
#endif
}
