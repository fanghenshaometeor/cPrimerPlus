/* name3.c -- use fgets() to read a name */
#include <stdio.h>
#include <stdlib.h>
#define MAX 81
int main (void)
{
	char name[MAX];
	char *ptr;

	printf ("Hi, what's your name?\n");
	ptr = fgets (name, MAX, stdin);
	printf ("%s? Ah! %s!\n", name, ptr);

	system ("pause");
	return 0;
}