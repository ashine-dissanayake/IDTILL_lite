#ifndef _STATE_H
#define _STATE_H

#include <M5Core2.h>

enum state {HOME, MEDIA, INFO, QUIZ, WIZARD};

extern enum state curr_tab;

extern SemaphoreHandle_t xStateSemaphore;

#endif
