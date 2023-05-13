#include <M5Core2.h>
#include "MFRC522_I2C.h"
#include "rfid.h"

MFRC522 mfrc522(0x28);

QueueHandle_t rfidQueue; 

void rfid_task(void* parameter) {

    Wire.begin();
    mfrc522.PCD_Init();  // Init MFRC522.  初始化 MFRC522
    // char* buffer = ""; // = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
    UID write_uid = {0}; 

    for(;;) {
        if (!mfrc522.PICC_IsNewCardPresent() ||
            !mfrc522.PICC_ReadCardSerial()) {  //如果没有读取到新的卡片
        } else {
            unsigned int value = 
                ((mfrc522.uid.uidByte[0] & 0xFF) <<  0) |
                ((mfrc522.uid.uidByte[1] & 0xFF) <<  8) |
                ((mfrc522.uid.uidByte[2] & 0xFF) << 16) |
                ((long) (mfrc522.uid.uidByte[3] & 0xFF) << 24);
            
            sprintf(write_uid.uid, "%x:%x:%x", mfrc522.uid.uidByte[0], mfrc522.uid.uidByte[1], mfrc522.uid.uidByte[2]); 
            Serial.print("RFID THREAD");
            Serial.println(write_uid.uid);
            xQueueSend(rfidQueue, &write_uid, 0);
        }
        vTaskDelay(1000 / portTICK_PERIOD_MS); 
    }
}