/* sizeof.c -- 使用sizeof.c运算符 */
// 使用C99的%z修饰符。如果不能使用%zd，请使用%u或%lu
#include <stdio.h>

int main (void)
{
	int n = 0;
	size_t intsize;
	intsize = sizeof(int);
	
	printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n",
		n, sizeof n, intsize);

	return 0;
}

