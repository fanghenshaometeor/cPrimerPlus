// manydice.c -- analogic program of rolling dice many times
// compile together with diceroll.c
#include <stdio.h>
#include <stdlib.h>									// provide prototype for function srand()
#include <time.h>									// provide prototype for function time()
#include "diceroll.h"								// provide prototype for roll_n_dice() and roll_count;

int main (void)
{
	int dice, roll;
	int sides;

	srand((unsigned int) time (0));					// random seed
	printf ("Enter the number of sides per dice, 0 to stop.\n");
	while (scanf_s ("%d", &sides) == 1 && sides > 0)
	{
		printf ("How many dice?\n");
		scanf_s ("%d", &dice);
		roll = roll_n_dice (dice, sides);
		printf ("You have rolled a %d using %d %d-sided dice.\n", roll, dice, sides);
		printf ("How many sides? Enter 0 to stop.\n");
	}

	printf ("The rollem() function was called %d times.\n", roll_count);			/* use external variable */
	printf ("GOOD FORTUNE TO YOU.\n");

	system ("pause");
	return 0;
}