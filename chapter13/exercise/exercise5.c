/* exercise5.c */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 1024
#define SLEN 81

void append(FILE *source, FILE *dest);

int main(int argc, char *argv[])
{
	FILE *fa, *fs;								// fa points to the target file to append, fs to the source file
	// int files = 0;								// number of files to append
	// char file_app[SLEN] = argv[2];						// name of file to be appended
	// char file_src[SLEN] = argv[1];						// name of the source file

	// puts("Enter name of destination file: ");
	// gets_s(file_app);
	if (argc != 3)
	{
		printf("Usage: this program is used to append sth to a file.\n");
		exit(1);
	}

	if ((fs = fopen(argv[1], "rb")) == NULL)
	{
		fprintf(stderr, "Open file %s error.\n", argv[1]);
		exit(1);
	}

	if ((fa = fopen(argv[2], "ab")) == NULL)
	{
		fprintf(stderr, "Open file %s error.\n", argv[2]);
		exit(1);
	}

	if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
	{
		fputs("Can't create output buffer\n", stderr);
		exit(1);
	}

	// puts("Enter name of first source file (empty line to quit): ");
	// while (gets_s(file_src) && file_src[0] != '\0')
	// {
	if (strcmp(argv[1], argv[2]) == 0)
		fputs("Can't append file to itself\n", stderr);
	// else if ((fs = fopen(file_src, "r")) == NULL)
	// fprintf(stderr, "Can't open %s\n", file_src);
	else
	{
		if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
		{
			fputs("Can't create input buffer\n", stderr);
			// continue;
			exit(1);
		}
		append(fs, fa);
		if (ferror(fs) != 0)
			fprintf(stderr, "Error in reading file %s.\n", argv[1]);
		if (ferror(fa) != 0)
			fprintf(stderr, "Error in writing file %s.\n", argv[2]);
		fclose(fs);
		// files++;
		printf("File %s appended.\n", argv[1]);
		// puts("Next file (empty line to quit): ");
	}
	// }
	printf("Done.\n");
	fclose(fa);

	system("pause");
	return 0;
}

void append(FILE *source, FILE *dest)
{
	size_t bytes;
	static char temp[BUFSIZE];

	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
		fwrite(temp, sizeof(char), bytes, dest);
}