/* exercise6.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 1000

static int random[SIZE] = { 0 };
static int random_time[SIZE] = { 0 };

void produce_random(void);
void number_time(int array[]);
void output(int array[], int arr_size);

int main(void)
{
	puts("Now let's produce 1000 random integers between 1 and 1000.");
	produce_random();
	output(random, SIZE);

	printf("\n");
	puts("Then we will print an array of 1000 elements, each element of which");
	puts("represents the times its index number occurs");
	number_time(random);
	output(random_time, 10);

	printf("\nDone!\n");
	system("pause");
	return 0;
}

void produce_random(void)
{
	int index = 0;

	srand((unsigned)time(0));
	for (index = 0; index < SIZE; index++)
	{
		int randnumber = rand() % 10 + 1;
		random[index] = randnumber;
	}

	return;
}

void number_time(int array[])
{
	int std = 1, index = 0, count = 0;

	for (std = 1; std <= SIZE; std++)
	{
		for (count = 0, index = 0; index < SIZE; index++)
		{
			if (std == array[index])
				count += 1;
		}
		random_time[std - 1] = count;
	}

}

void output(int array[], int arr_size)
{
	int index = 1, resum = 10;

	for (index = 1; index <= arr_size; index++)
	{
		printf("%5d", array[index - 1]);
		if (index % resum == 0)
			printf("\n");
	}
}