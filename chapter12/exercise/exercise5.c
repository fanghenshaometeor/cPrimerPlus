/* exercise5.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

static int array[SIZE] = { 0 };

void produce_rand(void);
void sort(int array[]);
void output(int array[]);

int main(void)
{

	puts("Here we produce 100 random integers between 1 and 10.");
	produce_rand();
	output(array);

	printf("\n");
	puts("Then we sort them in the order of decline.");
	sort(array);
	output(array);

	printf("\nDone!\n");
	system("pause");
	return 0;
}

void produce_rand(void)
{
	int index = 0;

	srand((unsigned)time(0));
	for (index = 0; index < SIZE; index++)
	{
		int random = rand() % 10 + 1;
		array[index] = random;
	}

	return;
}

void sort(int array[])
{
	int i = 0, j = 0;

	for (i = 0; i < SIZE - 1; i++)
	for (j = i + 1; j < SIZE; j++)
	{
		if (array[i] < array[j])
		{
			int temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}

	return;
}

void output(int array[])
{
	int i = 0, j = 10;

	for (i = 1; i < SIZE+1; i++)
	{
		printf("%4d", array[i-1]);
		if (i % j == 0)
			printf("\n");
	}
}