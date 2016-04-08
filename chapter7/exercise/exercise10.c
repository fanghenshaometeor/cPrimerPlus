/* exercise10.c */
#include <stdio.h>
#define TAXRATE1 0.15
#define TAXRATE2 0.28
void compute_tax (long int wagetype);
int main (void)
{
	int type;
	const long int BASE1 = 17850;
	const long int BASE2 = 23900;
	const long int BASE3 = 29750;
	const long int BASE4 = 14875;

	printf("Here's the United states Federal Tax Schedule.\n");
	printf("************************************************************************\n");
	printf("| number |       types       | taxes     \n");
	printf("|   1    |       single      | the first 17,850 dollars-0.15, more-0.28 \n");
	printf("|   2    |    householder    | the first 23,900 dollars-0.15, more-0.28 \n");
	printf("|   3    |  married, common  | the first 29,750 dollars-0.15, more-0.28 \n");
	printf("|   4    | married, divorced | the first 14,875 dollars-0.15, more-0.28 \n");
	printf("************************************************************************\n");
	printf("Please enter your type(q to quit):\n");
	
	while(scanf("%d", &type) == 1)
	{
		switch (type) {
			case 1: compute_tax(BASE1); printf("Enter your type number:\n"); break;
			case 2: compute_tax(BASE2); printf("Enter your type number:\n"); break;
			case 3: compute_tax(BASE3); printf("Enter your type number:\n"); break;
			case 4: compute_tax(BASE4); printf("Enter your type number:\n"); break;
			default: printf("You should enter an integer between 1 and 4.\nOr enter q to quit.\n");
				printf("Enter again:\n"); break;
		}
	}
	printf("Done!\n");
	return 0;
}
void compute_tax (long int wagetype)
{
	/* const float TAXBASE1 = BASE1 * TAXRATE1;
	const float TAXBASE2 = BASE2 * TAXRATE1;
	const float TAXBASE3 = BASE3 * TAXRATE1;
	const float TAXBASE4 = BASE4 * TAXRATE1; */
	float tax, wage;

	printf("Please enter your wage:\n");
	scanf("%f", &wage);

	if (wage < wagetype)
		tax = wage * TAXRATE1;
	else
		tax = wagetype * TAXRATE1 + (wage - wagetype) * TAXRATE2;
	printf("Your wage is %.2f, and your tax is %.2f.\n", wage , tax);
}
