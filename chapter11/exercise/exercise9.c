/* exercise9.c */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 80

void delete_space(char *str);

int main(void)
{
	char spacestring[SIZE];

	printf("Enter a set of string.\n");
	gets_s(spacestring);
	while (*spacestring != 'q')
	{
		printf("After deleting space characters, the string becomes:\n");
		delete_space(spacestring);

		printf("Enter another set of string (q to quit):\n");
		gets_s(spacestring);
	}
	system("pause");
	return 0;
}

void delete_space(char *str)
{
	int index = 0, space = 0;

	while (*(str + index) != '\0')
	{
		space = index;
		while (*(str + space) == ' ')
		{
			int fuck = 0;
			while (*(str + space + fuck) != '\0')
			{
				*(str + space + fuck) = *(str + space + fuck + 1);
				fuck += 1;
			}
		}
		index += 1;
	}

	puts(str);
}