// boolean.c -- use the variable _Bool
#include <stdio.h>
int main (void)
{
	long num;
	long sum = 0l;
	_Bool input_is_good;
	printf("Please enter an integer to be summed:");
	printf("(q to quit): ");

	input_is_good = (scanf("%ld", &num) == 1);
	while (input_is_good)
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit):");
		input_is_good = (scanf("%ld", &num) == 1);
	}
	printf("Those integers sum to %ld.\n", sum);
	return 0;
}

