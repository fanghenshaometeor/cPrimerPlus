/* names2.c -- transfer and return struct */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct namect {
	char fname[20];
	char lname[20];
	int letters;
};

struct namect getinfo(void);
void showinfo(struct namect);
struct namect makeinfo(struct namect);

int main (void)
{
	struct namect person;

	person = getinfo();
	person = makeinfo(person);
	showinfo(person);

	system("pause");
	return 0;
}

struct namect getinfo (void)
{
	struct namect temp;
	printf("Please enter your first name.\n");
	gets_s(temp.fname);
	printf("Please enter your last name.\n");
	gets_s(temp.lname);

	return temp;
}

struct namect makeinfo(struct namect info)
{
	info.letters = strlen(info.fname) + strlen(info.lname);

	return info;
}

void showinfo(struct namect info)
{
	printf("%s %s, your name contains %d letters.\n", info.fname, info.lname, info.letters);
}