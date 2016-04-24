/* exercise5.c */
#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int is_within(char ch, char *str);

int main(void)
{
	char name[MAX];
	char ch;

	printf("Enter a set of string.\n");

	gets_s(name);

	while (*name != 'q')
	{
		printf("Enter a character you like:\n");
		scanf_s("%c", &ch, 1);

		while (getchar() != '\n')
			continue;

		int judge = is_within(ch, name);

		if (judge)
			printf("The char %c is in the string.\n", ch);
		else
			printf("The char %c is not in the string.\n", ch);

		printf("Enter a set of string (quit begin with letter q):\n");
		gets_s(name);
	}

	system("pause");
	return 0;
}

int is_within(char ch, char *str)
{
	while (ch != *str && *str != '\0')
		str++;

	if (*str == '\0')
		return 0;
	else
		return 1;
}