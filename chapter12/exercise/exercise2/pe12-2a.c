// pe12-2a.c 
#include <stdio.h>
#include "pe12-2a.h"

static int mode;
static int dist;
static double fuel;

void set_mode(int modefuck)
{
	mode = modefuck;
	if (mode > 1)
	{
		mode = 1;
		printf("Invalid mode specified. Mode 1 (US) used.\n");
	}

	return;
}

void get_info(void)
{
	if (mode == 0)
	{
		printf("Enter distance traveled in kilometers: ");
		scanf_s("%d", &dist);

		printf("Enter fuel consumed in liters: ");
		scanf_s("%lf", &fuel);
	}

	else
	{
		printf("Enter distance traveled in miles: ");
		scanf_s("%d", &dist);

		printf("Enter fuel comsumed in gallons: ");
		scanf_s("%lf", &fuel);
	}

	return;
}

void show_info(void)
{
	if (mode == 0)
		printf("Fuel comsumption is %.2lf liters per 100 km.\n", fuel / dist * 100);
	else
		printf("Fuel comsumption is %.1lf miles per gallon.\n", dist / fuel);

	return;
}
