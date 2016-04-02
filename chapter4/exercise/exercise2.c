/* This program requests an input of your name
	and does the following :
a.to print it in a pair of ""
b.to print it in a pair of () in a char paragraph whose width is 20
c.to print it in a pair of () in the left of a char paragraph whose width is 20
d.to print it in a char paragraph that has a three char wider than that of the name */
#include <stdio.h>
int main (void)
{
	char name[40];

	printf("Please input your name: ");
	scanf("%s", name);
	printf("This program prints your name in the following ways:\n");
	printf("a.\"%s\"\n", name);
	printf("b.\"%20s\"\n", name);
	printf("c.\"%-20s\"\n", name);
	printf("d.   %s\n", name);

	return 0;
}

