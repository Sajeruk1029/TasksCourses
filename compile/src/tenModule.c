#include "tenModule.h"

unsigned int evenNumbers(int num)
{
	int number = 0;

	for(int counter = 1; counter < num; ++counter){ number+= ((counter % 2) == 0)? 1 : 0; }

	return number;
}
