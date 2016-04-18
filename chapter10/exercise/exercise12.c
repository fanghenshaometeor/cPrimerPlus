/* exercise12.c */
#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 5

void input_array (double arr[][COLS], int row);
void compute_average_per_set (double arr[][COLS], int row);
double compute_average (double arr[], int row);
double compute_average_total (double arr[][COLS], int row);
double max_value (double arr[][COLS], int row);
void display (double arr[][COLS], int row);

int main (void)
{
	double fuck[ROWS][COLS];
	double average, max;

	input_array (fuck, ROWS);

	compute_average_per_set(fuck, ROWS);

	average = compute_average_total(fuck, ROWS);
	printf("\nThe average value of total numbers is %.3lf.", average);

	max = max_value(fuck, ROWS);
	printf("\nThe largest value of total numbers is %.3lf.\n", max);

	display(fuck, ROWS);

	printf("\nDone!\n");

	system ("pause");
	return 0;
}

void input_array (double arr[][COLS], int row)
{
	int i, j;

	printf("Please enter %d number sets with each including %d numbers.\n", row, COLS);
	for (i = 0; i < row; i++)
	{
		printf("Number set %d\n", i+1);
		for (j = 0; j < COLS; j++)
			scanf_s("%lf", &arr[i][j]);
	}

	return;
}

void compute_average_per_set (double arr[][COLS], int row)
{
	int i;
	double average_per_set;

	for (i = 0; i < row; i++)
	{
		average_per_set = compute_average(*(arr + i), COLS);
		printf("\nThe average value of number set %d is %.3lf.", i+1, 
				average_per_set);
	}

	return;
}

double compute_average_total (double arr[][COLS], int row)
{
	int i, j;
	double total = 0;

	for (i = 0; i < row; i++)
		for (j = 0; j < COLS; j++)
			total += arr[i][j];

	return total / (row * COLS);
}

double max_value (double arr[][COLS], int row)
{
	int i, j;
	double max = arr[0][0];

	for (i = 0; i < row; i++)
		for (j = 1; j < COLS; j++)
			if (max < arr[i][j])
				max = arr[i][j];

	return max;
}

void display (double arr[][COLS], int row)
{
	int i, j;

	printf("\nHere is what you have entered:\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < COLS; j++)
			printf("%8.3lf", arr[i][j]);
		printf("\n");
	}

}

double compute_average (double arr[], int row)
{
	int index;
	double tot = 0;

	for (index = 0; index < row; index++)
		tot += arr[index];

	return tot / row;
}