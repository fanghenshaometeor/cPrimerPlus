/* queue.c -- implement file of the queue type */
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

/* local functions */
static void CopyToNode (Item item, Node * pn);
static void CopyToItem (Node * pn, Item * pi);

void InitializeQueue (Queue * pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

bool QueueIsFull (const Queue * pq)
{
	return pq->items == MAXQUEUE;
}

bool QueueIsEmpty (const Queue * pq)
{
	return pq->items == 0;
}

int QueueItemCount (const Queue * pq)
{
	return pq->items;
}

bool EnQueue (Item item, Queue * pq)
{
	Node * pnew;

	if (QueueIsFull(pq))
		return false;

	pnew = (Node *)malloc(sizeof(Node));

	if (pnew == NULL)
	{
		fprintf(stderr, "Unable to allocate memory!\n");
		exit(1);
	}

	CopyToNode(item, pnew);
	pnew->next = NULL;

	if (QueueIsEmpty(pq))
		pq->front = pnew;			/* item is located at the front of the queue */
	else
		pq->rear->next = pnew;		/* linked to the rear of the queue 			 */

	pq->rear = pnew;				/* record the location of the rear of the queue */
	pq->items ++;					/* the number of items in the queue increase 1  */

	return true;
}

bool DeQueue (Item * pitem, Queue * pq)
{
	Node * pt;

	if (QueueIsEmpty(pq))
		return false;

	CopyToItem (pq->front, pitem);

	pt = pq->front;
	pq->front = pq->front->next;
	free(pt);
	pq->items--;

	if (pq->items == 0)
		pq->rear = NULL;

	return true;
}

/* clear queue */
void EmptyTheQueue (Queue * pq)
{
	Item dummy;

	while (!QueueIsEmpty(pq))
		DeQueue(&dummy, pq);
}

/* local functions */
static void CopyToNode (Item item, Node * pn)
{
	pn->item = item;
}

static void CopyToItem (Node * pn, Item * pi)
{
	*pi = pn->item;
}