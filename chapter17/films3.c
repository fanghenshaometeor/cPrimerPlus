/* films2.c -- linked list using ADT prototype */
/* complied together with list.c 			   */
#include <stdio.h>
#include <stdlib.h>			/* provide prototype for exit() */
#include "list.h"			/* define List, Item			*/

void showmovies(Item item);

int main(void)
{
	List movies;
	Item temp;

	/* initialize */
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "No memory available! Bye!\n");
		exit(1);
	}

	/* collect and store */
	puts("Enter first movie title: ");
	while (gets_s(temp.title, TSIZE) != NULL && temp.title[0] != '\0')
	{
		puts("Enter your rating <0-10>: ");
		scanf_s("%d", &temp.rating);
		while (getchar() != '\n')
			continue;

		if (AddItem(temp, &movies) == false)
		{
			fprintf(stderr, "Problem allocating memory\n");
			break;
		}

		if (ListIsFull(&movies))
		{
			puts("The list is now full.");
			break;
		}

		puts("Enter next movie title (empty line to stop): ");
	}

	/* display */
	if (ListIsEmpty(&movies))
		printf("No data entered.\n");
	else
	{
		printf("Here is the movie list: \n");
		Traverse(&movies, showmovies);
	}

	printf("You entered %d movies.\n", ListItemCount(&movies));

	/* clear */
	EmptyTheList(&movies);
	printf("Bye!\n");

	system("pause");
	return 0;
}

void showmovies(Item item)
{
	printf("Movie: %s Rating: %d\n", item.title, item.rating);
}