// func_ptr.c -- use function pointer
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char showmenu(void);
void eatline(void);						// read until the end of a line
void show(void(*pf)(char *), char *str);
void ToUpper(char *);					// transfer the string to upperletter
void ToLower(char *);					// transfer the string to lowerletter
void Transpose(char *);					// transfer upper and lower
void Dummy(char *);						// not change the string

int main(void)
{
	char line[81];
	char copy[81];
	char choice;
	void(*pfun)(char *);				// point to a function, which accepts a parameter char *, and does not return value

	puts("Enter a string (empty line to quit): ");
	while (gets_s(line, 81) != NULL && line[0] != '\0')
	{
		while ((choice = showmenu()) != 'n')
		{
			switch (choice)				// switch statement to set the pointer
			{
			case 'u': pfun = ToUpper; break;
			case 'l': pfun = ToLower; break;
			case 't': pfun = Transpose; break;
			case 'o': pfun = Dummy; break;
			}
			strcpy(copy, line);			// make a copy for show()
			show(pfun, copy);
		}
		puts("Enter a string (empty line to quit): ");
	}
	puts("Bye!");

	system("pause");
	return 0;
}

char showmenu(void)
{
	char ans;
	puts("Enter menu choice: ");
	puts("u) uppercase   l) lowercase");
	puts("t) transposed case   o) original case");
	puts("n) next string");
	ans = getchar();					// get response from the client
	ans = tolower(ans);					// transmute to lowercase
	eatline();							// delete the remaining part
	while (strchr("ulton", ans) == NULL)
	{
		puts("Please enter a u, l, t, o, or n: ");
		ans = tolower(getchar());
		eatline();
	}
	return ans;
}

void eatline(void)
{
	while (getchar() != '\n')
		continue;
}

void ToUpper(char *str)
{
	while (*str)
	{
		*str = toupper(*str);
		str++;
	}
}

void ToLower(char *str)
{
	while (*str)
	{
		*str = tolower(*str);
		str++;
	}
}

void Transpose(char *str)
{
	while (*str)
	{
		if (islower(*str))
			*str = toupper(*str);
		else if (isupper(*str))
			*str = tolower(*str);
		str++;
	}
}

void Dummy(char *str)
{
	// not change the string
}

void show(void(*fp)(char *), char *str)
{
	(*fp)(str);							// put the function that client choosed to str
	puts(str);							// display the result
}