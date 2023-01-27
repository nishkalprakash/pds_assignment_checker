/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:10
Description: Program to check if lst is in sorted order or not.
*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};

struct node *createlist(int n,int A[])
{
	struct node *head,*p=head;
	p=(struct node *)malloc(sizeof(struct node));
	p->data=A[0];
	p->next=NULL;
	head=p;
	for(int i=1;i<n-1;i++)
	{
		p->next=(struct node *)malloc(sizeof(struct node));
		p=p->next;
		p->data=A[i];
	}
	p->next=NULL;
	return(head);
}

void check(int *head)
{
	struct node *p=head;
	struct node *q=p;
	q=q->next;
	int f=0,c=0;
	while(q->next!=NULL)
	{
		if(p->data<q->data)
			
	}
}


