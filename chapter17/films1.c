/* films1.c -- use struct array */
#include <stdio.h>
#define TSIZE 45				/* the size of array to store film name */
#define FMAX 5					/* maximum number of films 				*/

struct film {
	char title [TSIZE];
	int rating;
};

int main (void)
{
	struct film movies[FMAX];
	int i = 0;
	int j;

	puts("Enter first movie title: ");
	while (i < FMAX && gets_s(movies[i].title, TSIZE) != NULL && movies[i].title[0] != '\0')
	{
		puts("Enter your rating <0-10>: ");
		scanf_s("%d", &movies[i++].rating);
		while (getchar() != '\n')
			continue;
		puts("Enter next movie title (empty line to stop): ");
	}

	if (i == 0)
		printf("No data entered.\n");
	else
		printf("Here is the movie list: \n");

	for (j = 0; j < i; j++)
		printf("Movie: %s Rating: %d\n", movies[j].title, movies[j].rating);
	printf("Bye!\n");

	system("pause");
	return 0;
}