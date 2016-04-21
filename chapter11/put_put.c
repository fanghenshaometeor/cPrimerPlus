// put_put.c -- user defined output function
#include <stdio.h>
#include <stdlib.h>
void put1 (const char *);
int put2 (const char *);

int main (void)
{
	put1 ("If I'd as much money");
	put1 (" as I could spend, \n");
	printf ("I count %d characters.\n", put2("I never would cry old chairs to mend. "));

	system ("pause");
	return 0;
}

void put1 (const char *string)
{
	while (*string)				/* equal to *string != '\0'		*/
		putchar (*string++);
}
int put2 (const char *string)
{
	int count = 0;
	while (*string)
	{
		putchar (*string++);
		count++;
	}
	putchar ('\n');

	return count;
}