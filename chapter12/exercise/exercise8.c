/* exercise8.c */
#include <stdio.h>
#include <stdlib.h>

int *make_array(int elem, int val);
void show_array(const int ar[], int n);

int main(void)
{
	int *pa, size, value;

	printf("Enter the number of elements: ");
	scanf_s("%d", &size);
	while (size > 0)
	{
		printf("Enter the initialization value: ");
		scanf_s("%d", &value);
		pa = make_array(size, value);
		if (pa)
		{
			show_array(pa, size);
			free(pa);
		}
		printf("Enter the number of elements(-1 to quit): ");
		scanf_s("%d", &size);
	}
	printf("Done.\n");
	return 0;
}

int *make_array(int elem, int val)
{
	int *intarr = NULL, index;

	intarr = (int *)malloc(elem * sizeof(int));
	for (index = 0; index < elem; index++)
		*(intarr + index) = val;

	return intarr;
}

void show_array(const int ar[], int n)
{
	int index = 1, rem = 8;
	for (index = 1; index <= n; index++)
	{
		printf("%5d", ar[index - 1]);
		if (index % rem == 0)
			printf("\n");
	}
	printf("\n");
}