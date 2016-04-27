/* exercise10.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10
#define ELEMENT_SIZE 80

void read_input(char *arr[], char arr_fuck[][ELEMENT_SIZE]);
int judge_length(char *arr[]);
void display_menu(void);
void choice_one(char *arr[], int length);
void choice_two(char *arr[], int length);
void choice_three(char *arr[], int length);

int main(void)
{
	int choice = 0, length = 0;
	char *string_list[MAX];
	char string_fuck[MAX][ELEMENT_SIZE] = { '\0' };

	read_input(string_list, string_fuck);
	length = judge_length(string_list);
	display_menu();
	scanf_s("%d", &choice, 1);
	choice_one(string_list, length);
	choice_two(string_list, length);
	choice_three(string_list, length);

	system("pause");
	return 0;
}

void read_input(char *arr[], char arr_fuck[][ELEMENT_SIZE])
{
	puts("Enter ten strings with each string occupying one row.");

	int index = 0;
	for (; index < MAX; index++)
	{
		gets_s(arr_fuck[index]);
		arr[index] = arr_fuck[index];
	}

	return;
}

int judge_length(char *arr[])
{
	int length = MAX;

	for (int index = 0; index < MAX; index++)
	{
		if (*(arr + index) == '\0')
		{
			length = index;
			break;
		}
	}

	return length;
}

void display_menu(void)
{
	puts("--------------------------------------------------------------------------------");
	puts("Here are the formates of outputting the strings you may like:");
	puts("1). the origin string list.");
	puts("2). in the order of ASCII.");
	puts("3). in the order of length increase.");
	puts("4). in the order of the length of the first word in the string.");
	puts("5). exit.");
	puts("--------------------------------------------------------------------------------");
	puts("choose one of it and enter the number.");

	return;
}

void choice_one(char *arr[], int length)
{
	for (int i = 0; i < length; i++)
		puts(arr[i]);

	return;
}

void choice_two(char *arr[], int length)
{
	int i = 0, j = 0, temp = length + 1;

	for (i = 0; i < length - 1; i++)
	{
		for (j = i + 1; j < length; j++)
			if (*(arr[i]) > *(arr[j]))
			{
				arr[temp] = arr[i];
				arr[i] = arr[j];
				arr[j] = arr[temp];
			}
	}

	puts("The strings are ordered according to the ASCII.");
	choice_one(arr, length);

	return;
}

// todo: not ordered by length of strings
void choice_three(char *arr[], int length)
{
	int element_length[MAX] = { 0 }, temp = length + 1, i = 0, j = 0;

	for (i = 0; i < length; i++)
		element_length[i] = strlen(arr[i]);

	for (i = 0; i < length - 1; i++)
	{
		for (j = i + 1; j < length; j++)
			if (element_length[i] > element_length[j])
			{
				arr[temp] = arr[i];
				arr[i] = arr[j];
				arr[j] = arr[temp];
			}
	}

	puts("The strings are ordered decendantly as the length of each one.");
	choice_one(arr, length);

	return;	
}