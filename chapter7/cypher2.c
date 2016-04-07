// cypher2.c -- change the input, only reserve the chars not letters
#include <stdio.h>
#include <ctype.h>				// provide prototype for isalpha()
int main (void)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if(isalpha(ch))			// if a letter
			putchar(ch + 1);	// then change it
		else				// else
			putchar(ch);		// print it as origin
	}
	putchar(ch);				// print row exchange char
	return 0;
}
