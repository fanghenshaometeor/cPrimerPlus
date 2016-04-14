/* exercise10.c */
#include <stdio.h>
int Fibonacci (int n);

int main (void)
{
	int term;
	char storenter;

	printf("Please enter the index of the term of the Fibonacci set.\n");
	while (scanf("%d", &term) == 1)
	{
		if (term <= 0)
		{
			printf("You can only enter an integer larger than 0.\n");
			printf("Enter again:");
			storenter = getchar();
			continue;
		}
		printf("The corresponding term is %d.\n", Fibonacci(term));
	}
	printf("Done.\n");
	return 0;
}

int Fibonacci (int n)
{
	int index, term, prevterm;
	int result;

	if (n == 1 || n == 2)
		result = 1;
	else
		for (index = 3, term = 1, prevterm = 1; index <= n; index++)
		{
			result = term + prevterm;
			prevterm = term;
			term = result;
		}

	return result;
}
