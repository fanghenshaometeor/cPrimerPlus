/* exercise8.c */
#include <stdio.h>
float result (float n1, float n2);
int main (void)
{
	float input1, input2, resu;

	printf("Please enter two float numbers:\n");
	while((scanf("%f%f", &input1, &input2)) == 2)
	{
		resu = result(input1, input2);
		printf("The required result is %.2f.\n", resu);
		printf("Please enter two next float numbers:\n");
	}
	printf("Invalid input.\nPlease enter two float numbers.\n");
}

float result (float n1, float n2)
{
	float minus, multi, res;
	minus = n1 - n2;
	multi = n1 * n2;
	res = minus / multi;
	return res;
}
