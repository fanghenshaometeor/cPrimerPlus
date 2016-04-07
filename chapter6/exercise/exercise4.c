/* exercise4.c */
#include <stdio.h>
int main (void)
{
	const int SPACENUM = 26;
	char input, letterup;
	int row, totalRow, space, rownum;

	printf("Please enter a upper letter: ");
	scanf("%c", &input);

	while(input < 'A' || input > 'Z')
	{
		printf("Invalid input.\n");
		printf("Enter again: ");
		scanf("%c", &input);
	}

	for(row = 0; row < (int)input - 64; row++ )
	{
		for(space = 0; space < SPACENUM - row; space++ )
			printf(" ");
		for(letterup = 'A', rownum = 0; rownum != row ;letterup++, rownum++ )
			printf("%c", letterup);
		for(; letterup != (int)('A') - 1; letterup-- )
			printf("%c", letterup);
		printf("\n");
	}
	
	

	return 0;
}

