/* exercise8.c */
#include <stdio.h>

void Temperatures (double teper);
int main (void)
{
	double tep_input;
	char error_input;
	char error_input_s[40];

	printf("Please input a temperature of Fahrenheit:\n");

	while (scanf("%lf", &tep_input) == 1 )
	{
		Temperatures(tep_input);

		printf("Please input a temperature of Fahrenheit:\n");
		
	}

	printf("Invalid input.\n");
	printf("Done!\n");
	return 0;
}
void Temperatures (double teper)
{
	const float F_PARA_MUL = 1.8;
	const float F_PARA_PLUS = 32.0;
	const float CEL_TO_KEL = 273.16;

	double celsius, kelvin;

	celsius = F_PARA_MUL * teper + F_PARA_PLUS;
	kelvin = celsius + CEL_TO_KEL;

	printf("When Fahrenheit = %.2f, the corresponding Celsius and Kelvin equal repectively %.2f and %.2f.\n", teper, celsius, kelvin);
}

