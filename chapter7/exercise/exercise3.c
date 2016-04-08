/* exercise3.c */
#include <stdio.h>
int main (void)
{
	int odd = 0, even = 0, odd_count = 0, even_count = 0;
	int intinput;

	printf("Please keep entering integers until you enter 0:\n");
	scanf("%d", &intinput);

	while (intinput != 0)
	{
		if (intinput % 2 == 0)
		{	even += intinput; even_count++;	}
		else
		{	odd += intinput; odd_count++;	}
		scanf("%d", &intinput);
	}

	printf("Totally you have entered %d odd numbers and %d even ones,\n ", odd_count, even_count);
	printf("and the average of odd numbers is %.2f,\n ", (float)odd / odd_count);
	printf("while the average of even numbers is %.2f.\n", (float)even / even_count);

	return 0;
}

