#include "fourModule.h"

RootsOfEquation solutionOfEquation(double a, double b, double c)
{
	RootsOfEquation roots;
	double D = 0.0F;

	roots.rootOne = 0.0F;
	roots.rootTwo = 0.0F;

	if(a == 0){ return roots; }

	D = pow(b, 2.0F) - 4 * a * -(c);

	if(D > 0)
	{
		roots.rootOne = (((-(b)) + sqrt(D)) / (2 * a));
		roots.rootTwo = (((-(b)) - sqrt(D)) / (2 * a));
	}
	else if(D == 0)
	{   
		roots.rootOne = (((-(b)) + sqrt(D)) / (2 * a));
		roots.rootTwo = 0.0F;
	}
	else
	{
		roots.rootOne = 0;
		roots.rootTwo = 0;
	}

	return roots;

}
