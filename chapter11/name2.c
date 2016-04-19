/* name2.c -- read a name */
#include <stdio.h>
#include <stdlib.h>
#define MAX 81
int main (void)
{
	char name[MAX];
	char *ptr;

	printf("Hi, what's your name?\n");
	ptr = gets_s (name);
	printf("%s? Ah! %s!\n", name, ptr);

	system("pause");
	return 0;
}