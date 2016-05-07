/* addaword.c -- use fprintf(), fscanf(), and rewind() functions */
#define _CRT_SECURE_NO_DEPRECATE	// to use fopen in vs, not the fucking fopen_s(sorry)
									// and you must put this line in the very beginning
#include <stdio.h>
#include <stdlib.h>
#define MAX 40

int main(void)
{
	FILE *fp;
	char words[MAX];

	if ((fp = fopen("words", "a+")) == NULL)
	{
		fprintf(stdout, "Can't open \"words\" file.\n");
		exit(1);
	}

	puts("Enter words to add to the file; press the Enter");
	puts("key at the beginning of a line to terminate.");
	while (gets_s(words) != NULL && words[0] != '\0')
		fprintf(fp, "%s", words);

	puts("File contents:");
	rewind(fp);		/* back to the beginning of the file */
	while (fscanf(fp, "%s", words) == 1)
		puts(words);
	if (fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");

	system("pause");
	return 0;
}