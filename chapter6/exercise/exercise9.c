/* exercise9.c */
#include <stdio.h>
int main (void)
{
	int input_low, input_up, index;
	int sum = 0;

	printf("Enter lower and upper integer limits: ");
	while ((scanf("%d%d", &input_low, &input_up)) == 2)
	{
		if (input_low >= input_up)
			break;
		for(sum = 0, index = input_low; index <= input_up; index++)
			sum += index * index;
		printf("The sums of the squares form %d to %d is %d\n", input_low * input_low, input_up * input_up,
		sum);
		printf("Enter next set of limits: ");
		/*if (input_low >= input_up)
			break;*/
	}
	printf("Done\n");

	return 0;
}
