/* exercise3.c */
#include <stdio.h>
#include <stdlib.h>

int max_int_array (int arr[], int n);

int main (void)
{
	int index, max;
	const int LENGTH = 5;
	int array[LENGTH];
	
	printf("Please enter %d integers.\n", LENGTH);
	for (index = 0; index < LENGTH; index ++)
		scanf_s("%d", &array[index]);

	max = max_int_array (array, LENGTH);
	printf("%d\n", max);

	system("pause");
	return 0;

}

int max_int_array (int arr[], int n)
{
	int max = *arr;
	int index = 1;
	for (; index < n; index++)
	{
		if (max < *(arr + index))
			max = *(arr + index);
	}
	return max;
}