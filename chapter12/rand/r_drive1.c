/* r_drive1.c -- test functions rand1() and srand1() */
/* compile together with s_and_r.c 					 */
#include <stdio.h>
#include <stdlib.h>

extern void srand1 (unsigned int x);
extern int rand1 (void);

int main (void)
{
	int count;
	unsigned seed;

	printf ("Please enter your choice for seed.\n");
	while (scanf_s ("%u", &seed) == 1)
	{
		srand1 (seed);				// reset the seed
		for (count = 0; count < 5; count++)
			printf ("%hd\n", rand1());
		printf ("Please enter next seed (q to quit):\n");
	}
	printf ("Done!\n");

	system ("pause");
	return 0;
}