/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 11
Description : delete element between linked list
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *next;
}node;
node *createlist( int n, int A[]) //convert array to linked list
{
	node *head,*tail;
	head=(node*)malloc(sizeof(node));
	head->data=A[0];
	tail=head;
	for(int i=1;i<n;i++)
	{
		tail->next=(node*)malloc(sizeof(node));
		tail=tail->next;
		tail->data=A[i];
	}
tail=NULL;
return head;
}
void printlist(node* l) //to print linked list
{
do
{
	printf("%d ",l->data);
	l=l->next;
}while(l!=NULL);
}
node *delete(node *ptr,int d) //function to delete element
{
	node *prev,*first;
	first=ptr;
	if(ptr==NULL)
	return NULL;
	else if(d==ptr->data)
	{
		ptr=ptr->next;
		first->next=NULL;
		free(first);
		return ptr;
	}
	else
	{
		prev=ptr;
		ptr=ptr->next;
		while(ptr!=NULL &&d!=ptr->data)
		{
			prev=ptr;
			ptr=ptr->next;
		}
		if(ptr==NULL|| d!=ptr->data)
		return ptr;
		else
		{
			prev->next=ptr->next;
			ptr->next=NULL;
			free(ptr);
			return first;
		}
	}
}
int search(node *head, int delete) //searching node if present or not
{
	node *temp;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==delete)
		return 1;
		temp=temp->next;
	}
	return 0;
}
int main()
{
	int n,del;
	printf("Enter number of element in a list ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	node *head=createlist(n,a);
	printf("Enter value to be deleted ");
	scanf("%d",&del);
	if(search(head,del))
	{
		node *rd=delete(head,del);
		printf("Output after deleting %d :\n", del);
		printlist(rd);
	}
	else
	{
		printf("%d element does not exist", del);
	}
	return 0;
}
