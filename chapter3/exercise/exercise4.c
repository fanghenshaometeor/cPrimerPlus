/* exercise4.c -- This program aims to
	print a float number scanned respectively in the way of float and expoential */
#include <stdio.h>
int main (void)
{
	float f_input;

	printf("input a float: ");
	scanf("%f", &f_input);

	printf("The input is %f or %e.\n", f_input, f_input);

	return 0;
}

