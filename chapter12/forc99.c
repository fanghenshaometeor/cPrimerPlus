// forc99.c -- new rules in C99 about code block
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int n = 10;

	printf ("Initially, n = %d\n", n);
	for (int n = 1; n < 3; n++)
		printf ("loop 1: n = %d\n", n);
	printf ("After loop 1, n = %d\n", n);
	for (int n = 1; n < 3; n++)
	{
		printf ("loop 2 index n = %d\n", n);
		int n = 30;
		printf ("loop 2: n = %d\n", n);
		n++;
	}
	printf ("After loop 2, n = %d\n", n);

	system ("pause");
	return 0;
}