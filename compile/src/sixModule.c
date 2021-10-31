#include "sixModule.h"

unsigned char divThree(double number){ return (fmod(number, 3.0F) == 0.0F)? 1 : 0; }
