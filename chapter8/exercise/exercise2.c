/* exercise2.c */
#include <stdio.h>
int main (void)
{
	int inputchar;
	int index;
	const int ROWSIZE = 10;


	for  (index = 1; (inputchar = getchar()) != EOF; index++)
	{
		if (inputchar == '\n') 	printf("(%s, %d) ", "\\n" , (int)('\n'));
		else if (inputchar == '\b') printf("(%s, %d) ", "\\b", (int)('\b'));
		else if ((int)inputchar < 32) printf("(%c%c, %d) ", '^', (int)inputchar + 64, (int)inputchar);
		else
			printf("(%c, %d) ", inputchar, (int)inputchar);
		if (index % ROWSIZE == 0) printf("\n");
	}
	return 0;
}

