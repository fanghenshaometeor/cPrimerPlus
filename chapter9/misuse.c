/* misuse.c */
#include <stdio.h>
int max ();	/* old function declaretion */
int main (void)
{
	printf("The maxinum of %d and %d is %d.\n", 3, 5, imax(3));

	printf("The maxinum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));

	return 0;
}

int imax (n, m)
int n, m;
{
	int max;

	if (n >m)
		max = n;
	else
		max = m;

	return max;
}

