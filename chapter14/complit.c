/* complit.c -- compround character */
#include <stdio.h>
#include <stdlib.h>
#define MAXTITL 41
#define MAXAUTL 31

struct book {				// struct template, whose tag is book
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void)
{
	struct book readfirst;
	int score;

	printf("Enter test score: ");
	scanf_s("%d", &score);

	if (score >= 84)
		readfirst = (struct book) {
			"Crime and Punishment",
				"Fyodor Dostoyevsky",
				9.99
		};
	else
		readfirst = (struct book) {
			"Mr. Bouncy's Nice Hat",
				"Fred Winsome",
				5.99
		};
	printf("Your assignment reading:\n");
	printf("%s by %s: $%.2f\n", readfirst.title, readfirst.author, readfirst.value);

	system("pause");
	return 0;
}