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
	double pow = 1;
	int i;

	if (p < 0)
	{
		for (i = 1, p = -p; i <= p; i++)
			pow *= n;
		pow = 1 / pow;
	}
	else if (p > 0)
	{
		for (i = 1; i <= p; i++)
			pow *= n;
	}
	else
		pow = 1;

	return pow;
}
