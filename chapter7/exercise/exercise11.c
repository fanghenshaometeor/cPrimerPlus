/* exercise11.c */
#include <stdio.h>
int main (void)
{
	float a, b, c;					// a means chaoxianji, b means tiancai, c means carrots
	const float PRICEA = 1.25;
	const float PRICEB = 0.65;
	const float PRICEC = 0.65;

	printf("Please enter the prounds of the three types of vegetables:\n");
	printf("(or enter q to quit)\n");
	while (scanf("%f%f%f", &a, &b, &c) == 3)
	{
		
