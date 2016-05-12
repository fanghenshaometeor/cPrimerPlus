/* names1.c -- using pointer pointing to struct */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct namect {
	char fname[20];
	char lname[20];
	int letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(struct namect *);

int main (void)
{
	struct namect person;

	getinfo(&person);
	makeinfo(&person);
	showinfor(&person);

	system("pause");
	return 0;
}

void getinfo(struct namect *pst)
{
	printf("Please enter your first name.\n");
	gets_s(pst->fname);
	printf("Please enter your last name.\n");
	gets_s(pst->lname);
}

void makeinfo(struct namect *pst)
{
	pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfor(struct namect *pst)
{
	printf("%s %s, your name contains %d letters.\n", pst->fname, pst->lname, pst->letters);
}