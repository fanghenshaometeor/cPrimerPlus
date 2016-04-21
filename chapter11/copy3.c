/* copy3.c -- strncopy() sample program */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>					/* declare strncpy() function */
#define SIZE 40
#define TARGSIZE 7
#define LIM 5

int main (void)
{
	char qwords[LIM][TARGSIZE];
	char temp[SIZE];
	int i = 0;

	printf ("Enter %d words beginning with q: \n", LIM);
	while (i < LIM && gets_s (temp))
	{
		if (temp[0] != 'q')
			printf ("%s doesn't begin with q!\n", temp);
		else
		{
			strncpy_s (qwords[i], temp, TARGSIZE - 1);
			qwords[i][TARGSIZE - 1] = '\0';
			i++;
		}
	}

	puts ("Here are the words accepted: ");
	for (i = 0; i < LIM; i++)
		puts (qwords[i]);

	system ("pause");
	return 0;
}