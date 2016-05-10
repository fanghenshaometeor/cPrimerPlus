/* exercise2.c */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *src, *cpy;
	char ch;

	if (argc != 3)
	{
		printf("Usage: this program is used to copy file.\n");
		exit(1);
	}

	if ((src = fopen(argv[1], "rb")) == NULL)
	{
		fprintf(stderr, "Open file %s error.\n", argv[1]);
		exit(1);
	}

	if ((cpy = fopen(argv[2], "wb")) == NULL)
	{
		fprintf(stderr, "Open file %s error.\n", argv[2]);
		exit(1);
	}

	while ((ch = getc(src)) != EOF)
		putc(ch, cpy);

	/* if (fclose(src) != 0)
	{
		fprintf(stderr, "Error closing file %s.\n", argv[1]);
		exit(1);
	}

	if (fclose(src) != 0)
	{
		fprintf(stderr, "Error closing file %s.\n", argv[2]);
		exit(1);
	} */

	fclose(src); fclose(cpy);

	system("pause");
	return 0;
}