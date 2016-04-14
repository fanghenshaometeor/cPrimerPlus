/* exercise6.c */
#include <stdio.h>
#include <ctype.h>
int letter_position (char let);
int main (void)
{
	char inputchar;
	int position;

	printf("Please enter a set of string.\n");
	while ((inputchar = getchar()) != EOF)
	{
		position = letter_position (inputchar);
	}
	printf("Done.\n");
	return 0;
}

int letter_position (char let)
{
	int position;

	if (isalpha(let))
	{
		printf("The char %c is a letter", let);
		let = toupper(let);
		position = (int)let - 64;
		printf(" and its position in the alphabet is %d.\n", position);
	}
	else if ( let == '\n')
		printf("The char %s is not a letter.\n", "\\n");
	else
	{
		printf("The char %c is not a letter.\n", let);
		position = -1;
	}

	return position;
}
