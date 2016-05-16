/* booksave.c -- save the content of a struct to a file */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10						/* the maxmum of books */

struct book {							/* build book template */
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void)
{
	struct book library[MAXBKS];		/* struct array */
	int count = 0;
	int index, filecount;
	FILE *pbooks;
	int size = sizeof(struct book);

	if ((pbooks = fopen("book.dat", "a+b")) == NULL)
	{
		fputs("Can't open book.dat file\n", stderr);
		exit(1);
	}

	rewind(pbooks);						/* locate to the beginning of the file */
	while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
	{
		if (count == 0)
			puts("Current contents of book.dat: ");
		printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
		count++;
	}

	filecount = count;
	if (count == MAXBKS)
	{
		fputs("The book.dat file is full", stderr);
		exit(2);
	}

	puts("Please add new book titles.");
	puts("Press [enter] at the start of a line to stop.");
	while (count < MAXBKS && gets_s(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
	{
		puts("Now enter the author.");
		gets_s(library[count].author, MAXAUTL);
		puts("Now enter the value.");
		scanf_s("%f", &library[count++].value);
		while (getchar() != '\n')
			continue;						/* clear the input line */
		if (count < MAXBKS)
			puts("Enter the next title.");
	}

	if (count > 0)
	{
		puts("Here is the list of your books: ");
		for (index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
		fwrite(&library[filecount], size, count - filecount, pbooks);
	}
	else
		puts("No books? Too bad.\n");

	puts("Bye.\n");
	fclose(pbooks);

	system("pause");
	return 0;
}