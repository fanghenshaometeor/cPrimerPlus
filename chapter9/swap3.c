/* swap3.c -- use pointer to finish exchange */
#include <stdio.h>
void interchange (int *u, int *v);
int main (void)
{
	int x = 5, y = 10;

	printf("Originally x = %d and y = %d.\n", x, y);
	interchange (&x, &y);
	printf("Now x = %d and y = %d.\n", x, y);
	return 0;
}

void interchange (int *u, int *v)
{
	int temp;

	temp = *u;			/* temp get the value that u points */
	*u = *v;
	*v = temp;
}

