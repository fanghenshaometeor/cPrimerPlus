/* arf.c -- function manipulating the array */
#include <stdio.h>
#define SIZE 5
void show_array (const double ar[], int n);
void mult_array (double ar[], int n, double mult);

int main (void)
{
	double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};

	printf("The original dip array:\n");
	show_array (dip, SIZE);
	mult_array (dip, SIZE, 2.5);
	printf("The dip array after calling mult_array():\n");
	show_array(dip, SIZE);
	return 0;
}

/* display the content of the array */
void show_array (const double ar[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%8.3f", ar[i]);
	putchar('\n');
}

/* multiplay every elemnt in the array with one mult */
void mult_array (double ar[], int n, double mult)
{
	int i;

	for (i = 0; i < n; i++)
		ar[i] *= mult;
}

