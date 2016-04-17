/* exercise7.c */
#include <stdio.h>
#include <stdlib.h>

void copy_ptr (double s[], double *t, int n)
{
	int index;
	for (index = 0; index < n; index++)
	{
		*(t + index) = s[index];
	}
}

int main (void)
{
	double source[7] = {0.1, 2.3, 4.5, 6.7, 8.9, 10.11, 12.13};
	double copy[3];
	int index;

	copy_ptr (&source[2], copy, 3);

	printf("Source array:\n");
	for (index = 0; index < 7; index ++)
		printf("%6.2f", source[index]);
	printf("\nAfter copying:\n");
	for (index = 0; index < 3; index ++)
		printf("%6.2f", copy[index]);
	printf("\n");

	system("pause");
	return 0;
}