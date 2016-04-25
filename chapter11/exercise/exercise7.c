/* exercise7.c */
#include <stdio.h>
#include <stdlib.h>
#define MAX 80

char *string_in(char *s1, char *s2);

int main(void)
{
	char str1[MAX], str2[MAX];
	char *result;

	puts("Enter a set of string.");
	gets_s(str1);
	while (*str1 != 'q')
	{
		puts("Enter a second set of string.");
		gets_s(str2);

		result = string_in(str1, str2);

		if (result != NULL)
		{
			puts("The first string includes the second string.");
			puts(result);
		}
		else
			puts("The first string does not includes the second string");

		puts("A new pair of strings.");
		puts("Enter a set of string (q to quit):");
		gets_s(str1);

	}

	system("pause");
	return 0;
}

char *string_in(char *s1, char *s2)
{
	int index = 0, start = 0, end = 0;

	while (*(s1 + index) != '\0')
	{
		int s2index = 0;
		while (*(s1 + index + s2index) == *(s2 + s2index) && *(s2 + s2index) != '\0')
		{
			s2index++;
		}
		if (*(s2 + s2index) == '\0')
		{
			end = s2index;
			break;
		}
		index++;
		start = index;
		end = index;
	}

	if (*(s2 + end) != '\0')
		return NULL;
	else
		return s1 + start;
}