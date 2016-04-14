/* exercise1.c */
#include <stdio.h>
double min (double x, double y);
int main (void)
{
	double x, y;

	printf("Please input two numbers (q to quit):\n");
	while ((scanf("%lf %lf", &x, &y)) == 2)
	{
		printf("You just input %.3lf and %.3lf.\n", x, y);
		printf("The smaller of the two is %.3lf.\n", min(x, y));
		printf("Please input two numbers (q to quit):\n");
	}
	printf("Done!\n");

	return 0;
}

double min (double x, double y)
{
	double min;

	min = (x < y) ? x : y;

	return min;
}

