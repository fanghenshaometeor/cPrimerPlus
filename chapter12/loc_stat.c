/* loc_stat.c -- use a local static variable */
#include <stdio.h>
#include <stdlib.h>
void trystat (void);
int main (void)
{
	int count;

	for (count = 1; count <= 3; count++)
	{
		printf("Here comes iteration %d: \n", count);
		trystat();
	}

	system ("pause");
	return 0;
}

void trystat (void)
{
	int fade = 1;
	static int stay = 1;

	printf ("fade = %d and stay = %d\n", fade++, stay++);
}