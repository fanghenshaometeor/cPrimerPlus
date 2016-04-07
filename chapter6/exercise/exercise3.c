/* exercise3.c */
#include <stdio.h>
int main (void)
{
	const int totalRow = 6;
	int row, column;
	char start = 'F';

	for (row = 0; row < totalRow; row++)
	{
		for (column = 0; column < row + 1; column++, start--)
			printf("%c", start);
		start = 'F';
		printf("\n");
	}
}

