/*
Name : Govind Jaiswal
Roll no. : 22CH10024
Section : 14
Assignment no. : 10
Description : Program to check if the list is in ascending or descending order
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

void duplicate(node *head)    //function to check for duplicate elements
{
}

void max(node *head)        //function to find maximum element
{
	int num,max;
	node *ptr = head;
	max = ptr->num;
	while(ptr!=NULL)
	{
		if((ptr->num)>max)
		{
			max = ptr->num;
			printf("Maximum number is: %d\n",max);
			break;
		}
	}
	
}

void min(node *head)       //function to find minimum element
{
	int num,min;
	min = head->num;
	node *ptr = head;
	while(ptr!=NULL)
	{
	
void max(node *head)	if((ptr->num)<min)
		{
			min = ptr->num;
			printf("Minimum number is: %d\n",min);
			break;
		}
	}
}

int main()
{
	node *head = (node *)malloc(sizeof(node));        //dynamically allocating memory 
	printf("Enter numbers in the list \n");
	head = createlist(head);
	max(head);
	min(head);    //calling the required functions
}
