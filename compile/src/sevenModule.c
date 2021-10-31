#include "sevenModule.h"

double maximum(double numOne, double numTwo, double numThree){ return ((numOne > numTwo)? ((numOne > numThree)? numOne : numThree) : ((numTwo > numThree)? numTwo : numThree)); }
