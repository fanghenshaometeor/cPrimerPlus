/* str_cat.c -- link two strings */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>		/* declare strcat() function */
#define SIZE 80

int main (void)
{
	char flower[SIZE];
	char addon[] = "s smell like old shoes.";

	puts ("What is your favorite flower?");
	gets_s (flower);
	strcat_S (flower, addon);
	puts (flower);
	puts (addon);

	system ("pause");
	return 0;
}