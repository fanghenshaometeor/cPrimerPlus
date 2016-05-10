/* manybook.c -- book content including many books */
#include <stdio.h>
#include <stdlib.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100							/* max books */

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void)
{
	struct book library[MAXBKS];			/* book struct array */
	int count = 0;
	int index;

	printf("Please enter the book title.\n");
	printf("Press [enter] at the start of a line to stop.\n");
	while (count < MAXBKS && gets_s(library[count].title, MAXTITL) != NULL
		&& library[count].title[0] != '\0')
	{
		printf("Now enter the author.\n");
		gets_s(library[count].author);
		printf("Now enter the value\n");
		scanf_s("%f", &library[count].value);
		count += 1;
		while (getchar() != '\n')
			continue;						/* clear input line */
		if (count < MAXBKS)
			printf("Enter the next title.\n");
	}

	if (count > 0)
	{
		printf("Here is the list of your books: \n");
		for (index = 0; index < count; index++)
			printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
	}
	else
		printf("No books? Too bad.\n");
	system("pause");
	return 0;
}