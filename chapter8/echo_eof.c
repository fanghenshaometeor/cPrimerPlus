/* echo_eof.c -- repeat input until the end of the file */
#include <stdio.h>
int main (void)
{
	int ch;

	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}

