/* compare.c -- This program can satisfy the request */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>		/* declare strcmp() function */

#define ANSWER "Grant"
#define MAX 40

int main (void)
{
	char try1[MAX];

	puts ("Who is buried in Grant's tomb?");
	gets_s (try1);
	while (strcmp (try1, ANSWER) != 0)
	{
		puts ("No, that's wrong. Try again.");
		gets_s (try1);
	}
	puts ("That's right!");

	system ("pause");
	return 0;
}