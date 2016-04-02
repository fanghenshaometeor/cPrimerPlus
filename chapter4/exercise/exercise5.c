/* exercise5.c -- This program...Oh shit!
	My English writing is too bad! */
#include <stdio.h>
#include <string.h>
int main (void)
{
	char firstname[40], lastname[40];
	int fnum, lnum;

	printf("Please input your first name: ");
	scanf("%s", firstname);
	printf("Please input your last name: ");
	scanf("%s", lastname);

	fnum = strlen(firstname);
	lnum = strlen(lastname);

	printf("%10s %10s\n", firstname, lastname);
	printf("%10d %10d\n", fnum, lnum);
	printf("%-10s %-10s\n", firstname, lastname);
	printf("%-10d %-10d\n", fnum, lnum);

	return 0;
}

