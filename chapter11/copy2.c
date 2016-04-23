/* copy2.c -- strcpy() sample program */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>			/* declare strcpy() function */
#define WORDS "beast"
#define SIZE 40

int main (void)
{
	char *orig = WORDS;
	char copy[SIZE] = "Be the best that you can be.";

	puts (orig);
	puts (copy);
	strcpy_s (copy + 7, orig);
	puts (copy + 7);
	puts (ps);

	system ("pause");
	return 0;
}			

// Todo: So strange that my VS 2013 cannot run it;
// It says that "cannot transfer from errno_t to char *"

// It seems that in VS 2013, strcpy_s can not return values
// So I make some changes
// But problem still occurs when it ends running.
// So strange