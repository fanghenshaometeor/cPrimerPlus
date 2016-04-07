/* exercise12.c */
#include <stdio.h>
#define SIZE 8
int main (void)
{
	int power[SIZE], index, element, i_ele;

	for (index = 0; index < SIZE; index++)
	{
		for (element = 1, i_ele = 0; i_ele < index; i_ele++)
			element *= 2;
		power[index] = element;
	}

	printf("Print the data:\n");
	index = 0;
	do {
		printf("power[%d] = %d\n", index, power[index]);
		index++ ;
	} while (index < SIZE);

	return 0;
}

