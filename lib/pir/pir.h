#ifndef _PIR_H
#define _PIR_H

#define PIR_PIN             36
#define INACTIVE_TIME_MIN   1
#define INACTIVE_TIME_MS    ((INACTIVE_TIME_MIN) * 60000)

void pir_task(void* parameters);

#endif