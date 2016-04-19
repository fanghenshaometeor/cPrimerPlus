// string.c -- use string to interact with user
#include <stdio.h>
#include <stdlib.h>
#define MSG "You must have many talents. Tell me some. "	// a string const
#define LIM 5
#define LINELEN 81

int main (void)
{
	char name[LINELEN];
	char talents[LINELEN];
	int i;
	const char m1[40] = "Limit yourselt to one lime's worth. ";
								// initial a char array with ensured size
	const char m2[] = "If you can't think of anything, fake it. ";
								// let the compile compute the size of the array
	const char *m3 = "\nEnough about me - what's your name? ";
								// initial a pointer
	const char *mytal[LIM] = { "Adding numbers swiftly",
				"Multiplying accurately", "Stashing data",
				"Following instructions to the letter",
				"Understanding the C language"};
								// initial a array of string pointer
	printf ("Hi! I'm Clyde the Computer." " I have many talents.\n");

	printf ("Let me tell you some of them.\n");
	puts ("What were they? Ah, yes, here's a partial list. ");
	for (i = 0; i < LIM; i++)
		puts (mytal[i]);		// print the list of the computer talents
	puts (m3);
	gets_s (name);
	printf ("Well, %s, %s\n", name, MSG);
	printf ("%s\n%s\n", m1, m2);
	gets_s (talents);
	puts ("Let's see if I've got that list:");
	puts (talents);
	printf("Thanks for the information, %s.\n", name);
	system ("pause");
	return 0;
}