/* mall.c -- use Queue interface */
/* compile together with queue.c */
#include <stdio.h>
#include <stdlib.h>							/* provide prototype for rand() and srand() */
#include <time.h>							/* provide prototype for time() 			*/
#include "queue1.h"							/* change typedef of Item 					*/
#define MIN_PER_HR 60.0

bool newcustomer(double x);				/* does new customer arrive? 				*/
Item customertime(long when);				/* set customer parameters 					*/

int main(void)
{
	Queue line;
	Item temp;								/* data about new customers 				*/
	int hours;								/* number of hours to analog 				*/
	int perhour;							/* average number of customers per hourr 	*/
	long cycle, cyclelimit;					/* cycle counter, highlimit of counter 		*/
	long turnaways = 0;						/* number of customers turned away for full queue */
	long customers = 0;						/* number of customers added into the queue */
	long served = 0;						/* number of customers served when analog	*/
	long sum_line = 0;						/* queue length counted together 			*/
	int wait_time = 0;						/* time from now to empty Sigmund 			*/
	double min_per_cust;					/* average interval time customers arrive	*/
	long line_wait = 0;						/* queue waiting time counted together 		*/

	InitializeQueue(&line);
	srand(time(0));							/* random initialize rand() function 		*/
	puts("Case Studey: Sigmund Lander's Advice Booth");
	puts("Enter the number of simulation hours:");
	scanf_s("%d", &hours);
	cyclelimit = MIN_PER_HR * hours;
	puts("Enter the average number of customers per hour:");
	scanf_s("%d", &perhour);
	min_per_cust = MIN_PER_HR / perhour;

	for (cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))
		{
			if (QueueIsFull(&line))
				turnaways++;
			else
			{
				customers++;
				temp = customertime(cycle);
				EnQueue(temp, &line);
			}
		}

		if (wait_time <= 0 && !QueueIsEmpty(&line))
		{
			DeQueue(&temp, &line);
			wait_time = temp.processtime;
			line_wait += cycle - temp.arrive;
			served++;
		}

		if (wait_time > 0)
			wait_time--;
		sum_line += QueueItemCount(&line);
	}

	if (customers > 0)
	{
		printf("customers accepted: %ld\n", customers);
		printf("customers served: %ld\n", served);
		printf("turnaways: %ld\n", turnaways);
		printf("average queue size: %.2f\n", (double)sum_line / cyclelimit);
		printf("average wait time: %.2f minutes.\n", (double)line_wait / served);
	}
	else
		puts("No customers!");
	EmptyTheQueue(&line);
	puts("Bye!");

	system("pause");
	return 0;
}

/* x is the average interval arrive time (counted by seconds)			*/
/* if customers arrive in one minute, return true 						*/
bool newcustomer(double x)
{
	if (rand() * x / RAND_MAX < 1)
		return true;
	else
		return false;
}

/* when is the time customer arrives 									*/
/* function returns an Item struct, whose arrive is set as when 		*/
/* processtime needed is set a random value between 1 and 3 			*/
Item customertime(long when)
{
	Item cust;

	cust.processtime = rand() % 3 + 1;
	cust.arrive = when;

	return cust;
}