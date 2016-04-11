/* exercise3.c */
#include <stdio.h>
#include <ctype.h>
int main (void)
{
	int inputchar, lowercase = 0, uppercase = 0;

	printf("Please input anything you like, ending with ctrl+D:\n");
	while ((inputchar = getchar()) != EOF)
	{
		if (islower(inputchar))
			lowercase += 1;
		else if (isupper(inputchar))
			uppercase += 1;
	}
	printf("\nAmong the characters you input,\n");
	printf("Totally there are %d lowercase %s and %d uppercase %s.\n", lowercase, lowercase == 1?"letter":"letters",
			uppercase, uppercase == 1?"letter":"letters");
	return 0;
}
