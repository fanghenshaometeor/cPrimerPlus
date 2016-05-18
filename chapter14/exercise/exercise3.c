/* exercise3.c */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100							/* max books */

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

void sort_title(struct book lib[], int n);
void sort_value(struct book lib[], int n);

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
		gets_s(library[count].author, MAXAUTL);
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

	printf("Sorted as title\n");
	sort_title(library, count);
	printf("Sorted as value\n");
	sort_value(library, count);

	system("pause");
	return 0;
}

void sort_title(const struct book lib[], int n)
{
	struct book temp;
	struct book copy[MAXBKS];

	int i = 0, j = 0;

	for (i = 0; i < n; i++)
		copy[i] = lib[i];

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (toupper(*(copy[i].title)) > toupper(*(copy[j].title)))
			{
				temp = copy[i];
				copy[i] = copy[j];
				copy[j] = temp;
			}
		}
	}

	for (i = 0; i < n; i++)
		printf("%s by %s: $%.2f\n", copy[i].title, copy[i].author, copy[i].value);
}

void sort_value(struct book lib[], int n)
{
	struct book temp;
	struct book copy[MAXBKS];

	int i = 0, j = 0;

	for (i = 0; i < n; i++)
		copy[i] = lib[i];

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (copy[i].value > copy[j].value)
			{
				temp = copy[i];
				copy[i] = copy[j];
				copy[j] = temp;
			}
		}
	}

	for (i = 0; i < n; i++)
		printf("%s by %s: $%.2f\n", copy[i].title, copy[i].author, copy[i].value);
}