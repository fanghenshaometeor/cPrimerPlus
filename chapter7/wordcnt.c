/* wordcnt.c -- statistic char, word and row */
#include <stdio.h>
#include <ctype.h>				// provide function prototype for isspace()
#include <stdbool.h>				// provide definitions for bool, true and false
#define STOP '|'
int main (void)
{
	char c;					// read char
	char prev;				// the previous char
	long n_chars = 0L;			// number of chars
	int n_lines = 0;			// number of rows
	int n_words = 0;			// number of words
	int p_lines = 0;			// number of incomplete rows
	bool inword = false;			// if c is in a word, then inword equals true

	printf("Enter text to be analyzed (| to terminate): \n");
	prev = '\n';				// to identify complete row
	while ((c = getchar()) != STOP)	
	{
		n_chars++;
		if (c == '\n')
			n_lines++;
		if (!isspace (c) && !inword)
		{
			inword = true;		// begin a new word
			n_words++;		// statistic words
		}
		if (isspace (c) && inword)
			inword = false;		// arrive the end of one word
		prev = c;			// save the char value
	}

	if (prev != '\n')
		p_lines = 1;
	printf("characters = %ld, words = %d, lines = %d, ", n_chars, n_words, n_lines);
	printf("partial lines = %d\n", p_lines);
	return 0;
}

