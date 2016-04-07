/* cypher1.c -- change the input and only reserve the spaces in it */
#include <stdio.h>
#define SPACE ' '				/* SPACE equals "yinhao-kongge-yinhao" */
int main (void)
{
	char ch;

	ch = getchar();				/* read a char */
	while (ch != '\n')			/* when a row does not end */
	{
		if (ch == SPACE)		/* space unchanged */
			putchar(ch);		/* do not change this char */
		else
			putchar(ch + 1);	/* change other chars */
		ch = getchar();			/* get the next char */
	}
	putchar(ch);				/* print the row exchange char */
	return 0;
}

