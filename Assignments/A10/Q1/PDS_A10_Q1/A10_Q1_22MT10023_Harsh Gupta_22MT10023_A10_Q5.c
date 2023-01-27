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
struct node *createList(int n,int arr[])
{
	int d;
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->link=NULL;
	struct node *ptr = head;
	head->data = arr[0];
	for(int i=1;i<n;i++)
	{
		struct node* temp = malloc(sizeof(struct node));
		d=arr[i];
		temp->data=d;
		temp->link=NULL;
		ptr->link = temp;
		ptr=temp;
		temp=NULL;
	}
	return head;
}
void printlist(struct node* I)
{
	struct node * ptr=I;
	while(ptr->link!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->link;
	}
	printf("%d",ptr->data);
}

void even(struct node *I)
{
	int n=1;
	struct node *ptr,*temp;
	while(ptr->link!=NULL)
	{
		n++;
		ptr=ptr->link;
	}
	ptr = I;
	if(n==1)
	{
		printlist(I);
		return;
	}
	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			temp = ptr->link;
			ptr->link = temp->link;
			free(temp);
			temp = NULL;
			ptr=ptr->link;
			i++;
		}
	}
	printlist(I);
}
int main()
{
	int n;
	printf("Enter the number of elemets in the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elemets: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	struct node* head = createList(n,arr);
	even(head);
	return 0;
}
