/* exercise8.c */
#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 5

void display(int rows, double arr[][COLS]);
void copy(int rows, double arr[][COLS], double copy[][COLS]);
int main(void)
{
	double array[ROWS][COLS] = {
		{ 1.1, 2.2, 3.3, 10.10, 11.11 },
		{ 4.4, 5.5, 6.6, 12.12, 13.13 },
		{ 7.7, 8.8, 9.9, 14.14, 15.15 },
	};
	double array_copy[ROWS][COLS];

	copy(ROWS, array, array_copy);
	display(ROWS, array);
	display(ROWS, array_copy);

	system("pause");
	return 0;
}

void display(int rows, double arr[][COLS])
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < COLS; j++)
			printf("%6.2lf", arr[i][j]);
		printf("\n");
	}
	printf("\n");

	return;
}

void copy(int rows, double arr[][COLS], double copy[][COLS])
{
	int i, j;
	for (i = 0; i < rows; i++)
	for (j = 0; j < COLS; j++)
		copy[i][j] = arr[i][j];

	return;
}