/* exercise6.c */
#include <stdio.h>
#include <ctype.h>
char get_first (void);
int main (void)
{
	char output;

	printf("Please enter a set of string:\n");
	output = get_first();
	printf("The first character that is not space is %c.\n", output);
	return 0;
}

char get_first (void)
{
	int inputchar;

	while ((inputchar = getchar()) == ' ')
		continue;

	return inputchar;
}
