#ifndef _SPEAKER_H
#define _SPEAKER_H

typedef struct {
    char folder[5];
    char audio_fn[10];
} AudioFile;

extern QueueHandle_t audioQueue; 

#endif
