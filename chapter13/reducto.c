// reducto.c -- compress your file to 1/3
#include <stdio.h>
#include <stdlib.h>						// to recall exit()
#include <string.h>						// provide prototype for strcpy() and strcat()
#define LEN 40

int main (int argc, char *argv[])
{
	FILE *in, *out;						// declare two file pointers
	int ch;
	char name[LEN];						// to store input file name
	int count = 0;

// check command line arguments
	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(1);
	}

// achieve input
	if ((in = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
		exit(2);
	}

// achieve output
	strcpy(name, argv[1]);				// copy the file name to the array
	strcat(name, ".red");				// add .red to the file name
	if ((out = fopen(name, "w")) == NULL)
	{									// open the file to write in
		fprintf(stderr, "Can't create output file.\n");
		exit(3);
	}

// copy data
	while ((ch = getc(in)) != EOF)
		if (count++ % 3 == 0)
			putc(ch, out);				// print one of every three characters

// the end
	if (fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Error in closing files\n");
	return 0;
}