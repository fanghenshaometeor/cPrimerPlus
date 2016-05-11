/* exercise3.c */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define FILELEN 40

int main(void)
{
	FILE *src, *cpy;
	char src_name[FILELEN], cpy_name[FILELEN], ch;

	puts("Enter the file name as the source file: ");
	gets_s(src_name);
	puts("Enter the file name as the file to copy: ");
	gets_s(cpy_name);

	if ((src = fopen(src_name, "rb")) == NULL)
	{
		fprintf(stderr, "Error in opening file %s.\n", src_name);
		exit(1);
	}

	if ((cpy = fopen(cpy_name, "wb")) == NULL)
	{
		fprintf(stderr, "Error in opening file %s.\n", cpy_name);
		exit(1);
	}

	while ((ch = getc(src)) != EOF)
	{
		ch = toupper(ch);
		putc(ch, cpy);
	}

	if (fclose(src) != 0)
	{
		fprintf(stderr, "Error closing file %s.\n", argv[1]);
		exit(1);
	}

	if (fclose(cpy) != 0)
	{
		fprintf(stderr, "Error closing file %s.\n", argv[2]);
		exit(1);
	}

	// fclose(src); fclose(cpy);

	system("pause");
	return 0;
}