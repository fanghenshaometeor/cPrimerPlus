/* queue.h -- queue interface */
#pragma c9x on
#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdbool.h>

/* insert type definition of item here */
/* for example */
typedef struct item 
{
	long arrive;				/* the time that one customer enqueue */
	int processtime;			/* asking time that customer need	  */
} Item;
/* or: typedef struct item {int gumption; int charisma; } Item; */

#define MAXQUEUE 10

typedef struct node
{
	Item item;
	struct node * next;
} Node;

typedef struct queue
{
	Node * front;						/* pointer pointing to the queue head */
	Node * rear;						/* pointer pointing to the queue end  */
	int items;							/* number of items in the queue 	  */
} Queue;

/* condition: initialize queue 			*/
/* precondition: pq points to a queue 	*/
/* postcondition: the queue is initialized empty */
void InitializeQueue (Queue * pq);

/* condition: check whether the queue is full			*/
/* precondition: pq points to an initialized queue 		*/
/* postcondition: if full, return ture, else return false */
bool QueueIsFull (const Queue * pq);

/* condition: check whether the queue is empty			*/
/* precondition: pq points to an initialized queue 		*/
/* postcondition: if empty, return true, else return false */
bool QueueIsEmpty (const Queue * pq);

/* condition: ensure number of items in the queue 		*/
/* precondition: pq points to an initialized queue 		*/
/* postcondition: return number of items in the queue 	*/
int QueueItemCount (const Queue * pq);

/* condition: add item to the end of the queue 			*/
/* precondition: pq points to an initialized queue 		*/
/* 				item is item to be added to the end of the queue */
/* postcondition: if queue not full, item is added to the end of the queue */
/* 				return true, else not change queue and return false 	   */
bool EnQueue (Item item, Queue * pq);

/* condition: delete item from the head of the queue 						*/
/* precondition: pq points to an initialized queue 							*/
/* postcondition: if queue not empty, the item in the head of the queue is copied to */
/* 				*pitem, and deleted from the queue and return true; if this condition */
/* 				set the queue empty, and reset the queue empty; if queue is empty at */
/* 				at the beginning, not change the queue and returns false 			 */
bool DeQueue (Item * pitem, Queue * pq);

/* condition: clear queue 				*/
/* precondition: pq points to an initialized queue */
/* postcondition: queue is cleared 		*/
void EmptyTheQueue (Queue * pq);

#endif