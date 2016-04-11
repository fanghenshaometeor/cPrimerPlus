/* exercise4.c */
#include <stdio.h>
#include <ctype.h>
int main (void)
{
	int inputchar;
	int number_words = 0, number_letters_total = 0;
	float number_letters_average = 0.0;
	char prevchar;

	while ((inputchar = getchar()) != EOF)
	{
		if (!isalpha(inputchar))
		{
			if (number_letters_total != 0 && isalpha(prevchar))
				number_words += 1;
		}	

		else if (isalpha(inputchar))
		{

			number_letters_total += 1;
		}
		prevchar = inputchar;
	}
	if (number_words == 0) number_letters_average = 0.0;
	else
	number_letters_average = (float)number_letters_total / number_words;

	printf("You have totally input %d words.\n", number_words);
	printf("Each word has average %.2f letters.\n", number_letters_average);

	return 0;
}
