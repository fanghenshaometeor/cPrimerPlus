/* exercise9.c */
#include <stdio.h>
#include <stdbool.h>
bool isPrime (int n);
int main (void)
{
	int input, index;

	printf("Please input an integer:\n");
	scanf("%d", &input);

	for(index = 0; index <= input; index++)
		if(isPrime(index))
			printf("%-5d", index);
	printf("\n");
	return 0;
}
bool isPrime (int n)
{
	int i = 2;
	bool fuck = true;

	if(n == 0 || n == 1) fuck = false;
	for(;i < n; i++)
		if(n % i == 0 ) fuck = false;

	return fuck;
}
