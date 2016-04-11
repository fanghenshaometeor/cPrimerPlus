/* exercise8.c */
#include <stdio.h>
void clear (void);
void compute (char op);
float inputnumber (void);
int main (void)
{
	char operation;

	printf("Enter the operation of your choice:\n");
	printf("a. add			s. subtract\n");
	printf("m. multiply		d. divide\n");
	printf("q. quit\n");
	while ((operation = getchar()) != 'q')
	{
		switch (operation) {
			case 'a': clear(); compute('a'); break;
			case 's': clear(); compute('s'); break;
			case 'm': clear(); compute('m'); break;
			case 'd': clear(); compute('d'); break;
			default: clear(); printf("You are supposed to input limited letters.\n");
				break;
		}
				
		printf("Enter the operation of your choice:\n");
		printf("a. add			s. subtract\n");
		printf("m. multiply		d. divide\n");
		printf("q. quit\n");
	}

	printf("Bye.\n");
	return 0;
}

void clear (void)
{
	while (getchar() != '\n')
		continue;
}

void compute (char op)
{
	float num1, num2;

	printf("Enter first number:");
	num1 = inputnumber();
	printf("Enter second number:");
	num2 = inputnumber();

	if (op == 'a')
	{	clear(); printf("%.1f + %.1f = %.1f\n", num1, num2, num1 + num2);}
	else if (op == 's')
	{	clear(); printf("%.1f - %.1f = %.1f\n", num1, num2, num1 - num2);}
	else if (op == 'm')
	{	clear(); printf("%.1f * %.1f = %.1f\n", num1, num2, num1 * num2);}
	else {
		while (num1 == 0) {
			printf("Enter a number other than 0:");
			num1 = inputnumber ();
		}
		while (num2 == 0) {
			printf("Enter a number other than 0:");
			num2 = inputnumber ();
		}
		printf("%.1f / %.1f = %.1f\n", num1, num2, num1 / num2); clear();
	}

}

float inputnumber (void)
{
	float num;
	char error_input;
	
	while (scanf("%f", &num) != 1)
	{
		while ((error_input = getchar()) != '\n')
			putchar(error_input);
		printf(" is not an number.\n");
		printf("Please enter a number, such as 2.5, -1.78E8, or 3:");
	}

	return num;
}

















