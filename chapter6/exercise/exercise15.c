/* exercise15.c */
#include <stdio.h>
int main (void)
{
	const float interest_Dap = 0.10;
	const float interest_Dei = 0.05;
	int start = 100, year = 1;
	float sum_Dap = 0.0, sum_Dei = 0.0;

	do {
		sum_Dap += start * (1 + interest_Dap);
		sum_Dei += (sum_Dei + start) * interest_Dei;
		year++;
	} while (sum_Dei <= sum_Dap);

	printf("After %d years, Daphne will have invested %.4f dollors, while Deirdre will have invested %.4f dollors.\n",
		 year - 1, sum_Dap, sum_Dei);
	return 0;
}
