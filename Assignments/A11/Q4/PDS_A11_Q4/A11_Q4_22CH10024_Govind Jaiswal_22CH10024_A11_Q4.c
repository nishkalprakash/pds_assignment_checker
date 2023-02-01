/*
Name : Govind Jaiswal
Roll no : 22CH10024
Section : 14
Assignment no : 11
Description : Program to delete a given value from a list
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct list     //structure for creating list
{
	int data;
	struct next *next;
}element;
typedef element* link;

link createlist(int n)    //link creation
{
	link head = NULL,ptr;
	head =  (link)malloc(sizeof(element));
	ptr = head;
	while(1)
	{
		ptr->data = n;
		printf("Enter next element\n");
		scanf("%d",&n);
		if(n==-999)
		{
			ptr->next = NULL;
			break;
		}
		else
		{
			ptr->next = (link)malloc(sizeof(element));
			ptr = ptr->next;
		}
	}
	return head;
}

link delete(link head,int val)    //deleting a value
{
	link ptr = head;
	while(ptr->data !=-999)
	{
		if(val!=ptr->data)
		{
			printf("\n%d does not exist\n",val);
			break;
		}
		while(val==ptr->data)
		{
			free(ptr);
			ptr=ptr->next;
			return head;
		}
		
	}
}

void print(link head)     //printing the final list
{
	if(head==NULL)
	{
		printf("\n");
	}
	else
	{
		printf("%d ",head->data);
		print(head->next);
	}
}
	
int main()
{
	link head = NULL,ptr;
	int n,val;
	printf("Enter 1st element(Enter -999 to end the list)\n");
	scanf("%d",&n);
	head = createlist(n);
	printf("LL[n] = ");
	print(head);

	printf("Enter value to be deleted ");
	scanf("%d",&val);

	delete(head,val);
	
	print(head);     /*calling the required functions*/
	return 0;
}
