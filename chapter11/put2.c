/* put2.c -- print a string, and computer the number of its char */
#include <stdio.h>
int put2 (const char *string)
{
	int count = 0;
	while (*string)
	{
		putchar (*string++);
		count++;
	}
	putchar('\n');	/* excluding changing line char */

	return (count);
}