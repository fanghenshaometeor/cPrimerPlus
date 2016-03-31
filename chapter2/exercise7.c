/* This program aims to more usage of functions. */
#include <stdio.h>

void one_three(void);
void two(void);

int main(void)
{
	printf("starting now:\n");
	one_three();
	two();
	printf("three\ndone!\n");

	return 0;
}

void one_three(void)
{
	printf("one\n");
}

void two(void)
{
	printf("two\n");
}
