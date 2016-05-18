/* exercise4.c */
#include <stdio.h>
#include <stdlib.h>
#define LENGTH 20

struct socialname {
	char fname[LENGTH];
	char mname[LENGTH];
	char lname[LENGTH];
};

struct social {
	char socialsave[LENGTH];
	struct socialname name;
};

void output(const struct social sample[], int n);	// part a
void output2(const char *ch1, const char *ch2, const char *ch3, const char *ch4);		// part b

int main(void)
{
	struct social socialmember[5] = {
		{ "302039823",{ "Dribble", "Marry", "Flossie" } },
		{ "302039824",{ "Fuck", "Woc", "fucking" } },
		{ "302039825",{ "Woc", "", "what" } },
		{ "302039826",{ "Jack", "Mary", "Tony" } },
		{ "302039827",{ "Tom", "", "cat" } }
	};
	int index = 0;

	output(socialmember, 5);

	printf("\n");
	for (; index < 5; index++)
	{
		output2(socialmember[index].socialsave, socialmember[index].name.fname, socialmember[index].name.mname, socialmember[index].name.lname);
	}

	system("pause");
	return 0;
}

void output(const struct social sample[], int n)
{
	int index = 0;

	for (; index < n; index++)
	{
		if (*(sample[index].name.mname) != '\0')
			printf("%s, %s %c. - %s\n", sample[index].name.fname, sample[index].name.lname, *(sample[index].name.mname), sample[index].socialsave);
		else
			printf("%s, %s - %s\n", sample[index].name.fname, sample[index].name.lname, sample[index].socialsave);
	}
}

void output2(const char *ch1, const char *ch2, const char *ch3, const char *ch4)
{
	if (*ch3 != '\0')
		printf("%s, %s %c. - %s\n", ch2, ch4, *ch3, ch1);
	else
		printf("%s, %s - %s\n", ch2, ch4, ch1);
}