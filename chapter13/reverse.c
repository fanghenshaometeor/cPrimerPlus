/* reverse.c -- display a file in the reverse order */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032'			/* the tag of file end in DOS txt */
#define SLEN 50

int main(void)
{
	char file[SLEN];
	char ch;
	FILE *fp;
	long count, last;

	puts("Enter the name of the file to be processed: ");
	gets_s(file);
	if ((fp = fopen(file, "rb")) == NULL)
	{							/* read and binary modes */
		printf("reverse can't open %s\n", file);
		exit(1);
	}

	fseek(fp, 0L, SEEK_END);	/* position to the end of the file */
	last = ftell(fp);

	for (count = 1L; count <= last; count++)
	{
		fseek(fp, -count, SEEK_END);	/* back */
		ch = getc(fp);
		/* target to DOS, also work in UNIX */
		if (ch != CNTL_Z && ch != '\r')
			putchar(ch);
		/* target to Macintosh */
		/*  if (ch == '\r')
		putchar('\n');
		else
		putchar(ch);	*/
	}

	putchar('\n');
	fclose(fp);

	system("pause");
	return 0;
}

// fseek(fp, 0L, SEEK_SET);		// to locate the beginning of the file
// fseek(fp, 10L, SEEK_SET);	// to locate the 10th byte of the file
// fseek(fp, 2L, SEEK_CUR);		// move 2 bytes from the current position of the file
// fseek(fp, 0L, SEEK_END);		// to locate the end of the file
// fseek(fp, -10L, SEEK_END);	// back 10 bytes from the end of the file