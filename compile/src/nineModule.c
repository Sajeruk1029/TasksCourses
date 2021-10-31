#include "nineModule.h"

YearTalker talkYear(unsigned char years)
{
	YearTalker talker;

	talker.years = years;

	if(((years % 10) == 1) && (((years / 10) < 1) || ((years / 10) >= 2))){ talker.mode = 0; }
	else if((((years % 10) >= 2) && ((years % 10) < 5)) && (((years / 10) < 1) || ((years / 10) >= 2))){ talker.mode = 1; }
	else{ talker.mode = 2; }

	return talker;
}
