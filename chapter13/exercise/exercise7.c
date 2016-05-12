/* exercise7.c */
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define SIZE 40

int main(void)
{
	FILE *first, *second;
	char first_name[SIZE], second_name[SIZE];

	puts("Please enter two file names.");
	puts("The first file name is ");
	gets_s(first_name, SIZE);
	puts("The second file name is ");
	gets_s(second_name, SIZE);

	if ((first = fopen(first_name, "rb")) == NULL)
	{
		fprintf(stderr, "Error in opening file %s.\n", first_name);
		exit(1);
	}
	if ((second = fopen(second_name, "rb")) == NULL)
	{
		fprintf(stderr, "Error in opening file %s.\n", second_name);
		exit(1);
	}

	/* part a */
	char ch_first, ch_second;
	int index = 1, length1 = 0, length2 = 0, maxlength;
	while ((ch_first = getc(first)) != EOF)
	if (ch_first == '\n')
		length1++;
	while ((ch_second = getc(second)) != EOF)
	if (ch_second == '\n')
		length2++;
	// maxlength = (length1 > length2) ? length1 : length2;
	maxlength = length1 + length2;
	fseek(first, 0L, SEEK_SET);
	fseek(second, 0L, SEEK_SET);
	// printf("%d %d\n", length1, length2);
	// system("pause");
	for (; index <= maxlength;)
	{
		if (index % 2 == 1)
		{
			if ((ch_second = getc(second)) == EOF)
				index++;
			ch_first = getc(first);
			
			while (ch_first != '\n' && ch_first != EOF)
			{
				putc(ch_first, stdout);
				ch_first = getc(first);
			}
			if (ch_first == '\n')
				printf("\n");
			if (ch_first != EOF)
				index++;
			if (ch_second == EOF)
				index--;
		}
		else
		{
			if (ch_first == EOF)
				index++;
			// ch_second = getc(second);
			while (ch_second != '\n' && ch_second != EOF)
			{
				putc(ch_second, stdout);
				ch_second = getc(second);
			}
			if (ch_second == '\n')
				printf("\n");
			if (ch_second != EOF)
				index++;
			if (ch_first == EOF)
				index--;
		}
	}

	/* part b */
	fseek(first, 0L, SEEK_SET);
	fseek(second, 0L, SEEK_SET);

	system("pause");
	return 0;


}