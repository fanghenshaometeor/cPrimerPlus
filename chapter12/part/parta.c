// parta.c -- all types of storage classes
#include <stdio.h>
#include <stdlib.h>
void report_count();
void accumulate(int k);

int count = 0;							// file scope, external linkage

int main(void)
{
	int value;							// auto variable
	register int i;						// register variable

	printf("Enter a positive integer (0 to quit): ");
	while (scanf_s("%d", &value) == 1 && value > 0)
	{
		++count;						// recall variable of file scope and external linkage
		for (i = value; i >= 0; i--)
			accumulate(i);
		printf("Enter a positive integer (0 to quit): ");
	}
	report_count();

	system("pause");
	return 0;
}

void report_count(void)
{
	printf("Loop executed %d times.\n", count);
}