/* exercise6.c */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main (void)
{
	FILE *before, *after;
	char name[LEN];
	int ch;
	int count = 0;

	puts("This program aims to compress you file.");
	puts("Please enter the file name: ");
	gets_s(name);

	if ((before = fopen(name, "rb")) == NULL)
	{
		fprintf(stderr, "Error in opening filr %s.\n", name);
		exit(1);
	}

	strcat(name, ".red");
	if ((after = fopen(name, "wb")) == NULL)
	{
		fprintf(stderr, "Error in creating file %s.\n", name);
		exit(1);
	}

	while ((ch = getc(before)) != EOF)
		if (count++ % 3 == 0)
			putc(ch, after);

	if (fclose(before) != 0 || fclose(after) != 0)
			fprintf(stderr, "Error in closing files.\n");

	system("pause");
	return 0;
}