/* funds3.c == transfer struct as a parameter */
#include <stdio.h>
#include <stdlib.h>
#define FUNDLEN 50

struct funds {
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};

double sum(struct funds moolah);	/* parameter is a struct */

int main (void)
{
	struct funds stan =	{
		"Garlic-Melon Bank",
		3024.72,
		"Lucky's Savings and Loan",
		9237.11
	};

	printf("Stan has a total of $%.2f.\n", sum(stan));

	system("pause");
	return 0;
}

double sum(struct funds moolah)
{
	return (moolah.bankfund + moolah.savefund);
}