/* electric.c -- compute the electricity used */
#include <stdio.h>
#define RATE1 0.12589					/* fee percent of the first 360kWh	*/
#define RATE2 0.17901					/* fee percent of the next 360kWh	*/
#define RATE3 0.20971					/* fee percent when over 680kWh		*/
#define BREAK1 360.0					/* the first cutting point of fee	*/
#define BREAK2 680.0					/* the seconde cutting point of fee	*/
#define BASE1 (RATE1 * BREAK1)				/* the fee when using 360kWh		*/
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))	/* the fee when using 680kWh		*/

int main (void)
{
	double kwh;					/* the kWh number of electriciy used	*/
	double bill;					/* fee					*/

	printf("Please enter the kwh used.\n");
	scanf("%lf", &kwh);
	if (kwh <= BREAK1)
		bill = RATE1 * kwh;
	else if (kwh <= BREAK2)
		bill = BASE1 + (RATE2 * (kwh - BREAK1));
	else
		bill = BASE2 + (RATE3 * (kwh - BREAK2));
	printf("The charge for %.1f kwh is $%1.2f.\n", kwh, bill);
	return 0;
}

