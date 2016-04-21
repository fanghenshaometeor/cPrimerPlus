/* nono.c -- do not minic this program */
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	char side_a[] = 'SIDE_A';
	char dont[] = {'W', 'O', 'W', '!' };
	char side_b[] = 'SIDE_B';

	puts (dont);	/* dont is not a string */

	system ("pause");
	return 0;
}