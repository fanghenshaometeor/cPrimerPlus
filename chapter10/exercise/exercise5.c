/* exercise5.c */
#include <stdio.h>
#include <stdlib.h>

double sub_max_min (double arr[], int n);

int main (void)
{
	int index;
	const int LENGTH = 5;
	double array[LENGTH];
	double sub;

	printf("Please enter %d numbers.\n", LENGTH);
	for (index = 0; index < LENGTH; index++)
		scanf_s("%lf", &array[index]);

	sub = sub_max_min (array, LENGTH);
	printf("The substraction between the largest value and the smallest value is %.2lf\n",
				sub);
	system("pause");
	return 0;
}

double sub_max_min (double arr[], int n)
{
	double max = arr[0], min = arr[0];
	int index;

	for (index = 1; index < n; index ++)
	{
		if (max < arr[index])
			max = arr[index];
		else if (min > arr[index])
			min = arr[index];
	}

	return max - min;
}