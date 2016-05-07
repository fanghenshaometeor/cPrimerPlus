/* parrot.c -- use fgets() and fputs() functions */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define MAXLINE 20

int main (void)
{
	char line[MAXLINE];

	while (fgets(line, MAXLINE, stdin) != NULL && line[0] != '\n')
		fputs(line, stdout);

	system("pause");
	return 0;
}