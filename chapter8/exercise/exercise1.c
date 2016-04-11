/* exercise.c */
#include <stdio.h>
int main (void) {
	int number;

	while (getchar() != EOF)
	{	number += 1;printf("check\n");
	}

	printf("You have input %d characters totally.\n", number);
	return 0;
}

