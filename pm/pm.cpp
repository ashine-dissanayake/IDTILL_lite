#include <M5Core2.h>
#include "pm.h"
#include "../words/words.h"

void init_pir() {
  pinMode(GPIO_NUM_36, INPUT);  
  esp_sleep_enable_ext0_wakeup(GPIO_NUM_36, 1); //1 = High, 0 = Low  
}


void sleep_protocol() {
  M5.Lcd.clearDisplay();
  M5.Axp.SetLcdVoltage(2500); 
}


void wakeup_protocol() {
  M5.Axp.SetLcdVoltage(3300);
  M5.Lcd.setCursor(0, 0);   
}


void pm_task(void* parameters) {
    static int lastms = 0;  
    static int pir = 0;   
    init_pir(); 

    for(;;) {
        pir = digitalRead(PIR_PIN); //read input
        if (pir == 1) { 
            lastms = millis(); 
        }
        if ((millis() - lastms) > INACTIVE_TIME_MS) {
          sleep_protocol();
          Serial.println("Going to sleep now");
          esp_deep_sleep_start();
          wakeup_protocol();
          lastms = millis(); 
        }
        vTaskDelay(50 / portTICK_PERIOD_MS);        
    }
}
