/* exercise5.c */
#include <stdio.h>
int main (void)
{
	int guess = 50;
	int high = 100, low = 0;
	char response;

	printf("Pick an integer from 1 to 100. I will try to guess it.\n");
	printf("Respond me with 'h' meaning that my guess is higher and ");
	printf("with 'l' meaning that my guess is lower.\n");
	printf("Respond 'y' to indicate that my answer is right.\n");

	printf("Uh...is your number %d?\n", guess);
	while ((response = getchar()) != 'y')	{
		if (response == 'l')
		{
			low = guess;
			guess = (guess + high) / 2;
			printf("Well, then is it %d?\n", guess);
		}
		else if (response == 'h')
		{
			high = guess;
			guess = (guess + low) / 2;
			printf("Well, then is it %d?\n", guess);
		}
		else 
			printf("Sorry, I only recognize h, l and y.\n");
		
		while (getchar() != '\n')
			continue;
	}
	printf("I knew I could do it.\n");
	return 0;
}
