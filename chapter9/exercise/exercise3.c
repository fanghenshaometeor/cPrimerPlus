/* exercise3.c */
#include <stdio.h>
void display (char ch, int i, int j);
int main (void)
{
	char output, enter;
	int rowcharnumber, rownumber;
	printf("Please input two integers (q to quit):\n");
	while ((scanf("%d %d", &rowcharnumber, &rownumber)) == 2)
	{
		enter = getchar();
		printf("Please input one character you like\n");
		scanf("%c", &output);
		display (output, rowcharnumber, rownumber);
		while (getchar() != '\n')
			continue;
		printf("Please input two integers (q to quit):\n");
	}
	printf("Done!");
	return 0;
}

void display (char ch, int i, int j)
{
	int rowstart = 0, rownumber = 0;

	printf("The result is as follows:\n");
	for (; rowstart < j; rowstart += 1)
	{
		for (rownumber = 0; rownumber < i; rownumber += 1)
			putchar(ch);
		putchar('\n');
	}
	return;
}
