/* randin.c -- random store, binary I/O */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define ARSIZE 1000

int main (void)
{
	double numbers[ARSIZE];
	double value;
	const char *file = "number.dat";
	int i;
	long pos;
	FILE *iofile;

	// create a set of double values
	for (i = 0; i < ARSIZE; i++)
		numbers[i] = 100.0 * i + 1.0 / (i + 1);

	// try to open file
	if ((iofile = fopen (file, "wb")) == NULL)
	{
		fprintf(stderr, "Could not open %s for output.\n", file);
		exit(1);
	}

	// write data in the array into the file in the form of binary
	fwrite(numbers, sizeof(double), ARSIZE, iofile);
	fclose(iofile);
	if ((iofile = fopen(file, "rb")) == NULL)
	{
		fprintf(stderr, "Could not open %s for random access.\n", file);
		exit(1);
	}

	// read the project selected from the file
	printf("Enter an index in the range 0-%d.\n", array - 1);
	scanf_s("%d", &i);
	while (i >= 0 && i < ARSIZE)
	{
		pos = (long) i * sizeof(double);				// compute bias
		fseek(iofile, pos, SEEK_SET);					// comput where to locate in the file
		fread(&value, sizeof(double), 1, iofile);
		printf("The value there is %f.\n", value);
		printf("Next index(out of range to quit): \n");
		scanf_s("%d", &i);
	}
	fclose(iofile);
	puts("Bye!");

	system("pause");
	return 0;
}