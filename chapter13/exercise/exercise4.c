/* exercise4.c */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int index = 0;
	FILE *fp;
	char ch;

	for (; index < argc -1; index += 1)
	{
		if((fp = fopen(argv[index + 1], "rb")) == NULL)
		{
			fprintf(stderr, "Error in opening file %s.\n", argv[index]);
			exit(1);
		}

		printf("\n%s:\n", argv[index + 1]);
		while ((ch = getc(fp)) != EOF)
			putc(ch, stdout);

		fclose(fp);
	}

	system("pause");
	return 0;
}