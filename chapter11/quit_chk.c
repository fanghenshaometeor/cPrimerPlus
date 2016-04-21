/* quit_chk.c -- beginning of some program */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 81
#define LIM 100
#define STOP "quit"

int main (void)
{
	char input[LIM][SIZE];
	int ct = 0;

	printf ("Enter up to %d lines(type quit to quit): \n", LIM);
	while (ct < LIM && gets_s (input[ct]) != NULL && strcmp (input[ct], STOP) != 0)
	{
		ct++;
	}
	printf ("%d strings entered.\n", ct);

	system ("pause");
	return 0;
}