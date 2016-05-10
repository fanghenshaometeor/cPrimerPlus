/* friends.c -- use pointer pointing to struct */
#include <stdio.h>
#include <stdlib.h>
#define LEN 20

struct names {
	char first[LEN];
	char last[LEN];
};

struct guy {
	struct names handle;
	char favfood[LEN];
	char job[LEN];
	float income;
};

int main (void)
{
	struct guy fellow[2] = {
		{{"Ewen", "Villard"},
		"grilled salmon",
		"personality coach",
		58112.00
		},
		{{"Rdoney", "Swillbelly"},
		"tripe",
		"tabloid editor",
		232400.00
		}
	};

	struct guy *him;		/* this is a pointer pointing to structure */
	printf("address #1: %p #2: %p\n", &fellow[0], &fellow[1]);
	him = &fellow[0];		/* tell the pointer the address it should point to */
	printf("pointer #1: %p #2: %p\n", him, him + 1);
	printf("him->income is $%.2f: (*him).income is $%.2f\n", him->income, (*him).income);
	him++;					/* point to next struct */
	printf("him->favfood is %s: him->handle.last is %s\n", him->favfood, him->handle.last);

	system("pause");
	return 0;
}