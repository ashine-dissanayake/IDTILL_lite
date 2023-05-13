#include <M5Core2.h>
#include "lcd.h"
// #include "pic.h"
#include "../database/database.h"
#include "../speaker/speaker.h"

#include "../state/state.h"

#include "home.h"
#include "media.h"
#include "info.h"
#include "quiz_icon.h"
#include "wizard_hat.h"

// SemaphoreHandle_t xMediaSemaphore;

void draw_welcome_ui() 
{
  M5.Lcd.drawPngFile(SD, "/ui/welcome.png", 0, 60);
}


void draw_tabs() 
{
  M5.Lcd.drawPngFile(SD, "/ui/welcome.png", 0, 60);
  M5.Lcd.drawBitmap(0, 0, 50, 50, epd_bitmap_home);  
  M5.Lcd.drawBitmap(70, 0, 50, 50, epd_bitmap_media);  
  M5.Lcd.drawBitmap(135, 0, 50, 50, epd_bitmap_info);  
  M5.Lcd.drawBitmap(200, 0, 50, 50, epd_bitmap_quiz);    
  M5.Lcd.drawBitmap(270, 0, 50, 50, epd_bitmap_wizard);  
}

void draw_card_info(Card* card_info) 
{
    M5.Lcd.fillRect(0, 60, 320, 180, RED);
    M5.Lcd.fillRect(20, 80, 280, 140, WHITE);

    M5.Lcd.setTextSize(2);
    M5.Lcd.setCursor(30, 85);
    M5.Lcd.println("CARD INFORMATION");      
    M5.Lcd.setCursor(30, 105);
    M5.Lcd.printf("UID: %s\n", card_info->uid);  
    M5.Lcd.setCursor(30, 125);
    M5.Lcd.printf("Transliteration: %s\n", card_info->character);   
    M5.Lcd.setCursor(30, 145);
    M5.Lcd.printf("Audio: %s\n", card_info->audio_fn);   
    M5.Lcd.setCursor(30, 165);
    M5.Lcd.printf("Image: %s\n", card_info->image_fn);               
}


void lcd_task(void * parameter ) {

    M5.Lcd.clear();
    M5.Lcd.setBrightness(200); 
    M5.Lcd.setTextColor(TFT_BLACK); 
    // xStateSemaphore = xSemaphoreCreateCounting(1,1);
    
    draw_tabs(); 

    xSemaphoreTake(xSDSemaphore, portMAX_DELAY);    
    draw_welcome_ui(); 
    xSemaphoreGive(xSDSemaphore);
    Card read_card = {0}; 
    AudioFile write_audio = {0};
    
    char fp[50];
    
    for(;;) {
        // Check if state has changed.
        if (xSemaphoreTake(xStateSemaphore, 100) == pdTRUE) { 

            if (curr_tab == HOME) {
                xSemaphoreTake(xSDSemaphore, portMAX_DELAY);
                draw_welcome_ui(); 
                xSemaphoreGive(xSDSemaphore);
            } else if (curr_tab == MEDIA) {

                if (strlen(read_card.uid) != 0) {
                    xSemaphoreTake(xSDSemaphore, portMAX_DELAY);
                    sprintf(fp, "%s/%s/%s", "/database", read_card.folder, read_card.image_fn);
                    M5.Lcd.drawPngFile(SD, fp, 0, 60);
                    xSemaphoreGive(xSDSemaphore);
                } else {
                    M5.Lcd.fillRect(0, 60, 320, 180, RED);
                }
                sprintf(write_audio.folder, "%s", read_card.folder);
                sprintf(write_audio.audio_fn, "%s", read_card.audio_fn);
                xQueueSend(audioQueue, &write_audio, 1000);

            } else if (curr_tab == INFO) {
                draw_card_info(&read_card);
            } else if (curr_tab == QUIZ) {
                M5.Lcd.fillRect(0, 60, 320, 180, DARKGREY);
                M5.Lcd.setTextSize(4);
                M5.Lcd.setCursor(20, 85); 
                M5.Lcd.println("COMING SOON!");   
            } else if (curr_tab == WIZARD) {
                M5.Lcd.fillRect(0, 60, 320, 180, GREENYELLOW);
                M5.Lcd.setTextSize(4);
                M5.Lcd.setCursor(20, 85); 
                M5.Lcd.println("COMING SOON!");                   
            } 
        }    

        if (xQueueReceive(cardQueue, &read_card, 100) == pdTRUE) {
            Serial.println(read_card.uid);
            curr_tab = MEDIA; 
            Serial.print("LCD THREAD");
            Serial.println(read_card.uid);
            xSemaphoreGive(xStateSemaphore);
        }
        // Check if SD card has given new information.    

         vTaskDelay(100 / portTICK_PERIOD_MS);  
    }
}



void touch_task(void* parameters)
{
    for(;;) 
    {
        TouchPoint_t pos = M5.Touch.getPressPoint();  // Stores the touch coordinates in pos.
        
        if (pos.x <= 50 && pos.y >= 0 && pos.y <= 60 && curr_tab != HOME) {
            curr_tab = HOME;
            xSemaphoreGive(xStateSemaphore);
        } else if (pos.x >= 70 && pos.x <= 120 && pos.y >= 0 && pos.y <= 60 && curr_tab != MEDIA) {
            curr_tab = MEDIA;
            xSemaphoreGive(xStateSemaphore);
        } else if (pos.x >= 135 && pos.x <= 185 && pos.y >= 0 && pos.y <= 60 && curr_tab != INFO) {
            curr_tab = INFO;
            xSemaphoreGive(xStateSemaphore);
        } else if (pos.x >= 200 && pos.x <= 250 && pos.y >= 0 && pos.y <= 60 && curr_tab != QUIZ) {
            curr_tab = QUIZ;
            xSemaphoreGive(xStateSemaphore);
        } else if (pos.x >= 270 && pos.y >= 0 && pos.y <= 60 && curr_tab != WIZARD) {
            curr_tab = WIZARD;
            xSemaphoreGive(xStateSemaphore);
        }
        // Serial.printf("x=%d AND y=%d --> %d\n\r", pos.x, pos.y, curr_tab);
        
        vTaskDelay(1000 / portTICK_PERIOD_MS);                    
    }
}