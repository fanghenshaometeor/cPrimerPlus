/* exercise7.c */
#include <stdio.h>
int main (void)
{
	float input1, input2, minus, multi, result;

	printf("Please input two float numbers:\n");
	while((scanf("%f%f", &input1, &input2)) == 2)
	{
		minus = input1 - input2;
		multi = input1 * input2;
		result = minus / multi;
		printf("The substraction of the two input numbers is %.2f.\n", minus);
		printf("The multiplication of the two input numbers is %.2f.\n", multi);
		printf("The quoation of the subs and nulti is %.2f.\n", result);
		printf("Please enter the next two float numbers:\n");
	}
	printf("Invalid input.\nPlease input two float numbers.\n");
}

