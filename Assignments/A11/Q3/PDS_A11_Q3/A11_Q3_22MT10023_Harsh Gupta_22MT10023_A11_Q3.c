/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 11
 Description : Program that adds an element to a linked list in a sorted way
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* link;
};

struct node* CreateList(int arr[],int n)
{
	int d;
	d=arr[0];
	struct node *head = (struct node*)malloc(sizeof(struct node));
	head->data = d;
	head->link = NULL;
	struct node *ptr = head;
	for(int i=1;i<n;i++)
	{
		d=arr[i];
		struct node*temp = (struct node*)malloc(sizeof(struct node));
		temp->data = d;
		temp->link = NULL;
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
		printf("%d ",ptr->data);
		ptr=ptr->link;
	}
	printf("%d ",ptr->data);
}
struct node* AddNewElement(struct node*head,int n, int m,int count)
{
	if(count==0)
	{
		struct node*temp = (struct node*)malloc(sizeof(struct node));
		temp->data = m;
		temp->link = head;
		head=temp;
		temp=NULL;
	}
	else if(count>=1&&count<n)
	{
		struct node*temp = (struct node*)malloc(sizeof(struct node));
		temp->data = m;
		temp->link = NULL;

		struct node*ptr = head;
		for(int i=1;i<count;i++)
		{
			ptr=ptr->link;
		}
		temp->link=ptr->link;
		ptr->link = temp;
	}
	else if(count==n)
	{
		struct node*temp = (struct node*)malloc(sizeof(struct node));
		temp->data = m;
		temp->link = NULL;
		struct node*ptr = head;
		for(int i=1;i<n;i++)
		{
			ptr=ptr->link;
		}
		ptr->link =temp;
	}
	return head;
}
struct node* Traverse(struct node*head, int n,int m)
{
	int c=1;
	struct node*ptr = head;
	struct node*temp = ptr->link;
	while(1)
	{
		if(ptr->data>=m && temp->data>m)
		{
			return AddNewElement(head,n,m,0);
		}
		else if(ptr->data<=m && temp->data>m)
		{
			return AddNewElement(head,n,m,c);
		}
		else if(ptr->data<=m && temp->data<=m)
		{
			if(c<n-1)
			{
				c++;
				ptr=temp;
				temp=temp->link;
			}
			else
			{
				return AddNewElement(head,n,m,n);
			}
		}
	}
}
int main()
{
	int n,m;
	printf("Enter the length of Linked List: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in the Linked List in sorted order:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to be added: ");
	scanf("%d",&m);

	struct node *head = (struct node*)malloc(sizeof(struct node));
	head = CreateList(arr,n);
	head = Traverse(head,n,m);
	printlist(head);
	
	printf("\n");
	return 0;					//int main function returns 0
}
