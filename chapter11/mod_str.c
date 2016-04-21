/* mod_str.c -- modify a string */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 80

void ToUpper (char *);
int PunctCount (const char*);

int main (void)
{
	char line[LIMIT];

	puts ("Please enter a line:");
	gets_s (line);
	ToUpper (line);
	puts (line);
	printf("That line has %d punctuation characters.\n", PunctCount(line));

	system ("pause");
	return 0;
}

void ToUpper (char *str)
{
	while (*str)
	{
		*str = toupper (*str);
		str++;
	}
}

int PunctCount (const char *str)
{
	int ct = 0;

	while (*str)
	{
		if (ispunct(*str))
			ct++;
		str++;
	}
	return ct;
}