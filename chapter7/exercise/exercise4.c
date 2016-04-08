/* exercise4.c */
#include <stdio.h>
int main (void)
{
	char inputch;
	int replace = 0;
	printf("Please enter something (# to end): \n");
	scanf("%c", &inputch);

	while (inputch != '#')
	{
		if (inputch == '.')
		{	inputch = '!'; replace++;	}
		else if (inputch == '!')
		{	inputch = "!!"; replace++;	}
		scanf("%c", &inputch);
	}
	printf("We have %d times of replacement.\n", replace);
	return 0;
}

