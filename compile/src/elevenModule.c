#include "elevenModule.h"

unsigned int numbersDivedThreeAndNotDivedFive(int num)
{
	int number = 0;

	for(int counter = 1; counter < num; ++counter){ number += (((counter % 3) == 0) && ((counter % 5) != 0))? 1 : 0; }

	return number;
}	
