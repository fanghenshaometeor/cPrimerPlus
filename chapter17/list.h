/* list.h -- simple list type head file */
#ifndef LIST_H_
#define LIST_H_
#include <stdbool.h>						/* C99 feature */


/* declaration of specialized program */
#define TSIZE 45						/* size of array to store film name */
struct film {
	char title[TSIZE];
	int rating;
};

/* gradual type definition */
typedef struct film Item;

typedef struct node {
	Item item;
	struct node *next;
} Node;

typedef Node *List;

/* fuction prototype								*/
/* condition:		initialize a list 				*/
/* precondition: plist point to a list 				*/
/* postcondition: the list is initilized empty		*/
void InitializeList (List * plist);

/* condition: ensure whether the list is empty		*/
/* precondition: plist point to a list initialized 	*/
/* postcondition: if empty, return true; or false	*/
bool ListIsEmpty (const List * plist);

/* condition: ensure whether the list is full		*/
/* precondition: plist point to a list initialized 	*/
/* postcondition: if full, return true; or false	*/
bool ListIsFull (const List * plist);

/* condition: ensure the item number in the list 	*/
/* precondition: plist point to a list initialized 	*/
/* postcondition: return the item number			*/
unsigned int ListItemCount (const List *plist);

/* condition: add an item to the end of the list  	*/
/* precondition: plist point to a list initialized	*/
/*				item the item to be added			*/
/* postcondition: if possible, add a new item,		*/
/*				return true, or false				*/
bool AddItem (Item item, List * plist);

/* condition: put a function to every item in the list */
/* precondition: plist point to a initialized list 	*/
/*				pfun point to a function, which accept	*/
/*				a Item parameter and not return		*/
/* postcondition: function pfun point to is put on	*/
/*				every item once in the list 		*/
void Traverse (const List * plist, void (* pfun) (Item item));

/* condition: release storage mallocated (if exists) 	*/
/* precondition: plist point to a list initialized	*/
/* postcondition: storage allocated for the list released */
/* 				and the list is set empty 			*/
void EmptyTheList (List * plist);

#endif