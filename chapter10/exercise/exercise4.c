/* exercise4.c */
#include <stdio.h>
#include <stdlib.h>

int max_index_double_array (double arr[], int n);

int main(void)
{
	int index, max_index;
	const int LENGTH = 5;
	double array[LENGTH];

	printf("Please enter %d numbers.\n", LENGTH);
	for (index = 0; index < LENGTH; index++)
		scanf_s("%lf", &array[index]);

	max_index = max_index_double_array (array, LENGTH);
	printf("The index corresponding the biggest value is %d\n", max_index);
	system ("pause");
	return 0;
}

int max_index_double_array (double arr[], int n)
{
	int index = 1;
	double max = arr[0];

	for (; index < n; index++)
	{
		if (max < arr[index])
			max = arr[index];
	}
	for (index = 0; index < n; index++)
	{
		if (max == arr[index])
			break;
	}
	return index;
}