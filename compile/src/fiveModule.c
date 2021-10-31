#include "fiveModule.h"

unsigned int counterTime(unsigned int hours, unsigned int minutes, unsigned int secs){ return secs + minutes * TIME_SECS_TO_MINUTE + hours * TIME_SECS_TO_HOUR; }
