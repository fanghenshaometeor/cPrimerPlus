/* exercise1.c -- This program requires an input of your first name and family name 
	and then prints them as the following format:first name, family name. */
#include <stdio.h>
int main (void)
{
	char firstname[40], familyname[40];

	printf("Please input your first name: ");
	scanf("%s", firstname);
	printf("Please input your family name: ");
	scanf("%s", familyname);
	printf("So your full name is %s, %s.\n", firstname, familyname);
	printf("Hello!\n");

	return 0;
}

