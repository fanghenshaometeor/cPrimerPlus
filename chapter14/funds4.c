/* funds4.c -- transfer a struct array to function */
#include <stdio.h>
#include <stdlib.h>
#define FUNDLEN 50
#define N 2

struct funds {
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(const struct funds money[], int n);

int main (void)
{
	struct funds jones[N] = {
		{
			"Garlic-Melon Bank",
			3024.72,
			"Lucky's Savings and Loan",
			9237.11
		},
		{
			"Honest Jack's Bank",
			3534.28,
			"Party Time Savings",
			3203.89
		}
	};

	printf("The Jonese have a total of $%.2f.\n", sum(jones, N));

	system("pause");
	return 0;
}

double sum(const struct funds money[], int n)
{
	double total;
	int i;

	for (i = 0, total = 0; i < n; i++)
		total += money[i].bankfund + money[i].savefund;

	return total;
}