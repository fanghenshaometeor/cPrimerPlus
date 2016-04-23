#include <stdio.h>
#include <stdlib.h>
#define MAX 80
char sear_find(char **arr1, char ch);
int main(void)
{
	char input[MAX];
	char ch, check;
	char *pr = input;

	printf("Enter a set of string.\n");
	gets_s (input);
	while (*input != 'q')
	{
		printf("Enter a character you like.\n");
		scanf_s("%c", &ch, 1);

		check = sear_find (&pr, ch);
		if (check != '\0')
			printf("The char %c is in the string you input.\n", *pr);
		else
			printf("The char %c is not in the string you input.\n", ch);

		getchar();
		printf("Enter another set of string (beginning with q to quit).\n");
		gets_s(input);
	}

	printf("Done.\n");

	system("pause");
	return 0;
}

char sear_find(char **arr1, char ch)
{
	int index = 0;

	while (*(*arr1 +index) != ch && *(*arr1 + index)!= '\0')
	{
		index ++;
	}
	*arr1 = *arr1 + index;

	if (**arr1 == '\0')
		return '\0';
	else
		return ch;
}

// This is a wonderful practice
// We know that if we want to change a value (not pointer) in a function we can transfer
// its address to the function.
// So what about a pointer?
// If we want to change where a pointer points to through function, we have to use
// two-order pointer.
// That is, the value of a one-order pointer is an address where the value the pointer
// points to is stored, while the value of a two-order pointer is an address where 
// the pointer is stored.