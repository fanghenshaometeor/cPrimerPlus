/* loccheck.c -- check the storage place of variable */
#include <stdio.h>
void mikado (int);					/* declare function */
int main (void)
{
	int pooh = 2, bah = 5;				/* local variable in function main() */

	printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
	printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
	mikado(pooh);
	return 0;
}

void mikado (int bah)					/* define function */
{
	int pooh = 10;					/* local variable in function mikdo() */

	printf("In mikado(), pooh = %d and pooh = %p\n", pooh, &pooh);
	printf("In mikado(), bah = %d and bah = %p\n", bah, &bah);
}

