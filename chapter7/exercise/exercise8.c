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
int main (void)
{
	int wagelev;

	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr			2) $9.33/hr\n");
	printf("3) $10.00/hr			4) $11.20/hr\n");
	printf("5) quit\n");
	printf("*****************************************************************\n");
	
	printf("Enter a number(q to quit):");
	while (scanf("%d", &wagelev) == 1)
	{
		switch (wagelev) {
			case 1:compute_salary(WAGELEV1); printf("Enter again:"); break;
			case 2:compute_salary(WAGELEV2); printf("Enter again:"); break;
			case 3:compute_salary(WAGELEV3); printf("Enter again:"); break;
			case 4:compute_salary(WAGELEV4); printf("Enter again:"); break;
			case 5:printf("Enter q to quit.\n"); break;
			default:printf("Your should enter a number from 1 to 5.\n");
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
}








	
