/* This program aims to transmute my age into days and display them
    without contemplating the fractional year or leap year. */
#include <stdio.h>

int main(void)
{
	int age, days;

	age = 19;
	days = 365 * age;

	printf("My age is %d.\nThe corrsponding days are %d.\n", age, days);

	return 0;
}
