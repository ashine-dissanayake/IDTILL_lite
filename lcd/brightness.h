#ifndef _BRIGHTNESS_H
#define _BRIGHTNESS_H

#define LEVEL_TO_VOLTAGE(LEVEL)     (200 * (LEVEL) + 2300)
#define MAX_LEVEL                   5
#define MIN_LEVEL                   1

extern int brightness_level;
#endif