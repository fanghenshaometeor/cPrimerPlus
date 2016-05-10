/* exercise1.c */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define SIZE 40

int main(void)
{
	char filename[SIZE], ch;
	FILE *fp;
	int count = 0;

	puts("Please enter the file name:");
	gets_s(filename);

	if ((fp = fopen(filename, "rb")) == NULL)
	{
		fprintf(stderr, "Can't open file %s.\n", filename);
		exit(1);
	}

	while ((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout);
		count++;
	}

	fclose(fp);
	printf("\nFile %s has %ld characters.\n", filename, count);

	system("pause");
	return 0;
}