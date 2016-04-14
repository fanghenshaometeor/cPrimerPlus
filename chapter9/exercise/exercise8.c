/* exercise7.c */
#include <stdio.h>
double power (double n, int p);
int main (void)
{
	double x, xpow;
	int exp;

	printf("Enter a number and the integer power");
	printf(" to which\nthe number will be raised. Enter q");
	printf(" to quit.\n");
	while (scanf("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoy this power trip -- bye!\n");
	return 0;
}

double power(double n, int p)
{
	double pow;

	if (p == 0)
		return 1;
	else if (p > 0)
	{
		pow = n * power(n, p-1);
	}
	else if (p < 0)
	{
		pow = n * power(n, p+1);
	}
	
	return pow;
}
