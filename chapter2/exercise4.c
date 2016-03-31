/* This program aims to output four sentences,
    three of which are the same,by using functions defined by client. */
#include <stdio.h>

void repeat(void);
void lastOutput(void);

int main(void)
{
	printf("For he's a jolly good fellow.\n");
	repeat();
	repeat();
	lastOutput();

	return 0;
}

void repeat(void)
{
	printf("For he's a jolly good fellow.\n");
}

void lastOutput(void)
{
	printf("Which nobody can deny.!\n");
}
