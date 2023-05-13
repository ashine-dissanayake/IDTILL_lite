#ifndef _PM_H
#define _PM_H

#define PIR_PIN             36
#define INACTIVE_TIME_MIN   1
#define INACTIVE_TIME_MS    ((INACTIVE_TIME_MIN) * 60000)

void pm_task(void* parameters);

#endif