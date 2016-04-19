/* scan_str.c -- use scanf_s() */
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	char name1[11], name2[11];
	int count;

	printf ("Please enter 2 names.\n");
	count = scanf_s ("%5s %10s", name1, 11, name2, 11);
	printf ("I read the %d names %s and %s.\n", count, name1, name2);

	system ("pause");
	return 0;
}