/* exercise3.c */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define SIZE 80
void readwords(char arr[]);
bool charture(char ch);
int main(void)
{
	char input[SIZE];

	readwords(input);

	system("pause");
	return 0;
}

void readwords(char arr[])
{
	printf("Input something you like\n");

	gets_s (arr, SIZE);

	int index = 0;
	while (!charture(arr[index]))
	{
		index++;
	}
	arr = arr + index;
	index = 0;
	while (charture(arr[index]))
	{
		index++;
	}
	arr[index] = '\0';

	puts(arr);
}

bool charture(char ch)
{
	if (ch == ' ' || ch == '\t' || ch == '\n')
		return false;
	else
		return true;
}