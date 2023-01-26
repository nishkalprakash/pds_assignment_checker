/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 10
 Description : Program that checks whether a given linked list is in ascending order or not
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *link;
};

struct node *createList(int n)
{
	int d;
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->link=NULL;
	struct node *ptr = head;
	scanf("%d",&(head->data));
	for(int i=0;i<n-1;i++)
	{
		struct node* temp = malloc(sizeof(struct node));
		scanf("%d",&d);
		temp->data=d;
		temp->link=NULL;
		ptr->link = temp;
		ptr=temp;
		temp=NULL;
	}
	return head;
}
int MaxVal(struct node *head)
{
	int max=head->data;
	struct node*ptr = head;
	while(ptr->link!=NULL)
	{
		if(ptr->data>=max)
			max=ptr->data;
		ptr=ptr->link;
	}
	if(ptr->data>=max)
			max=ptr->data;
	return max;
}
int MinVal(struct node *head)
{
	int min=head->data;
	struct node*ptr = head;
	while(ptr->link!=NULL)
	{
		if(ptr->data<=min)
			min=ptr->data;
		ptr=ptr->link;
	}
	if(ptr->data<=min)
			min=ptr->data;
	return min;
}
int main()
{
	int n,curr,next,c=0;
	printf("Enter the number of elemets in the list: ");
	scanf("%d",&n);
	struct node *head= createList(n);
	struct node *ptr = head;
	while(ptr->link!=NULL)
	{
		curr = ptr->data;
		ptr=ptr->link;
		next = ptr->data;
		if(curr==next)
		{
			c++;
			if(c==1)
			{
				printf("The input list contains duplicate numbers of: %d",curr);
			}
			else
				printf(", %d",curr);			
		}
	}
	if(c==0)
	{
		printf("The input list does not contain any duplicate\n");
	}
	else
		printf(".\n");
	int min = MinVal(head);
	int max = MaxVal(head);
	printf("Minimum number is: %d\nMaximum number is: %d\n",min,max);
	return 0;						//int main function returns 0
}
