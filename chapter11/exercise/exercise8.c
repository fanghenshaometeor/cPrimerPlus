/* exercise8.c */
#include <stdio.h>
#include <stdlib.h>
#define MAX 80

void converse(char *str);

int main(void)
{
	char org[MAX];

	puts("Enter a set of string.");
	gets_s(org);

	while (*org != 'q')
	{
		puts("Its converse string is");
		converse(org);

		puts("Enter another set of string (q to quit):");
		gets_s(org);
	}
	puts("Done!");

	system("pause");
	return 0;
}

void converse(char *str)
{
	char covs[MAX] {0};
	int index1 = 0, index2 = 1, length = 0;

	while (*(str + length) != '\0')
	{
		length++;
	}

	while (index1 != length)
	{
		*(covs + index1) = *(str + length - index2);
		index1 += 1;
		index2 += 1;
	}

	puts(covs);
}