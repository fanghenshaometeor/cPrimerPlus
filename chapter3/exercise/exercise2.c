/* exercise2.c -- This program aims to transfer an ASCII value 
	to the corresponding char */
#include <stdio.h>
int main (void)
{
	int i_input;

	printf("Input an integer between 0 and 127(inclusive 0 and 127): \n");
	scanf("%d", &i_input);
	printf("The corresponding char is %c.\n", i_input);

	return 0;
}

