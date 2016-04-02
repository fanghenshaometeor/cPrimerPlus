/* exercise4.c -- This program requires two inputs of
	your name and height(measured by inch) and output them as required */
#include <stdio.h>
int main (void)
{
	float heightinch, heightfeet;
	char name[40];

	printf("Please input your name: ");
	scanf("%s", name);
	printf("Please input your height(inch): ");
	scanf("%f", &heightinch);
	heightfeet = heightinch / 12;
	printf("%s, you are %.3f feet tall\n", name, heightfeet);

	return 0;
}

