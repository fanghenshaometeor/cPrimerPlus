/* exercise3.c -- This program aims to accept a float point number
	and then prints it respectivey in the way of digits and expoential */
#include <stdio.h>
int main (void)
{
	float inputnum;

	printf("Please input a number: ");
	scanf("%f", &inputnum);
	printf("a.The input is %.1f or %.1e\n", inputnum, inputnum);
	printf("b.The input is %+.3f or %.3E\n", inputnum, inputnum);

	return 0;
}

