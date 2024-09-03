
#pragma once

#include "esp_netif.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_camera.h"

#define PARAM_NAMESPACE "esp32_softwmsn"
#define SUPPORT_SENSING 1
#define COAP_LOG_DEFAULT_LEVEL 0
#define COAP_DEBUG_PACKET_LOSS "0%%"
// #define COAP_DEBUG_PACKET_LOSS "11,12,13,14,15,16,17"

#define CONFIG_CAMERA_MODEL_ESP_EYE 1
//#define CONFIG_CAMERA_MODEL_AI_THINKER 1

#ifdef __cplusplus
extern "C" {
#endif

#define ESP_DEFAULT_SSID "TP-Link_AC44" //"TP-Link_AC44"
#define ESP_DEFAULT_BSSID \
    { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
#define ESP_DEFAULT_ROUTER_BSSID \
    { 0x3C, 0x84, 0x6A, 0xD2, 0xAC, 0x44 }
#define ESP_DEFAULT_PASSWD "aaaaaaaa" //"aaaaaaaa"
#define ESP_DEFAULT_AP_SSID ""
#define ESP_DEFAULT_AP_PASSWD ""
#define ESP_DEFAULT_STATUS_DATA_TRANSFER_TYPE 0
#define ESP_DEFAULT_IS_SENSING_ACTIVE 0
#define ESP_DEFAULT_IMAGE_SIZE FRAMESIZE_HD
#define ESP_DEFAULT_IMAGE_FORMAT PIXFORMAT_JPEG
#define ESP_DEFAULT_DATA_SEND_PERIOD 0
#define ESP_DEFAULT_BLOCK_SIZE 6
#define ESP_DEFAULT_BLOCK_SEQ_LEN 10

extern char* ssid;
extern uint8_t default_bssid[6];
extern uint8_t old_bssid[6];
extern uint8_t bssid[6];
extern char* passwd;
extern char* ap_ssid;
extern char* ap_passwd;
extern uint8_t status_data_transfer_type;
extern uint8_t is_sensing_active;
extern int image_size;
extern int image_format;
extern uint8_t data_send_period;
extern int block_size;
extern int block_seq_len;

extern esp_netif_t* wifiAP;
extern esp_netif_t* wifiSTA;

extern uint8_t ap_mac[6];
extern int ip;

extern uint8_t is_connected;
extern uint8_t sending_initial_data;
extern uint8_t sending_network_discovery;

extern uint32_t sensing_destination_ip;

#ifdef __cplusplus
}
#endif
