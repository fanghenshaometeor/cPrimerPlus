/* exercise2.c */
#include <stdio.h>
int main (void)
{
	int row, column;
	const int totalRow = 5;

	for (row = 0; row < totalRow; row++)
	{
		for (column = 0; column < row + 1; column++ )
			printf("$");
		printf("\n");
	}

	return 0;
}

