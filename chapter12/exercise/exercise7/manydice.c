// manydice.c -- analogic program of rolling dice many times
// compile together with diceroll.c
#include <stdio.h>
#include <stdlib.h>									// provide prototype for function srand()
#include <time.h>									// provide prototype for function time()
#include "diceroll.h"								// provide prototype for roll_n_dice() and roll_count;

int main(void)
{
	int dice, roll;
	int sides, sets;
	int index;

	srand((unsigned int)time(0));					// random seed
	printf("Enter the number of sets; enter q to stop.\n");
	scanf_s("%d", &sets);
	printf("How many sides and how many dice?\n");
	while (scanf_s("%d", &sides) == 1 && sides > 0)
	{

		scanf_s("%d", &dice);
		printf("Here are %d sets of  %d %d-sided dice.\n", sets, dice, sides);
		for (index = 1; index <= sets; index++)
		{
			roll = roll_n_dice(dice, sides);
			printf("%3d", roll);
			if (index % 15 == 0)
				printf("\n");
		}
		printf("\n");
		printf("How many sets? Enter q to stop.\n");
		scanf_s("%d", &sets);
		printf("How many sides and how many dice?\n");
	}

	printf("The rollem() function was called %d times.\n", roll_count);			/* use external variable */
	printf("GOOD FORTUNE TO YOU.\n");

	system("pause");
	return 0;
}