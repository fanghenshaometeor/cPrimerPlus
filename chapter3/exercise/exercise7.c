/* exercise7.c -- This program requires an input of your height(measured by inch)
	and then displays the corresponding value measured by centimeter. */
#include <stdio.h>
int main (void)
{
	float height;
	float height2inch = 2.54;	// one inch equals 2.54 cm

	printf("Please input your height:________inch\b\b\b\b\b\b\b\b\b\b\b\b");
	scanf("%f", &height);
	printf("Your height is %.2f centimeters.\n", height * height2inch);

	return 0;
}

