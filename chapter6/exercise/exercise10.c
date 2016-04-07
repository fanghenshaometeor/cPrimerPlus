/* exercise10.c */
#include <stdio.h>
int main (void)
{
	const int SIZE = 8;
	int int8[SIZE], index, input;

	printf("Enter an integer: ");
	for (index = 0; index < SIZE; index++)
	{
		scanf("%d", &input);
		int8[index] = input;
		printf("Enter the next integer: ");
	}
	printf("\n Enough! The numbers you input are as follows:\n");
	for (index = SIZE - 1; index >= 0; index--)
	{
		printf("%8d", int8[index]);
	}
	printf("\n");
	return 0;
}

