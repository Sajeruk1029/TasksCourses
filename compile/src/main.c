#include <stdio.h>
#include <stdlib.h>

#include "firstModule.h"
#include "secondModule.h"
#include "thirdModule.h"
#include "fourModule.h"
#include "fiveModule.h"
#include "sixModule.h"
#include "sevenModule.h"
#include "eightModule.h"
#include "nineModule.h"
#include "tenModule.h"
#include "elevenModule.h"

void showMenu()
{
	printf("\n%s\n\n", "Пожалуста введите действие...");
	printf("%s\n", "0. Выход.");
	for(unsigned char counter = 1; counter < 12; ++counter){ printf("%i%s%i.\n", counter, ". Запустить модуль ", counter);  }
}

int main(void)
{
	unsigned char numberOfTask = 0;

	double numberSquare = 0.0F;

	double speed = 0.0F;

	double triangleFooting = 0.0F;
	double triangleHeight = 0.0F;

	double equationA = 0.0F;
	double equationB = 0.0F;
	double equationC = 0.0F;
	RootsOfEquation roots;

	unsigned int timeSecs = 0;
	unsigned int timeMinutes = 0;
	unsigned int timeHours = 0;

	double divedThreeNumber = 0.0F;

	double maxNumOne = 0.0F;
	double maxNumTwo = 0.0F;
	double maxNumThree = 0.0F;

	char equation2Symbol = 0;
	double equation2A = 0.0F;
	double equation2B = 0.0F;
	double equation2C = 0.0F;
	RootsOfEquation2 roots2;

	unsigned char yearTalkYear = 0;
	YearTalker yearTalkTalker;

	int evenNumber = 0;

	int numberDivedThreeAndNotDivedFive = 0;

	while(1)
	{
		showMenu();

		scanf("%hhu", &numberOfTask);

		switch(numberOfTask)
		{
						case 1:
						{
							printf("%s\n", "Введите число...");
							scanf("%lf", &numberSquare);

							printf("\n%s%.3f\n", "Квадрат введенного числа: ", square(numberSquare));

							break;
						}

						case 2:
						{
							printf("%s\n", "Введите скорость в метрах в секунду...");
							scanf("%lf", &speed);

							printf("\n%s%.3f\n", "Скорость в километрах в час: ", convert(speed));

							break;
						}

						case 3:
						{
							printf("%s\n", "Введите основание треугольника...");
							scanf("%lf", &triangleFooting);

							printf("\n%s\n", "Введите высоту треугольника...");
							scanf("%lf", &triangleHeight);

							printf("\n%s%.3f\n", "Площадь треугольника: ", areaOfTriangle(triangleFooting, triangleHeight));

							break;
						}

						case 4:
						{
							do
							{
								printf("\n%s\n", "Введите коэффициент a...");
								scanf("%lf", &equationA);
							} while(equationA == 0);

							printf("\n%s\n", "Введите коэффициент b...");
							scanf("%lf", &equationB);

							printf("\n%s\n", "Введите коэффициент c...");
							scanf("%lf", &equationC);

							roots = solutionOfEquation(equationA, equationB, equationC);

							if((roots.rootOne == 0.0F) && (roots.rootTwo == 0.0F)){ printf("\n%s\n", "Уравнение не имеет корней"); }
							else if(roots.rootTwo == 0.0F){ printf("\n%s%.3f\n", "Корень уравнения: ", roots.rootOne); }
							else{ printf("\n%s%.3f\t%.3f\n", "Корни уравнения: ", roots.rootOne, roots.rootTwo); }

							break;
						}

						case 5:
						{
							printf("%s\n", "Введите количество часов...");
							scanf("%ui", &timeHours);

							printf("\n%s\n", "Введите количество минут...");
							scanf("%ui", &timeMinutes);

							printf("\n%s\n", "Введите количество секунд...");
							scanf("%ui", &timeSecs);

							printf("\n%s%ui", "Количество секунд прошедших с полунучи: ", counterTime(timeHours, timeMinutes, timeSecs));

							break;
						}

						case 6:
						{
							printf("%s\n", "Введите число...");
							scanf("%lf", &divedThreeNumber);

							printf("\n%s\n", ((divThree(divedThreeNumber) == 1)? "Введенное число делится на 3" : "Введенное число не делится на 3"));

							break;
						}

						case 7:
						{
							printf("%s\n", "Введите первое число...");
							scanf("%lf", &maxNumOne);

							printf("\n%s\n", "Введите второе число...");
							scanf("%lf", &maxNumTwo);

							printf("\n%s\n", "Введите третье число...");
							scanf("%lf", &maxNumThree);

							printf("\n%s%.3f\n", "Максимальное из 3 число: ", maximum(maxNumOne, maxNumTwo, maxNumThree));

							break;
						}

						case 8:
						{
							do
							{
								printf("\n%s\n", "Может ли коэффициент a быть 0?[y/n]");
								getchar();
								equation2Symbol = getchar();
							} while(((equation2Symbol != 'y') && (equation2Symbol != 'n')));

							if(equation2Symbol == 'n')
							{
								do
								{
									printf("\n%s\n", "Введите коэффициент a...");
									scanf("%lf", &equation2A);

								} while(equation2A == 0.0F);
							}
							else
							{
								printf("\n%s\n", "Введите коэффициент a...");
								scanf("%lf", &equation2A);
							}

							printf("\n%s\n", "Введите коэффициент b...");
							scanf("%lf", &equation2B);

							printf("\n%s\n", "Введите коэффициент c...");
							scanf("%lf", &equation2C);

							roots2 = solutionOfEquation2(equation2A, equation2B, equation2C, ((equation2Symbol == 'y')? 1 : 0));

							if((roots2.rootOne == 0.0F) && (roots2.rootTwo == 0.0F)){ printf("\n%s\n", "Уравнение не имеет корней");  }
							else if(roots2.rootTwo == 0.0F){ printf("\n%s%.3f\n", "Корень уравнения: ", roots2.rootOne); }
							else{ printf("\n%s%.3f\t%.3f", "Корни уравнения: ", roots2.rootOne, roots2.rootTwo); }

							break;
						}

						case 9:
						{
							printf("%s\n", "Введите возраст...");
							scanf("%hhu", &yearTalkYear);

							yearTalkTalker = talkYear(yearTalkYear);

							printf("\n%ui\t%s\n", yearTalkTalker.years, ((yearTalkTalker.mode == 0)? "Год" : ((yearTalkTalker.mode == 1)? "Года" : "Лет")));

							break;
						}

						case 10:
						{
							printf("%s\n", "Введите число...");
							scanf("%i", &evenNumber);

							printf("\n%s%hhu\n", "Количество четных чисел до введенного числа(не включительно): ", evenNumbers(evenNumber));

							break;
						}

						case 11:
						{
							printf("%s\n", "Введите число...");
							scanf("%i", &numberDivedThreeAndNotDivedFive);

							printf("\n%s%hhu\n", "Количество чисел до введенного числа(не включительно) делящихся на 3 и не делящихся на 5: ", numbersDivedThreeAndNotDivedFive(numberDivedThreeAndNotDivedFive));

							break;
						}

						case 0:
						{
							printf("%s\n", "Пока!");
							return 0;

							break;
						}

						default:
						{
							printf("%s\n\n", "Действие нераспознано. Требуется повторить.");
							break;
						}
		}
	}

//	printf("%.3f\n", square(5));
//	printf("%.3f\n", convert(2));
//	printf("%.3f\n", areaOfTriangle(7, 5));
//	printf("%.3f\n", solutionOfEquation(0, -1, -2).rootOne);
//	printf("%.3f\n", solutionOfEquation(0, -1, -2).rootTwo);
//	printf("%i\n", counterTime(5, 20, 20));
//	printf("%d\n", divThree(3));
//	printf("%.3f\n", maximum(4, 2, 1));
//	printf("%.3f\n", solutionOfEquation2(-20, 8, 1.5, 1).rootOne);
//	printf("%.3f\n", solutionOfEquation2(-20, 8, 1.5, 1).rootTwo);
//	printf("%i\t%s\n", talkYear(20).years, (talkYear(20).mode == 0)? "Год" : ((talkYear(20).mode == 1)? "Года" : "Лет"));
//	printf("%i\n", evenNumbers(5));
//	printf("%i\n", numbersDivedThreeAndNotDivedFive(7));

	return 0;
}
