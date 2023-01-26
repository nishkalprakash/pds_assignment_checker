/*
Name : Govind Jaiswal
Roll no. : 22CH10024
Section : 14
Assignment no. : 10
Description : Program to check if the list is in ascending or descending order
*/

#include <stdio.h>
#include <stdlib.h>

struct linked_list
{
	int data;
	struct linked_list *next;
};
typedef struct linked_list node;

node *createlist(node *head)    //function to create a list
{
	int data;
	node *ptr = head;     
	scanf("%d",&ptr->data);    //Enter -99 to end the list
	if(ptr->data == -99)
		ptr->next = NULL;
	else
	{
		ptr->next = (node *)malloc(sizeof(node));
		ptr->next = createlist(ptr->next);
	}
			
}
  
void check(node *head)     //function check the order of data
{
	node *p = head;
	node *q = p->next;
	while(p!=NULL)     //checking for end of the list
	{
		if((p->data)<(q->data))
		{
			printf("The input list L is in ascending order\n");
			break;
		}
		else if((p->data)>(q->data))
		{	printf("The input list L is in descending order\n");
			break;
		}
		else
		{	printf("The input list L is not in sorted order\n");
			break;
		}
	}
}

int main()
{
	node *head = (node *)malloc(sizeof(node));
	printf("Enter the numbers to check\n");
	head = createlist(head);   //calling the create function
	check(head);    //calling the check function
}
