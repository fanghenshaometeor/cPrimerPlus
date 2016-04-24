// partb.c -- the rest of the program
#include <stdio.h>

extern int count;					// referencing declaration, external linkage

static int total = 0;				// static definition, internal linkage

void accumulate(int k);			// prototype
void accumulate(int k)				// k owns block scope, empty linkage
{
	static int subtotal = 0;		// static, empty linkage

	if (k <= 0)
	{
		printf("loop cycle: %d\n", count);
		printf("subtotal: %d; total: %d\n", subtotal, total);
		subtotal = 0;
	}
	else
	{
		subtotal += k;
		total += k;
	}
}