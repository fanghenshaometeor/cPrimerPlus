/* This program aims to output three sentences
    consisted of six same parts. */
#include <stdio.h>
void repeat(void);

int main(void)
{
	repeat();repeat();repeat();printf("\n");
	repeat();repeat();printf("\n");
	repeat();printf("\n");

	return 0;
}

void repeat(void)
{
	printf("Smile!");
}
