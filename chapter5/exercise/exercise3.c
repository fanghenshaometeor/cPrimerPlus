/* exercise3.c */
#include <stdio.h>

int main (void)
{
	int day_input, week_output, day_output;

	printf("This program transmutes a day number you input\n");
	printf("	to its corresponding week number and day number.\n");
	printf("Please input the days: ");
	scanf("%d", &day_input);

	while (day_input > 0)
	{
		week_output = day_input / 7;
		day_output = day_input % 7;
		printf("%d days are %d weeks, %d days.\n", day_input, week_output, day_output);

		printf("Please input the days: ");
		scanf("%d", &day_input);
	}

	printf("Done!\n");
	return 0;
}

