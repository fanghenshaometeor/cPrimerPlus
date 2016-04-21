/* sort_str.c -- read some strings and sort them */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 81									/* string length limit, including \0	*/
#define LIM 20									/* maxmum row numbers to be read		*/
#define HALT " "								/* use empty string to terminate the input*/

void stsrt (char *strings[], int num);			/* string sort function				*/

int main (void)
{
	char input[LIM][SIZE];						/* store input array				*/
	char *ptstr[LIM];							/* pointer variable array			*/
	int ct = 0;									/* input counting					*/
	int k;										/* output counting					*/

	printf ("Input up to %d lines, and I will sort them.\n", LIM);
	printf ("To stop, press the Enter key at a line's start.\n");

	while (ct < LIM && gets_s (input[ct]) != NULL && input[ct][0] != '\0')
	{
		ptstr[ct] = input[ct];					/* set the pointer to input string  */
		ct++;
	}

	stsrt (ptstr, ct);							/* call the string sort function    */
	puts ("\nHere's the sorted list:\n");
	for (k = 0; k < ct; k++)
		puts(ptstr[k]);							/* pointers after sorting			*/

	system ("pause");
	return 0;
}

/* string-pointer-sort function */
void stsrt (char *strings[], int num)
{
	char *temp;
	int top, seek;

	for (top = 0; top < num - 1; top++)
		for (seek = top + 1; seek < num; seek++)
			if (strcmp(strings[top], strings[seek]) > 0)
			{
				temp = strings[top];
				strings[top] = strings[seek];
				strings[seek] = temp;
			}
}