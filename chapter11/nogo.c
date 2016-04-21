/* nogo.c -- can this program satisfy the request? */
#include <stdio.h>
#include <stdlib.h>
#define ANSWER "Grant"

int main (void)
{
	char try[40];

	puts ("who is buried in Grant's tomb?");
	gets (try);
	while (try != ANSWER)
	{
		puts ("No, that's wrong. Try again. ");
		gets (try);
	}
	puts ("That's right!");

	system ("pause");
	return 0;
}