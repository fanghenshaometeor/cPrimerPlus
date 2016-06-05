/* list.c -- functions to support list caozuo */
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/* local function prototype */
static void CopyToNode (Item item, Node * pnode);

/* interface functions */
/* set list empty	   */
void InitializeList(List * plist)
{
	* plist = NULL;
}

/* if list empty, return true */
bool ListIsEmpty (const List *plist)
{
	if (* plist == NULL)
		return true;
	else
		return false;
}

/* if list full, return true */
bool ListIsFull (const List * plist)
{
	Node * pt;
	bool full;

	pt = (Node *)malloc(sizeof(Node));
	if (pt == NULL)
		full = true;
	else
		full = false;
	free(pt);
	return full;
}

/* return number of node */
unsigned int ListItemCount (const List * plist)
{
	unsigned int count = 0;
	Node * pnode = * plist;			/* set as the beginning of the list */

	while (pnode != NULL)
	{
		++count;
		pnode = pnode->next;		/* set 1 as the next node 			*/
	}

	return count;
}

/* create node to store item, and add it to 	*/
/* the end of the list plist points to 			*/
bool AddItem (Item item, List * plist)
{
	Node * pnew;
	Node * scan = * plist;

	pnew = (Node *) malloc (sizeof(Node));
	if (pnew == NULL)
		return false;				/* fail then quit function */
	
	CopyToNode(item, pnew);
	pnew->next = NULL;

	if (scan == NULL)				/* empty list, so put pnew */
		* plist = pnew;				/* to the head of the list */
	else
	{
		while(scan->next != NULL)
			scan = scan->next;		/* arrive at the end of the list */
		scan->next = pnew;			/* add pnew to the end of the list */
	}

	return true;
}

/* get each node and excute function pfun points to */
void Traverse (const List *plist, void (* pfun) (Item item))
{
	Node * pnode = * plist;			/* set as the beginning of the list */
	while (pnode != NULL)
	{
		(* pfun)(pnode->item);		/* put function to the item in the list */
		pnode = pnode->next;		/* step to the next forward 			*/
	}
}

/* free the storage allocated by malloc() */
/* set list pointer as NULL				  */
void EmptyTheList (List * plist)
{
	Node *psave;
	while (*plist != NULL)
	{
		psave = (*plist)->next;		/* save address of next node 			*/
		free(*plist);				/* free current node 					*/
		* plist = psave;			/* move forward to next node 			*/
	}
}

/* local function definition	*/
/* copy one item to a node 		*/
static void CopyToNode(Item item, Node * pnode)
{
	pnode->item = item;				/* struct copy 							*/
}