/* exercise5.c -- This program aims to accept an input of your age
	and then display how many seconds that age contains */
#include <stdio.h>
int main (void)
{
	float year_seconds = 3.156e7;
	int i_age;

	printf("Please input your age: ");
	scanf("%d", &i_age);
	printf("You have already been alive for %e seconds.\n", i_age * year_seconds);

	return 0;
}

