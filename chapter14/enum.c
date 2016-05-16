/* enum.c -- use enumerated type value */
#include <stdio.h>
#include <string.h>					// to use strcmp()
#include <stdbool.h>				// C99 propert

enum spectrum {red, orange, yellow, green, blue, violet};
const char * colors[] = {"red", "orange", "yellow", "green", "blue", "violet"};

#define LEN 30

int main (void)
{
	char choice[LEN];
	enum spectrum color;
	bool color_is_found = false;

	puts("Enter a color (empty line to quit): ");
	while(gets_s(choice, LEN) != NULL && choice[0] != '\0')
	{
		for (color = red; color <= violet; color++)
		{
			if (strcmp(choice, colors[color]) == 0)
			{
				color_is_found = true;
				break;
			}
		}
		if(color_is_found)
			switch(color)
		{
			case red: puts("Roses are red."); break;
			case orange: puts("Poppies are orange."); break;
			case yellow: puts("Sunflowers are yellow."); break;
			case green: puts("Grass is green."); break;
			case blue: puts("Bluebells are blues."); break;
			case violet: puts("Violets are violet."); break;
		}
		else
			printf("I don't know about the color %s.\n", choice);
		color_is_found = false;
		puts("Next color, please (empty line to quit): ");
	}
	puts("Goodbye!");

	system("pause");
	return 0;
}