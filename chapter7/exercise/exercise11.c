/* exercise11.c */
#include <stdio.h>
float compute_trans_prices (float pounds);
float readinput(char type);
int main (void)
{
	char input;
	float pound1, pound2, pound3, total_pounds, initi_prices, total_prices, trans_prices, discount;
	const float PRICEA = 1.25;
	const float PRICEB = 0.65;
	const float PRICEC = 0.65;
	const float DISCOUNT = 0.05;

	printf("*********************************************************\n");
	printf("You are supposed to enter a, b, c or q.\n");
	printf("After you enter a, please input the pounds of chaoxianji.\n");
	printf("After you enter b, please input the pounds of tiancai.\n");
	printf("After you enter c, please input the pounds of carrot.\n");
	printf("*********************************************************\n");
	printf("Please enter character a, b or c:\n");
	printf("(or enter q to quit)\n");
	while (scanf("%c", &input) == 1) {
		getchar();
		if (input == 'q')	break;
		switch (input) {
			case 'a': pound1 = readinput('a'); break;
			case 'b': pound2 = readinput('b'); break;
			case 'c': pound3 = readinput('c'); break;
			default: printf("You are supposed to enter a, b or c.\n"); 
				printf("Or q to quit.\nEnter again:");break;			
		}
	}

	total_pounds = pound1 + pound2 + pound3;
	initi_prices = pound1 * PRICEA + pound2 * PRICEB + pound3 * PRICEC;
	discount = (initi_prices >= 100) ? initi_prices * DISCOUNT : 0;
	trans_prices = compute_trans_prices(total_pounds);
	total_prices = initi_prices + trans_prices - discount;

	printf("1)The pounds of chaoxianji is: %.2f;\n  The price of chaoxinji is: $%.2f per pound;\n",
			 pound1, PRICEA);
	printf("  The total price of chaoxianji is: $%.2f.\n", pound1 * PRICEA);
	printf("2)The pounds of tiancai    is: %.2f;\n  The price of tiancai   is: $%.2f per pound;\n",
			 pound2, PRICEB);
	printf("  The total price of tiancai    is: $%.2f.\n", pound2 * PRICEB);
	printf("3)The pounds of carrot     is: %.2f;\n  The price of carrot    is: $%.2f per pound;\n",
			 pound3, PRICEC);
	printf("  The total price of carrot     is: $%.2f.\n", pound3 * PRICEC);
	printf("4)The total price of the three vegetables is $%.2f,\n", total_prices);
	printf("  including transportation price $%.2f and a discount of $%.2f.\n", trans_prices, discount);
	

	printf("Done!\n");
	return 0;
}

float compute_trans_prices (float pounds)
{
	const float TRANSPRICE1 = 3.50;
	const float TRANSPRICE2 = 10.00;
	const float TRANSPRICE3 = 0.1;
	const float TRANSPRICE4 = 8;
	float trans_prices;

	if (pounds <= 0)
		trans_prices = 0;
	else if (pounds <= 5)
		trans_prices = TRANSPRICE1;
	else if (pounds < 20)
		trans_prices = TRANSPRICE2;
	else
		trans_prices = TRANSPRICE4 + (pounds - 20) * TRANSPRICE3;

	return trans_prices;
}

float readinput(char type)
{
	float pound;

	if (type == 'a') {
		printf("Enter the pounds of chaoxianji:\n");
		scanf("%f", &pound);
		getchar();
		printf("Continue to enter b or c (q to quit):\n");
	}
	else if (type == 'b') {
		printf("Enter the pounds of tiancai:\n");
		scanf("%f", &pound);
		getchar();
		printf("Continue to enter a or c (q to quit):\n");
	}
	else if (type == 'c') {
		printf("Enter the pounds of carrots:\n");
		scanf("%f", &pound);
		getchar();
		printf("Continue to enter a or b (q to quit):\n");
	}
	return pound;
}
