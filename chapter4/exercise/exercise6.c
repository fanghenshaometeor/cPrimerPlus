/* exercise6.c -- just do something as the question requires*/
#include <stdio.h>
#include <float.h>
int main (void)
{
	double d1 = 1.0/3.0;
	float f1 = 1.0/3.0;

	printf("The double type value 1.0/3.0: ");
	printf("%.4f %.12f %.16f\n", d1, d1, d1);

	printf("The float type value 1.0/3.0: ");
	printf("%.4f %.12f %.16f\n", f1, f1, f1);

	printf("The value of FLT_DIG: %d\n", FLT_DIG);
	printf("The value of DBL_DIG: %d\n", DBL_DIG);

	return 0;
}

