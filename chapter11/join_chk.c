/* join_chk.c -- link two strings and check the size of the first string */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 30
#define BUGSIZE 13

int main (void)
{
	char flower [SIZE];
	char addon[] = "s smell like old shoes.";
	char bug [BUGSIZE];
	int available;

	puts ("What is your favorite flower?");
	gets_s (flower);
	if ((strlen(addon) + strlen(flower) + 1 ) <= SIZE)
		strcat_s (flower, addon);
	puts (flower);
	puts ("What is your favorite bug?");
	gets_s (bug);
	available = BUGSIZE - strlen (bug) - 1;
	strncat_s (bug, addon, available);
	puts (bug);

	system ("pause");
	return 0;
}