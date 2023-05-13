#ifndef _DATABASE_H
#define _DATABASE_H

extern SemaphoreHandle_t xSDSemaphore;
extern QueueHandle_t cardQueue; 

typedef struct 
{
    char uid[9];
    char character[5];
    char folder[5];
    char audio_fn[10];
    char image_fn[10];
} Card;

void database_task(void* parameter);

#endif