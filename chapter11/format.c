/* format.c -- formalize a string */
#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int main (void)
{
	char first[MAX];
	char last[MAX];
	char formal[2 * MAX + 10];
	double prize;

	puts ("Enter your first name:");
	gets_s (first);
	puts ("Enter your last name:");
	gets_s (last);
	puts ("Enter your prize money:");
	scanf_s ("%lf", &prize);
	sprintf_s (formal, "%s, %-19s: $%6.2f\n", last, first, prize);
	puts (formal);

	system ("pause");
	return 0;
}