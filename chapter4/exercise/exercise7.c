/* exercise7.c -- I decide that from next chapter I will no longer writer 
	any such comments on the head of the exercise program code. */
#include <stdio.h>
int main (void)
{
	const float gln2ltr = 3.785;	// a gallon gasolin appropriately equals 3.785 litters
	const float ml2km = 1.609;	// a mile appximately equals 1.609 kilometers
	float mile;
	float gasolin;

	printf("Please input how many miles you have driven: ");
	scanf("%f", &mile);
	printf("Please input how many gallons of gasolin you have consumed: ");
	scanf("%f", &gasolin);

	printf("You are supposed to drive %.1f miles when you consume one gallon of gasolin.\n", mile/gasolin);
	printf("You are supposed to consume %.1f litters of gasolin when you drive 100 kilometers.\n", 
		100 / (mile / gasolin * ml2km));

	return 0;
}

