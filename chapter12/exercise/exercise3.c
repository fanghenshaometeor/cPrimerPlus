/* exercise3.c */
#include <stdio.h>
#include <stdlib.h>

int set_mode(int modefuck);
void get_show_info(int modefuck);

int main(void)
{
	int mode;

	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf_s("%d", &mode);

	while (mode >= 0)
	{
		mode = set_mode(mode);
		get_show_info(mode);
		printf("Enter 0 for metric mode, 1 for US mode");
		printf("(-1 to quit): ");
		scanf_s("%d", &mode);
	}

	printf("Done.\n");

	system("pause");
	return 0;
}

int set_mode(int modefuck)
{
	int mode = modefuck;
	if (mode > 1)
	{
		mode = 1;
		printf("Invalid mode specified. Mode 1 (US) used.\n");
	}

	return mode;
}

void get_show_info(int modefuck)
{
	int dist;
	double fuel;

	if (modefuck == 0)
	{
		printf("Enter distance traveled in kilometers: ");
		scanf_s("%d", &dist);

		printf("Enter fuel consumed in liters: ");
		scanf_s("%lf", &fuel);

		printf("Fuel comsumption is %.2lf liters per 100 km.\n", fuel / dist * 100);
	}

	else
	{
		printf("Enter distance traveled in miles: ");
		scanf_s("%d", &dist);

		printf("Enter fuel comsumed in gallons: ");
		scanf_s("%lf", &fuel);

		printf("Fuel comsumption is %.1lf miles per gallon.\n", dist / fuel);
	}

	return;
}
