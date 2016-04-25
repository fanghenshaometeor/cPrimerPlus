/* exercise6.c */
#include <stdio.h>
#include <stdlib.h>
#define MAX 80

char *strncpy(char *s1, char *s2, size_t n);

int main(void)
{
	char s1[MAX];
	char s2[MAX];
	int length;

	printf("Enter a set of string.\n");
	gets_s(s2);

	while (*s2 != 'q')
	{
		printf("Enter how many chars you would like to copy (an integer):\n");
		while (scanf_s("%d", &length) != 1)
			continue;
		strncpy(s1, s2, length);
		printf("The result is \n");
		puts(s1);

		printf("Enter another set of string (q to quit)\n");
		while (getchar() != '\n')
			continue;
		gets_s(s2);
	}

	system("pause");
	return 0;
}

char *strncpy(char *s1, char *s2, size_t n)
{
	unsigned int index = 0;
	unsigned int count;

	while (*(s2 + index) != '\0')
		index++;
	count = index;

	if (count <= n)
	{
		for (index = 0; index < count; index++)
		{
			*(s1 + index) = *(s2 + index);
		}
		*(s1 + count) = '\0';
	}
	else
	{
		for (index = 0; index < n; index++)
		{
			*(s1 + index) = *(s2 + index);
		}
		*(s1 + index) = '\0';
	}

	return s1;
}