/* exercise8.c */
#include <stdio.h>
#define WAGELEV1 8.75
#define WAGELEV2 9.33
#define WAGELEV3 10.00
#define WAGELEV4 11.20
#define TAXRATE1 0.15
#define TAXRATE2 0.20
#define TAXRATE3 0.25
void compute_salary (float wagelev);
void clear (void);
int main (void)
{
	char wagelev;

	printf("*****************************************************************\n");
	printf("Enter the character corresponding to the desired pay rate or action:\n");
	printf("a) $8.75/hr			b) $9.33/hr\n");
	printf("c) $10.00/hr			d) $11.20/hr\n");
	printf("q) quit\n");
	printf("*****************************************************************\n");
	
	printf("Enter a character(q to quit):");
	while ((wagelev = getchar()) != 'q')
	{
		switch (wagelev) {
			case 'a':clear(); compute_salary(WAGELEV1); printf("Enter again:"); break;
			case 'b':clear(); compute_salary(WAGELEV2); printf("Enter again:"); break;
			case 'c':clear(); compute_salary(WAGELEV3); printf("Enter again:"); break;
			case 'd':clear(); compute_salary(WAGELEV4); printf("Enter again:"); break;
			default:clear(); printf("Your should enter a character from a to d,or q. \n");
				printf("Enter again:"); break;
		}
	}
	printf("Done!\n");
	return 0;
}

void compute_salary(float wagelev)
{
	int hours;
	float salary, after_tax_salary;

	const float WAGEBASE1 = 300 * (1 - TAXRATE1);
	const float WAGEBASE2 = WAGEBASE1 + 150 * (1 - TAXRATE2);
	printf("Please enter the working hours:\n");
	
	scanf("%d", &hours);

	salary = hours * wagelev;
	if (salary <= 300)
		after_tax_salary = salary * (1 - TAXRATE1);
	else if (salary <= 450)
		after_tax_salary = WAGEBASE1 + (salary - 300) * (1 - TAXRATE2);
	else
		after_tax_salary = WAGEBASE2 + (salary - 450) * (1 - TAXRATE3);
	printf("The total salary is %.2f, the tax is %.2f and the after-tax salary is %.2f.\n",
		salary, salary - after_tax_salary, after_tax_salary);
	clear();
}

void clear (void)
{
	while (getchar() != '\n')
		continue;
}

