/* films2.c -- use linked list */
#include <stdio.h>
#include <stdlib.h>					/* provide malloc() prototype */
#include <string.h>					/* provide strcpy() prototype */
#define TSIZE 45					/* size of array storing film name */

struct film {
	char title[TSIZE];
	int rating;
	struct film * next;				/* point to next struct of linked list */
};

int main(void)
{
	struct film * head = NULL;
	struct film * prev, *current;
	char input[TSIZE];

	/* collect and store information */
	puts("Enter first movie title");
	while (gets_s(input, TSIZE) != NULL && input[0] != '\0')
	{
		current = (struct film *)malloc(sizeof(struct film));

		if (head == NULL)			/* the first struct */
			head = current;
		else 						/* rest struct 		*/
			prev->next = current;

		current->next = NULL;
		strcpy_s(current->title, TSIZE, input);

		puts("Enter your rating <0-10>: ");
		scanf_s("%d", &current->rating);

		while (getchar() != '\n')
			continue;

		puts("Enter next movie title (empty to stop): ");
		prev = current;
	}

	/* show the film list */
	if (head == NULL)
		printf("No data entered.\n");
	else
		printf("Here is the movie list:\n");
	current = head;
	while (current != NULL)
	{
		printf("Movie: %s Rating: %d\n", current->title, current->rating);
		current = current->next;
	}

	/* task finished, release all the storage mallocated */
	current = head;
	while (current != NULL)
	{
		prev = current->next;
		free(current);
		current = prev;
	}

	printf("Bye!\n");

	system("pause");
	return 0;
}