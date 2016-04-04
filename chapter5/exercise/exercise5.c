/* exercise5.c */
#include <stdio.h>

int main (void)
{
	int count, limit, sum;

	printf("Please input an integer: ");
	scanf("%d", &limit);

	count = sum = 0;
	while(count ++ < limit)
		sum = sum + count;
	printf("The sum of the first %d integers is\n", limit);
	printf("sum = %d\n", sum);
	return 0;
}

