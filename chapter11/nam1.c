/* name1.c -- read a name */
#include <stdio.h>
#include <stdlib.h>
#define MAX 81
int main (void)
{
	char name[MAX];			/* distribute space */
	printf ("Hi, what's your name?\n");
	gets_s (name);			/* put the string into name array */
	printf ("Nice name, %s.\n", name);
	system ("pause");
	return 0;
}