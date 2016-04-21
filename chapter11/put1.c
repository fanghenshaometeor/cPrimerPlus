/* put1.c -- print a string without adding changing line char */
#include <stdio.h>
void put1 (const char * string)
{
	while (*string != '\0')
		putchar (*string++);
}