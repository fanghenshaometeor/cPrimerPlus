/* quotes.c -- see string as a pointer */
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	printf ("%s, %p, %c\n", "We", "are", *"space farers");

	system ("pause");
	return 0;
}