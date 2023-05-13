#ifndef _RFID_H
#define _RFID_H

#include <M5Core2.h>

typedef struct {
    char uid[9];
} UID;

extern QueueHandle_t rfidQueue; 

void rfid_task(void* parameter);

#endif