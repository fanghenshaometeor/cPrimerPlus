/* exercise2.c */
#include <stdio.h>
void chline (char ch, int i, int j);
int main (void)
{
	int positionx, positiony;
	char test, temp;

	printf("Please input the x and y lables of position (q to quit):\n");
	while( scanf("%d %d", &positionx, &positiony) == 2)
	{
		temp = getchar();
		printf("Please input the character you wanna to display:\n");
		scanf("%c", &test);
		while (getchar() != '\n')
			continue;
		chline (test, positionx, positiony);
		printf("Please input the x and y lables of position (q to quit):\n");
	}
	printf("Done!\n");
	return 0;
}

void chline (char ch, int i, int j)
{
	int index, index1 = 1;
	int temp;
	if (i > j)	{temp = i; i = j; j = temp;}
	if (i < 0 || j < 0)
	{
		printf("You should input two positive integers.\n");
		return;
	}
	for (; index1 <= i; index1 += 1)
		putchar(' ');
	for (index = i; index <= j; index += 1)
		putchar(ch);
	putchar('\n');
}

		
