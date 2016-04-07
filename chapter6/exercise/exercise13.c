/* exercise13.c */
#include <stdio.h>
int main (void)
{
	const int SIZE = 8;
	double fuck[SIZE], fucking[SIZE], input;
	int index, row;

	printf("Please enter eight doubles.\n");
	for (index = 0; index < SIZE; index ++)
	{
		printf("No.%d: ", index + 1);
		scanf("%lf", &input);
		fuck[index] = input;
	}

	fucking[0] = fuck[0];
	for (index = 1; index < SIZE; index++)
	{
		fucking[index] = fucking[index - 1] + fuck[index];
	}

	for (row = 1; row <= 1; row++)
	{	
		for (index = 0; index < SIZE; index++)
		{
			printf("%10.2lf", fuck[index]);	
		}
		printf("\n");
		for (index = 0; index < SIZE; index++)
		{
			printf("%10.2lf", fucking[index]);
		}
	}
	printf("\n");
	return 0;
}
