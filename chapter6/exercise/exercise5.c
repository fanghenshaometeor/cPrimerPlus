/* exercise5.c */
#include <stdio.h>
int main (void)
{
	int uplimit, downlimit, row, column, totalRow;

	printf("Please enter the uplimit and downlimit of the table:\n");
	scanf("%d%d", &uplimit, &downlimit);

	if(uplimit < downlimit)
	{
		int temp; temp = uplimit; uplimit = downlimit; downlimit = temp;
	}

	printf("num       num square     num cubic\n");
	totalRow = uplimit - downlimit + 1;
	for (row = 1; row <= totalRow; row++, downlimit++)
		printf("%d    %10d    %9d\n", downlimit, downlimit * downlimit, downlimit * downlimit * downlimit);
	return 0;
}
