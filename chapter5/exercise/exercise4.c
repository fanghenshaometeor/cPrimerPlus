/* exercise4.c */
#include <stdio.h>

int main (void)
{
	int feet;
	double cm_input, inch;
	const double INCH_PER_CM = 0.3937;
	const double FEET_PER_CM = 0.0328;
	const int INCH_PER_FEET = 12;

	printf("Enter a height in centimeters: ");
	scanf("%lf", &cm_input);

	while (cm_input > 0)
	{
		feet = (int)(cm_input * FEET_PER_CM);
		inch = cm_input * INCH_PER_CM - INCH_PER_FEET * feet;

		printf("%.1lf cm = %d feet, %.1lf inches\n", cm_input, feet, inch);

		printf("Enter a height in centimeters(<=0 to quit): ");
		scanf("%lf", &cm_input);
	}
	printf("bye\n");

	return 0;
}
	
