/* r_drive0.c -- test rand0() function */
/* compile together with rand0.c */
#include <stdio.h>
#include <stdlib.h>

extern int rand0(void);

int main (void)
{
	int count;

	for (count = 0; count < 5; count++)
		printf ("%hd\n", rand0());

	system ("pause");
	return 0;
}