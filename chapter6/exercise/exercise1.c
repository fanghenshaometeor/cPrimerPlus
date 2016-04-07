/* exercise.c */
#include <stdio.h>
#define LENGTH 26
int main (void)
{
	char alpha[LENGTH];
	char content = 'a';
	int index;

	for (index = 0; index < LENGTH; index++, content++)
	{
		alpha[index] = content;
		printf("%3c", alpha[index]);
	}
	printf("\n");

	return 0;
}

