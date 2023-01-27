/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:10
Description: Program to store only even number in list.
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


void printlist(struct node *head)
{
	while(head->next!=NULL)
	{
		printf("%d\t",head->data);
		head=head->next;
	}
}

void *even(struct node *head)
{
	struct node *p=head;
	struct node *q=p;
	q=q->next;
	while(q->next!=NULL)
	{
		if(q->data<10)
		{
		if((q->data)%2!=0)
		{
			p->next=q->next;
			free(p);
		}
	}
		if(q->data>9)
		{
		if((q->data)%2!=0&&((q->data)/10)%2!=0)
			{
			p->next=q->next;
			free(p);
		}
	}
		p=p->next;
		q=q->next;
	}
	return head;
}

int main()
{
	int n;
	struct node *head;
	printf("Enter the value of n\nn:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the numbers\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	head=createlist(n,a);
	even(head);
	printlist(head);
	return 0;
}