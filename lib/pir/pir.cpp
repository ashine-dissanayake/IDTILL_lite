#include <M5Core2.h>
#include "pir.h"

void init_pir() {
  pinMode(GPIO_NUM_36, INPUT);  
  esp_sleep_enable_ext0_wakeup(GPIO_NUM_36, 1); //1 = High, 0 = Low  
}


void sleep_protocol() {
  M5.Axp.SetDCDC3(false);			//Turn LCD backlight off
  M5.Lcd.sleep();					//Turn off LCD logic
}


void pir_task(void* parameters) {
    static int lastms = 0;  
    static int pir = 0;   
    init_pir(); 
    int flag = 0; 

    for(;;) {
        pir = digitalRead(PIR_PIN); //read input
        if (pir == 1) { 
            lastms = millis(); 
        }
        if ((millis() - lastms) > INACTIVE_TIME_MS && flag == 0) {
          sleep_protocol();
          Serial.println("Going to sleep now");
          esp_deep_sleep_start();
        }
        vTaskDelay(50 / portTICK_PERIOD_MS);        
    }
}
