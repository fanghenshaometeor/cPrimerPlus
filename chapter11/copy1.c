/* copy1.c -- strcpy() sample program */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 40
#define LIM 5

int main (void)
{
	char qwords[LIM][SIZE];
	char temp[SIZE];
	int i = 0;

	printf ("Enter %d words beginning with q:\n", LIM);
	while (i < LIM && gets_s (temp))
	{
		if (temp[0] != 'q')
			printf ("%s doesn't begin with q!\n", temp);
		else
		{
			strcpy_s (qwords[i], temp);
			i++;
		}
	}
	puts ("Here are the words accepted:");
	for (i = 0; i < LIM; i++)
		puts (qwords[i]);

	system ("pause");
	return 0;
}