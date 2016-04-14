/* exercise5.c */
#include <stdio.h>
void larger_of (double *x, double *y);
int main (void)
{
	double input1, input2;

	printf("Please input two numbers and we will replace their values with the larger one between them.\n");
	printf("Now enter two numbers:\n");
	while (scanf("%lf %lf", &input1, &input2) == 2)
	{
		printf("Before: %.4lf and %.4lf.\n", input1, input2);
		larger_of (&input1, &input2);
		printf("After: %.4lf and %.4lf.\n", input1, input2);
		printf("Now enter two numbers:\n");
	}
	printf("Done.\n");
		
	return 0;
}

void larger_of (double *x, double *y)
{
	*x = (*x > *y) ? *x : *y;
	*y = (*x > *y) ? *x : *y;
}
