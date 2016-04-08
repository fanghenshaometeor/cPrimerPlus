/* exercise6.c */
#include <stdio.h>
int main (void)
{
	char inputch, prech;
	int time = 0;

	printf("Please enter letters:\n");
	scanf("%c", &prech);
	scanf("%c", &inputch);
	while (inputch != '#')
	{
		if (prech == 'e' && inputch == 'i')
			time++;
		prech = inputch;
		scanf("%c", &inputch);
	}
	printf("'ei' has totally appeared %d times in the letters you entered.\n", time);
	return 0;
}

