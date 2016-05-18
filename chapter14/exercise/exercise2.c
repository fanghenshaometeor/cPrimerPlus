/* exercise2.c */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct date {
	int day;
	int month;
	int year;
	int totaldays;
};

bool judgeyear(int);
bool judgemonth(int);
bool judgeday(int, int, int);
int compute(int, int, int);

int main(void)
{
	struct date input;

	puts("Please enter a date.");

	puts("First, enter the year.");
	scanf_s("%d", &(input.year));
	while (!judgeyear(input.year))
	{
		puts("Enter again:");
		scanf_s("%d", &(input.year));
	}
	input.year = (input.year > 0) ? input.year : (-input.year);

	puts("Then, enter the index of the month.");
	scanf_s("%d", &(input.month));
	while (!judgemonth(input.month))
	{
		puts("Invalid month value.");
		puts("Enter again:");
		scanf_s("%d", &(input.month));
	}

	puts("Finally, enter the day.");
	scanf_s("%d", &(input.day));
	while (!judgeday(input.year, input.month, input.day))
	{
		puts("Invalid day value.");
		puts("Enter again:");
		scanf_s("%d", &(input.day));
	}

	input.totaldays = compute(input.year, input.month, input.day);
	printf("In %d,\n the total days from the beginning of this year to the date you input is %d.\n", input.year, input.totaldays);

	system("pause");
	return 0;
}

bool judgeyear(int year)
{
	if (year == 0)
	{
		puts("The year cannot be 0.");
		return false;
	}
}

bool judgemonth(int month)
{
	if (month < 1 || month > 12)
		return false;
	else
		return true;
}

bool judgeday(int year, int month, int day)
{
	bool isvalid = true;
	if (month != 2)
	{
		switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (day < 1 || day > 31)
			{
				isvalid = false;
				return isvalid;
			}; break;
		case 4:
		case 6:
		case 9:
		case 11:
			if (day < 1 || day > 30)
			{
				isvalid = false;
				return isvalid;
			}; break;
		}
	}
	else
	{
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		{
			if (day < 1 || day > 29)
			{
				isvalid = false;
				return isvalid;
			}
		}
		else
			if (day < 1 || day > 28)
			{
				isvalid = false;
				return isvalid;
			}
	}
	return isvalid;
}

int compute(int year, int month, int day)
{
	int index = 1;
	int month_day[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int totaldays = 0;

	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	{
		month_day[1] = 29;
		for (index = 1; index < month; index++)
			totaldays += month_day[index - 1];
		totaldays += day;
	}
	else
	{
		for (index = 1; index < month; index++)
			totaldays += month_day[index - 1];
		totaldays += day;
	}

	return totaldays;
}