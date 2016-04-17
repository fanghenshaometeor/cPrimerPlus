/* exercise9.c */
#include <stdio.h>
#include <stdlib.h>

void add (int add1[], int add2[], int result[], int size);

int main (void)
{
	int array1[4] = {2, 4, 5, 8};
	int array2[4] = {1, 0, 4, 6};
	int array3[4], index;

	add(array1, array2, array3, 4);

	printf("array1:\n");
	for (index = 0; index < 4; index++)
	{
		printf("%4d", array1[index]);
	}
	printf("\narray2:\n");
	for (index = 0; index < 4; index++)
	{
		printf("%4d", array2[index]);
	}
	printf("\nadd:\n");
	for (index = 0; index < 4; index++)
	{
		printf("%4d", array3[index]);
	}
	printf("\n");
	system("pause");
	return 0;
}

void add (int add1[], int add2[], int result[], int size)
{
	int index = 0;

	for (; index < size; index++)
		*(result + index) = *(add1 + index) + *(add2 + index);

	return;
}