/* exercise1.c */
#include <stdio.h>
#include <stdlib.h>

void input (char arr[], int n);

int main (void)
{
	int n, index;
	const int MAX = 81;
	char arr[MAX];

	puts ("How many characters would you like to be stored?");
	scanf_s ("%d", &n, 1);

	printf ("Enter a set of string with %d characters.\n", n);

	input (arr, n);

	puts ("Here is what you just input.");
	for (index = 0; index < n; index++)
		putchar(arr[index]);
	putchar('\n');

	system ("pause");
	return 0;
}

void input (char arr[], int n)
{
	int index = 0;

	getchar();
	for (; index < n; index++)
		arr[index] = getchar();

	return;
}