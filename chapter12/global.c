/* global.c -- use external variable */
#include <stdio.h>
#include <stdlib.h>
int units = 0;						/* an external variable */
void critic (void);
int main (void)
{
	extern int units;				/* alternative twice declaration */

	printf ("How many pounds to a firkin of butter?\n");
	scanf_s ("%d", &units);
	while (units != 56)
		critic ();
	printf ("You must have looked it up!\n");

	system ("pause");
	return 0;
}

void critic (void)
{
	/* here etc alternative twice declaration */
	printf ("No luck, chummy. Try again.\n");
	scanf_s ("%d", &units);
}