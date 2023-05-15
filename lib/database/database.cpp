#include <M5Core2.h>
#include "database.h"
#include "../rfid/rfid.h"

Card cards[32] = {0};

SemaphoreHandle_t xSDSemaphore;

QueueHandle_t cardQueue; 

void database_init() {

    xSemaphoreTake(xSDSemaphore, portMAX_DELAY);

    if (!SD.begin()) {  // Initialize the SD Card. 初始化SD卡
        M5.Lcd.println("Card failed, or not present"); 
    }

    if (SD.exists("/database/tag.txt") != 1) {
        M5.Lcd.println("Cannot find file"); 
    }

    File tagFile = SD.open("/database/tag.txt");

    tagFile.readStringUntil('\n'); 

    int idx = 0; 
    while (tagFile.available()) {
        sprintf(cards[idx].uid, tagFile.readStringUntil(',').c_str()); // uid
        tagFile.readStringUntil(','); 
        sprintf(cards[idx].character, tagFile.readStringUntil(',').c_str()); // uid
        sprintf(cards[idx].folder, tagFile.readStringUntil(',').c_str()); // uid
        sprintf(cards[idx].audio_fn, tagFile.readStringUntil(',').c_str()); // uid
        sprintf(cards[idx].image_fn, tagFile.readStringUntil('\n').c_str()); // uid
        
        idx++; 
    } 

    tagFile.close();
    xSemaphoreGive(xSDSemaphore);
}


int is_card_valid(char* uid) { 

    for (int i = 0; i < 32; i++) {
        int result = strcmp(cards[i].uid, uid);
        if (result == 0) {
            return i;
        }
    }
    return -1; 
}


void database_task(void* parameter) { 
 
    database_init(); 
    UID read_uid = {0};

    for (;;) {
        if (xQueueReceive(rfidQueue, &read_uid, portMAX_DELAY) == pdTRUE) {
            Serial.print("DATABASE THREAD");
            Serial.println(read_uid.uid);            
            int cardIndex = is_card_valid(read_uid.uid);
            if (cardIndex != -1) {
                xQueueSend(cardQueue, &cards[cardIndex], 1000);
            }
        }
    }
}