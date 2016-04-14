/* exercise4.c */
#include <stdio.h>
double harmony_average (double a, double b);
int main (void)
{
	double x, y;

	printf("This program aims to compute the harmony average value of two numbers.\n");
	printf("Please enter two numbers:");
	while (scanf("%lf %lf", &x, &y) == 2)
	{
		printf("You just input %.4lf and %.4lf.\n", x, y);
		printf("The harmony average value of them is %.4lf.\n", harmony_average(x, y));
		printf("Please enter two numbers:");
	}
	printf("Done.\n");
		
	return 0;
}

double harmony_average (double a, double b)
{
	double result;

	a = 1 / a;
	b = 1 / b;
	result = (a + b) / 2;
	result = 1 / result;

	return result;
}
