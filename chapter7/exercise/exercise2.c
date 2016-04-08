/* exercise2.c */
#include <stdio.h>
int main (void)
{
	const char END = '#';
	const int NUMROW = 8;
	char inputch;
	int index = 1;

	printf("Please enter a set of string (enter # to end): \n");
	while ( (inputch = getchar()) != END)
	{	
		// if (index % NUMROW == 0)
		//	putchar('\n');
		if (inputch == '\n')
			printf("('\\n', %d) ", (int)inputch);
		else
			printf("('%c', %d) ", inputch, (int)inputch);	
		if (index % NUMROW == 0)
			printf("\n");
		index++;
	}
	printf("\n");
	return 0;
}
