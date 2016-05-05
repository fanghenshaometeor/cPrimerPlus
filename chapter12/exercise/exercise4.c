/* exercise4.c */
#include <stdio.h>
#include <stdlib.h>

static int recall = 0;

int use(int fuck);

int main(void)
{
	int fun, index = 0, test;

	printf("Just for fun, and enter a positive integer(high limit): ");
	scanf_s("%d", &fun);

	while (index < fun)
	{
		printf("Do you want to recall the specific function?\n");
		printf("1 means yes and anything else means no.\n");
		printf("Please enter: ");
		scanf_s("%d", &test);
		recall = use(test);
		printf("Choose again.\n");
		index += 1;
	}

	printf("The loop excuted %d times, and the function is recalled %d times.\n", fun, recall);

	system("pause");
	return 0;
}

int use(int fuck)
{
	if (fuck)
		recall += 1;

	return recall;
}