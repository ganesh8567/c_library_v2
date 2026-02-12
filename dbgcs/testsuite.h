/** @file
 *    @brief MAVLink comm protocol testsuite generated from dbgcs.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef DBGCS_TESTSUITE_H
#define DBGCS_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_dbgcs(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_dbgcs(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_dbgcs_comm_control(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_DBGCS_COMM_CONTROL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_dbgcs_comm_control_t packet_in = {
        5,72
    };
    mavlink_dbgcs_comm_control_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.pump_OnOFF = packet_in.pump_OnOFF;
        packet1.resumemission_OnOFF = packet_in.resumemission_OnOFF;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_DBGCS_COMM_CONTROL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_DBGCS_COMM_CONTROL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dbgcs_comm_control_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_dbgcs_comm_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dbgcs_comm_control_pack(system_id, component_id, &msg , packet1.pump_OnOFF , packet1.resumemission_OnOFF );
    mavlink_msg_dbgcs_comm_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dbgcs_comm_control_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.pump_OnOFF , packet1.resumemission_OnOFF );
    mavlink_msg_dbgcs_comm_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_dbgcs_comm_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dbgcs_comm_control_send(MAVLINK_COMM_1 , packet1.pump_OnOFF , packet1.resumemission_OnOFF );
    mavlink_msg_dbgcs_comm_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("DBGCS_COMM_CONTROL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_DBGCS_COMM_CONTROL) != NULL);
#endif
}

static void mavlink_test_dbgcs_comm(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_DBGCS_COMM >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_dbgcs_comm_t packet_in = {
        963497464,45.0,73.0,41
    };
    mavlink_dbgcs_comm_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.flight_time = packet_in.flight_time;
        packet1.flowmeter_val = packet_in.flowmeter_val;
        packet1.remaining_payload = packet_in.remaining_payload;
        packet1.pu_feeback_val = packet_in.pu_feeback_val;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_DBGCS_COMM_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_DBGCS_COMM_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dbgcs_comm_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_dbgcs_comm_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dbgcs_comm_pack(system_id, component_id, &msg , packet1.flight_time , packet1.flowmeter_val , packet1.remaining_payload , packet1.pu_feeback_val );
    mavlink_msg_dbgcs_comm_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dbgcs_comm_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.flight_time , packet1.flowmeter_val , packet1.remaining_payload , packet1.pu_feeback_val );
    mavlink_msg_dbgcs_comm_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_dbgcs_comm_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dbgcs_comm_send(MAVLINK_COMM_1 , packet1.flight_time , packet1.flowmeter_val , packet1.remaining_payload , packet1.pu_feeback_val );
    mavlink_msg_dbgcs_comm_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("DBGCS_COMM") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_DBGCS_COMM) != NULL);
#endif
}

static void mavlink_test_dbgcs_motorcan(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_DBGCS_MOTORCAN >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_dbgcs_motorcan_t packet_in = {
        17.0,45.0,73.0,41,108
    };
    mavlink_dbgcs_motorcan_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.current = packet_in.current;
        packet1.voltage = packet_in.voltage;
        packet1.rpm = packet_in.rpm;
        packet1.error_flags = packet_in.error_flags;
        packet1.temperature = packet_in.temperature;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_DBGCS_MOTORCAN_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_DBGCS_MOTORCAN_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dbgcs_motorcan_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_dbgcs_motorcan_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dbgcs_motorcan_pack(system_id, component_id, &msg , packet1.current , packet1.voltage , packet1.rpm , packet1.error_flags , packet1.temperature );
    mavlink_msg_dbgcs_motorcan_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dbgcs_motorcan_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.current , packet1.voltage , packet1.rpm , packet1.error_flags , packet1.temperature );
    mavlink_msg_dbgcs_motorcan_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_dbgcs_motorcan_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_dbgcs_motorcan_send(MAVLINK_COMM_1 , packet1.current , packet1.voltage , packet1.rpm , packet1.error_flags , packet1.temperature );
    mavlink_msg_dbgcs_motorcan_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("DBGCS_MOTORCAN") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_DBGCS_MOTORCAN) != NULL);
#endif
}

static void mavlink_test_dbgcs(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_dbgcs_comm_control(system_id, component_id, last_msg);
    mavlink_test_dbgcs_comm(system_id, component_id, last_msg);
    mavlink_test_dbgcs_motorcan(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // DBGCS_TESTSUITE_H
