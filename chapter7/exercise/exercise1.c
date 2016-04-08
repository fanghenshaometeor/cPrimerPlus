/* exercise1.c */
#include <stdio.h>
int main (void)
{
	const char END = '#';
	// const char SPACE = ' ';
	// const char EXROW = '\n';
	char inputch;
	int space = 0, exrow = 0, other = 0;

	printf("Please enter a set of string (enter # to quit): ");
	while ((inputch = getchar()) != END)
	{
		switch (inputch) {
			case ' ': space++; break;
			case '\n': exrow++; break;
			default: other++; break;
		}
	}
	printf("The numbers of ' ', \\n and other characters are respectively\n");
	printf("%4d, %4d and %4d.\n", space, exrow, other);
	printf("Done!\n");
	return 0;
}

