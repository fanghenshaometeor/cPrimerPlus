// file_eof.c -- open a file and display its content
#include <stdio.h>
#include <stdlib.h>				// to use exit()
int main ()
{
	int ch;
	FILE *fp;
	char fname[50];				// to save file name

	printf("Enter the name of the file: ");
	scanf("%s", fname);
	fp = fopen(fname, "r");			// open the file to read

	if (fp == NULL)				// fail to try to open the file
	{
		printf("Failed to open file. Bye\n");
		exit(1);			// cease the program
	}

	// getc(fp) get a char from the file opened
	while ((ch = getc(fp)) != EOF)
		putchar(ch);
	fclose(fp);				// close the file
	return 0;
}

