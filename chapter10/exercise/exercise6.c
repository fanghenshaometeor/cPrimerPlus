/* exercise6.c */
#include <stdio.h>
#include <stdlib.h>
#define ROWS 4
#define COLS 5

void copy_ptr(double s[], double *t, int n)
{
	int index;
	for (index = 0; index < n; index++)
	{
		*(t + index) = *(s + index);
	}

	return;
}

int main(void)
{
	double array[ROWS][COLS] = {
		{ 1.2, 3.4, 5.6, 7.8, 9.10 },
		{ 11.12, 13.14, 15.16, 17.18, 19.20 },
		{ 21.22, 23.24, 25.26, 27.28, 29.30 },
		{ 31.32, 33.34, 35.36, 37.38, 39.40 },
	};

	double array_copy[ROWS][COLS];
	int index, i, j;

	for (index = 0; index < ROWS; index++)
	{
		copy_ptr(*(array + index), *(array_copy + index), COLS);
	}

	printf("Source array:\n");
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
			printf("%6.2f", array[i][j]);
		printf("\n");
	}
	printf("After copying:\n");
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
			printf("%6.2f", array_copy[i][j]);
		printf("\n");
	}

	system("pause");
	return 0;
}