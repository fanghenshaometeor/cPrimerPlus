/* exercise7.c */
#include <stdio.h>
#define BASE 10.00
#define TIMERATE 1.5
#define TAXRATE1 0.15
#define TAXRATE2 0.20
#define TAXRATE3 0.25
float compute_salary (int hours);
float comp_taxaftsalr (float salary);
int main (void)
{
	int hours;
	float salary, aftaxsalary;

	printf("Please enter the working hours:\n");
	scanf("%d", &hours);
	salary = compute_salary(hours);
	aftaxsalary = comp_taxaftsalr(salary);
	printf("Your total salary is %.2f, tax is %.2f and after-tax salary is %.2f.\n", salary, salary - aftaxsalary, 
		aftaxsalary);
	return 0;
}
float compute_salary (int hours)
{
	float salary;

	if (hours <= 40)
		salary = hours * BASE;
	else
		salary = hours * TIMERATE * BASE;
	return salary;
}
float comp_taxaftsalr (float salary)
{
	float taxaft;

	if (salary <= 300)
		taxaft = salary * (1 - TAXRATE1);
	else if (salary <= 450)
		taxaft = 300 * (1 - TAXRATE1) + (salary - 300) * (1 - TAXRATE2);
	else
		taxaft = 300 * (1 - TAXRATE1) + 150 * (1 - TAXRATE2) + (salary - 450) * (1 - TAXRATE3);
	return taxaft;
}
