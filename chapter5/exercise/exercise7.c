/* exercise7.c */
#include <stdio.h>

void cubic (float n);
int main (void)
{
	float input;

	printf("Please input a float point number: ");
	scanf("%f", &input);
	cubic(input);

	return 0;
}
void cubic (float n)
{
	float cubic_n;
	cubic_n = n * n * n;

	printf("The cubic of %f is %f.\n", n, cubic_n);
}

