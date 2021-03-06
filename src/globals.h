#ifndef GLOBALS_H
#define GLOBALS_H

#include <pebble.h>

#define KEY_SOUND_LVL 0
#define KEY_MUTE_STATUS 1
#define KEY_POWER_STATUS 2
#define KEY_CURRENT_SOURCE 3

#define REQUEST_SOURCE_CHANGE_TO_CD 0
#define REQUEST_SOURCE_CHANGE_TO_TUNER 1
#define REQUEST_SOURCE_CHANGE_TO_USB 2
#define REQUEST_SOURCE_CHANGE_TO_SERVER 3
#define REQUEST_SOURCE_CHANGE_TO_NETRADIO 4
#define REQUEST_SOURCE_CHANGE_TO_SPOTIFY 5
#define REQUEST_SOURCE_CHANGE_TO_AIRPLAY 6
#define REQUEST_SOURCE_CHANGE_TO_AUX1 7
#define REQUEST_SOURCE_CHANGE_TO_AUX2 8
#define REQUEST_SOURCE_CHANGE_TO_DIGITAL1 9
#define REQUEST_SOURCE_CHANGE_TO_DIGITAL2 10

#define REQUEST_POWER_TOGGLE 11
#define REQUEST_MUTE_TOGGLE 12

#define REQUEST_VOLUME_UP 13
#define REQUEST_VOLUME_DOWN 14

#define REQUEST_INFO 15

#define MAKE_REQUEST 100

typedef enum {
    Request = 0,
    QueryData,
} js_request_t;

extern int32_t t_sound_level;

extern int32_t t_mute_status;

#define POWER_STATUS_ON 0
#define POWER_STATUS_STANDBY 1
#define POWER_STATUS_OFF 2
extern int32_t t_power_status;

char t_current_source[32];

void send_request (int value);

#endif
