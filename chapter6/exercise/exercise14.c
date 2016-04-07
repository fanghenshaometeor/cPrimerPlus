/* exercise14.c */
#include <stdio.h>
int main (void)
{
	char input[255];
	int index = 0;

	printf("Please enter a set of string");
	printf(" (to enter as the end of the string.)\n");	
	do {
		scanf("%c", &input[index]);
		index++;
	} while (input[index - 1] != '\n');

	printf("Here is the output:");
	while (index > 0)
	{	
		printf("%2c", input[index - 1]);
		index --;
	}
	printf("\n");

	return 0;
}

