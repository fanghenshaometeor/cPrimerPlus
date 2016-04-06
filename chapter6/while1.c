/* while1.c -- heed the usage of huakuohao */
/* terrible codes produce an infinite cycle */
#include <stdio.h>
int main (void)
{
	int n = 0;

	while (n < 3)
		printf("n is %d.\n", n);
		n++;
	printf("That's all this program does\n");
	return 0;
}

