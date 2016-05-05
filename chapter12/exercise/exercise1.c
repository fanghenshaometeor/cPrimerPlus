/* exercise1 */
#include <stdio.h>
#include <stdlib.h>

int critic(int units);

int main(void)
{
	int units = 0;

	printf("How many pounds to a firkin of butter?\n");
	scanf_s("%d", &units);
	while (units != 56)
		units = critic(units);
	printf("You must have looked it up!\n");

	system("pause");
	return 0;
}

int critic(int units)
{
	printf("No luck, chummy. Try again.\n");
	scanf_s("%d", &units);

	return units;
}