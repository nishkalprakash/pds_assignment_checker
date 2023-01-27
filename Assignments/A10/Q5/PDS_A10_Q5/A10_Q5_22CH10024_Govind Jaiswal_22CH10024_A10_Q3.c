/*
Name : Govind Jaiswal
Roll no. : 22CH10024
Section : 14
Assignment no. : 10
Description : Program to create union and intersection set of two given lists
*/

#include <stdio.h>
#include <stdlib.h>

struct list
{
	int num;
	struct list *next;
};
typedef struct list node;


node *createlist(node *head)    //function to create a list
{
	int num;
	node *ptr = head;     
	scanf("%d",&ptr->num);    //Enter "-99" to end the list
	if(ptr->num == -99)
		ptr->next = NULL;
	else
	{
		ptr->next = (node *)malloc(sizeof(node));
		ptr->next = createlist(ptr->next);
	}
			
}

node *unionset(node *head1 , node *head2)      //finding the union set
{
	node *unionhead;
	node *ptr = unionhead;
	node *ptr1 = head1;
	node *ptr2 = head2;
	while(ptr!=NULL)
	{
		if(ptr1->num==ptr2->num)
			ptr->num = ptr1->num;
		else
			ptr->num = ptr2->num;
	}
	print(unionhead);
}


node *intersection(node *head1 , node *head2)     //finding the intersection set
{
	node *interhead;
	node *ptr = interhead;
	node *ptr1 = head1;
	node *ptr2 = head2;
	while(ptr!=NULL)
	{
		if(ptr1->num==ptr2->num)
		{
			ptr->num = ptr1->num;
		}
	}
	print(interhead);
}

void print(node *head)
{
	node *ptr = head;
	while(ptr!=NULL)
	{
		printf("L (Intersection) = %d ",ptr->num);
	ptr = ptr->next;
	}
}
	
	
int main()
{
	node *head = (node *)malloc(sizeof(node));
	printf("Enter numbers in the 1st list \n");
	node *head1 = createlist(head);
	printf("Enter numbers in the 2nd list \n");
	node *head2 = createlist(head);
	node *_union = unionset(head1,head2);
	node *inter = intersection(head1,head2);    //calling the required functions
}
