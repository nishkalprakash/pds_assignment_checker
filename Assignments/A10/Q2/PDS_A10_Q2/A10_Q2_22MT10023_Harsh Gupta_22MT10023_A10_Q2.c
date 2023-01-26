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
void isAsc(struct node *head,int n)
{
	int curr,next;
	struct node *ptr = head;
	for(int i=0;i<n-1;i++)
	{
		curr = ptr->data;
		ptr=ptr->link;
		next = ptr->data;
		if(curr>next)
		{
			printf("The input list L is not in sorted order.");
			return;
		}
	}
	printf("The input list L is in ascending order");
}
struct node *Add_at_end(struct node*ptr,int d)
{
	struct node* temp = malloc(sizeof(struct node));
	temp->data=d;
	temp->link=NULL;
	ptr->link = temp;
	return temp;
}
int main()
{
	int n,data;
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->link=NULL;
	printf("Enter the length of the list: ");
	scanf("%d",&n);
	struct node *ptr = head;
	printf("Enter the list:\n");
	scanf("%d",&(head->data));
	for(int i=1;i<n;i++)
	{
		scanf("%d",&(data));
		ptr=Add_at_end(ptr,data);
	}
	ptr=head;
	isAsc(head,n);
	return 0;						//int main function returns 0
}
