/* funds1.c -- transfer struct member as parameter */
#include <stdio.h>
#include <stdlib.h>
#define FUNDLEN 50

struct  funds {
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};

double sum(double, double);

int main (void)
{
	struct funds stan = {
		"Garlic_Melon Bank",
		3024.2,
		"Lucy's Savings and Loan",
		9237.11,
	};

	printf("Stan has a total of $%.2f.\n", sum(stan.bankfund, stan.savefund));

	system("pause");
	return 0;
}

/* sum for two double values */
double sum(double x, double y)
{
	return (x + y);
}