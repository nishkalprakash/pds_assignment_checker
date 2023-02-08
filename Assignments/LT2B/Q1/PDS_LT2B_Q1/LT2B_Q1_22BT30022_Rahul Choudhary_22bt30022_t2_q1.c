/*
section 14
roll no. : 22bt30022
name : rahul choudhary
test:2
description:to define a single linked list structure to store a list of character strings.
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct SET
{
	char data;
	SET *next;
}SET;
void printList(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
//  delete the item
 listLINK delete_item(int val, LINK ptr) 
	 {
		 LINK prev, first;
		first = ptr;	//  remember start
		if (ptr== NULL) 
		 return  NULL;
		else  if (val== ptr-> data)
	{		//  first node is to be deleted
	ptr= ptr-> next;	//  secondnode
	first->next = NULL;
	free(first);		//  free up node
	return ptr; 		 // 2ndnode is new head
	}
