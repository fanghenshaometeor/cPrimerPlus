/* exercise10.c */
#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 5
void display (double arr[][COLS], int rows);
void multiply (double arr[][COLS], int rows);

int main (void)
{
	double array[ROWS][COLS] = {
		{1.234, 2.345, 3.456, 4.567, 5.678},
		{6.789, 7.890, 8.901, 9.012, 0.123},
		{11.123, 12.234, 13.345, 14.456, 15.567},
	};

	printf("Original array:\n");
	display (array, ROWS);
	printf("\nAfter multiply:\n");
	multiply (array, ROWS);
	display (array, ROWS);
	printf("Done.\n");

	system("pause");
	return 0;
}

void display (double arr[][COLS], int rows)
{
	int i, j;

	for (i = 0; i < rows; i ++)
	{
		for (j = 0; j < COLS; j++)
			printf("%10.3f", *(*(arr + i) + j));
		printf("\n");
	}

	return;
}

void multiply (double arr[][COLS], int rows)
{
	int i, j;

	for (i = 0; i < rows; i++)
		for (j = 0; j < COLS; j++)
			*(*(arr + i) + j) = 2 * *(*(arr + i) + j);

	return;
}