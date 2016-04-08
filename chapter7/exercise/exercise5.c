/* exercise5.c */
#include <stdio.h>
int main (void)
{
	char intinput;
	int replace = 0;

	printf("Please input something:\n");
	scanf("%c", &intinput);
	while (intinput != '#')
	{
		switch (intinput) {
			case '.': intinput = '!'; replace++; break;
			case '!': intinput = "!!"; replace++; break;
			default: break;
		}
		scanf("%c", &intinput);
	}
	printf("We have %d times of replacement.\n", replace);
	return 0;
}

