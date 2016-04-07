/* exercise16.c */
#include <stdio.h>
int main (void)
{
	const float INTEREST = 0.08;
	const long int TAKEN = 100000;
	long int acnt = 1000000;
	int year = 1;

	while (acnt > 0)
	{
		acnt *= (1 + INTEREST);
		acnt -= 100000;
		year++;
	}

	printf("After %d years, Chuckie will clear his accout.\n", year);
	return 0;
}

