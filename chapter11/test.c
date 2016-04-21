/* test.c -- function trying to shorten the string */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>			/* this head file includes the prototype of string functions */

void fit (char *, unsigned int);

int main (void)
{
	char mesg[] = "Hold on to your hats, hackers. ";

	puts (mesg);
	fit (mesg, 7);
	puts (mesg);
	puts ("Let's look at some more of the string. ");
	puts (mesg + 8);

	system ("pause");
	return 0;
}

void fit (char *string, unsigned int size)
{
	if (strlen(string) > size)
		* (string + size) = '\0';
}