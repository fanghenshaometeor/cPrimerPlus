/* hiding.c - variables in code block */
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int x = 30;					/* init x */
	printf ("x in outer block: %d\n", x);
	{
		int x = 77;				/* new x, hide the first x */
		printf ("x in inner block: %d\n", x);
	}
	printf ("x in outer block: %d\n", x);
	while (x++ < 33)			/* init x */
	{
		int x = 100;			/* new x, hide the first x */
		x++;
		printf ("x in while loop: %d\n", x);
	}
	printf ("x in outer block: %d\n", x);

	system ("pause");
	return 0;
}