/* book.c -- book content only including one book */
#include <stdio.h>
#include <stdlib.h>
#define MAXTITL 41						/* the max length of book title + 1 */
#define MAXAUTL 31						/* the max length of author name + 1*/
struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};										/* struct template end */

int main (void)
{
	struct book library;				/* declare library as variable of book type */
	printf("Please enter the book title.\n");
	gets_s(library.title);				/* ask title part */
	printf("Now enter the author.\n");
	gets_s(library.author);
	printf("Now enter the value.\n");
	scanf_s("%f", &library.value);
	printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
	printf("%s: \"%s\"($%.2f)\n", library.author, library.title, library.value);
	printf("Done.\n");

	system("pause");
	return 0;
}