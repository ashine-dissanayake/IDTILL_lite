/*
*******************************************************************************
* Copyright (c) 2021 by M5Stack
*                  Equipped with M5Core2 sample source code
*                          配套  M5Core2 示例源代码
* Visit for more information: https://docs.m5stack.com/en/core/core2
* 获取更多资料请访问: https://docs.m5stack.com/zh_CN/core/core2
*
* Describe: Display Example.  显示屏示例
* Date: 2021/7/21
*******************************************************************************
*/

#include <M5Core2.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

#include <driver/i2s.h>
#include <WiFi.h>

#include "AudioFileSourceSD.h"
#include "AudioFileSourceID3.h"
#include "AudioGeneratorMP3.h"
#include "AudioOutputI2S.h"

#include "../lib/lcd/lcd.h"
#include "../lib/rfid/rfid.h"
#include "../lib/database/database.h"
#include "../lib/speaker/speaker.h"
#include "../lib/state/state.h"

AudioGeneratorMP3 *mp3;
AudioFileSourceSD *file;
AudioOutputI2S *out;
AudioFileSourceID3 *id3;

void setup(){
  M5.begin();
  M5.Axp.SetSpkEnable(true);
  WiFi.mode(WIFI_OFF); 

  xStateSemaphore = xSemaphoreCreateCounting(1,1);
  xSDSemaphore = xSemaphoreCreateCounting(1, 1); 
  cardQueue = xQueueCreate(10, sizeof(Card));
  rfidQueue = xQueueCreate(10, sizeof(UID));
  audioQueue = xQueueCreate(10, sizeof(AudioFile));
  
  delay(1000);

  xTaskCreate(
    database_task,   
    "Database Task", 
    4000, 
    NULL, 
    1, 
    NULL
  ); 
   
  xTaskCreate(
    lcd_task,   
    "LCD Task", 
    4000, 
    NULL, 
    1, 
    NULL
  ); 

  xTaskCreate(
    touch_task,   
    "Touch Task", 
    4000, 
    NULL, 
    1, 
    NULL
  ); 

  xTaskCreate(
    rfid_task,   
    "RFID Task", 
    4000, 
    NULL, 
    1, 
    NULL
  );     

  // pno_cs from https://ccrma.stanford.edu/~jos/pasp/Sound_Examples.html
  file = new AudioFileSourceSD("/database/a/a.mp3");
  id3 = new AudioFileSourceID3(file);
  out = new AudioOutputI2S(0, 0); // Output to builtInDAC
  out->SetPinout(12, 0, 2);
  out->SetOutputModeMono(true);
  out->SetGain(3);
  mp3 = new AudioGeneratorMP3();
}

void play(AudioFile* audio) { 
  char fp[50];
  sprintf(fp, "%s/%s/%s", "/database", audio->folder, audio->audio_fn);
  Serial.println(audio->folder);
  file = new AudioFileSourceSD(fp);
  id3 = new AudioFileSourceID3(file);
  out = new AudioOutputI2S(0, 0); // Output to builtInDAC
  out->SetPinout(12, 0, 2);
  out->SetOutputModeMono(true);
  out->SetGain(3);
  mp3 = new AudioGeneratorMP3();
  mp3->begin(id3, out);
}

void loop(){

  if (mp3->isRunning()) {
    if (!mp3->loop()) {
      Serial.println("DONE");
      mp3->stop();
      xSemaphoreGive(xSDSemaphore);
    } else { 
      Serial.println("RUNNING");
    }
  } else {
    AudioFile audio = {0};
    if (xQueueReceive(audioQueue, &audio, 100) == pdTRUE) {
        Serial.println("RECEIVED");
        xSemaphoreTake(xSDSemaphore, portMAX_DELAY);
        play(&audio);
    } else { 
        Serial.println("NOTHING");      
    }
    vTaskDelay(1000 / portTICK_PERIOD_MS);  
  }    
}
