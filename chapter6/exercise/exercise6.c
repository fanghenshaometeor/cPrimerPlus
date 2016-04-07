/* exercise6.c */
#include <stdio.h>
#include <string.h>
int main (void)
{
	char word[40];
	int length, index;

	printf("Please enter a word: ");
	scanf("%s", word);

	length = strlen(word);
	for (index = length; index >= 0; index--)
		printf("%c", word[index]);
	printf("\n");

	return 0;
}

