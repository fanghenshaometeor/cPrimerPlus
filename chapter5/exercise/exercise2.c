/* exercise2.c */
#include <stdio.h>

int main (void)
{
	int i_input;
	int iter;

	printf("Please input an integer: ");
	scanf("%d", &i_input);

	iter = i_input;
	while(++ iter <= i_input + 10)
	{
		printf("%d\n", iter);
	}

	return 0;
}

