/* exercise1.c */
#include <stdio.h>
#define MIN_PER_HOU 60

int main (void)
{
	int time, time_hour, time_minute;

	printf("This program converts time displayed by minutes\n");
	printf("	to that displayed by hours and minutes.\n");

	printf("Please input the time in minutes(<= 0 to quit):\n");
	scanf("%d", &time);

	while(time > 0)
	{
		time_hour = time / MIN_PER_HOU;
		time_minute = time % MIN_PER_HOU;

		printf("%d minutes you input is corresponding to %d hours and %d minutes.\n", time, time_hour, time_minute);

		printf("Please input the time in minutes(<= 0 to quit):\n");
		scanf("%d", &time);
	}

	printf("Done!\n");
	return 0;
}

