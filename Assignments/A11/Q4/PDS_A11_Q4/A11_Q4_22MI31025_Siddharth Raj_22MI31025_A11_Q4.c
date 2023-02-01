/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:11
Question no:4
description:deletion*/

#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node* next;
}*first=NULL;//create list
void create(int a[],int n)//creates the linked list lastinsert
{
	struct node* temp,*last;
	first=(struct node*)malloc (sizeof(struct node));
	first->data=a[0];
	first->next=NULL;
	last=first;
	for(int i=1;i<n;i++)
	{
		temp=(struct node* )malloc(sizeof(struct node));
		temp->data=a[i];
		temp->next=NULL;
		last->next=temp;
		last=temp;//update rear
	}
}
void print(struct node* ptr)
{
	while(ptr)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("\n");
}
void delete(struct node *ptr,int m)
{
	struct node *q;
	if(ptr->data==m)
	{
		q=ptr;
		ptr=ptr->next;
		first=ptr;
		free(q);
	}
	else
	{
		while(ptr->data!=m)//finds element position whose value equals m
		{
			q=ptr;
			ptr=ptr->next;
		}
		if(ptr->data==m)//deletes the element if found else prints does not exist 
		{
			q->next=ptr->next;
			free (ptr);
		}
		else
		{
			printf("Element does not exist\n");
		}
	}
}
int main()
{
	int n;int i;int m;
	printf("Enter n:");
	scanf("%d",&n);//number of elements
	int a[n];
	printf("Enter elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);//input elements in list
	create(a,n);//call create
	printf("Enter elemnet to be deleted:");
	scanf("%d",&m);//number to be deleted
	delete(first,m);
	print(first);
	return 0;
}