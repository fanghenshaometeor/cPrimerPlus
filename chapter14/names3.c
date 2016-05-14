// names3.c -- use pointer and malloc() function
#include <stdio.h>
#include <string.h>						// to use strcpy(), strlen()
#include <stdlib.h>						// to use malloc(), free()

struct namect {
	char *fname;						// use pointer
	char *lname;
	int letters;
};

void getinfo(struct namect *);			// distribute storage
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void cleanup(struct namect *);			// release storage after using

int main(void)
{
	struct namect person;

	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);
	cleanup(&person);

	system("pause");
	return 0;
}

void getinfo(struct namect *pst)
{
	char temp[81];
	printf("Please enter your first name.\n");
	gets_s(temp);

	// distribute storage to store name
	pst->fname = (char *)malloc(strlen(temp) + 1);

	// copy name to storage distributed
	strcpy_s(pst->fname, strlen(temp) + 1, temp);
	printf("Please enter your last name.\n");
	gets_s(temp);
	pst->lname = (char *)malloc(strlen(temp) + 1);
	strcpy_s(pst -> lname, strlen(temp) + 1, temp);
}

void makeinfo(struct namect *pst)
{
	pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect *pst)
{
	printf("%s %s, your name contains %d letters.\n", pst->fname, pst->lname, pst->letters);
}

void cleanup(struct namect *pst)
{
	free(pst->fname);
	free(pst->lname);
}