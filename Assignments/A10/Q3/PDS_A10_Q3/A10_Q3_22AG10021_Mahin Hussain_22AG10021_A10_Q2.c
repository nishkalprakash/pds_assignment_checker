/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:10
Description: Program to find any duplicate numbers.
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

void duplicate(struct node *head)
{
	int f=0,rep=0,a[10];
	
	struct node *p=head,*q=head;
	while(p->next!=0)
	{
		while(q->next!=0)
		{
			if(p->data==q->data)
				{
					rep++;
					a[f]=p->data;
				}
				f++;
			q=q->next;
		}
		p=p->next;
	}
	printf("The input list contains duplicate number of:");
	for(int i=0;i<9;i++)
	{
		if(a[i]!=0)
			printf("%d,",a[i]);
		if(a[10]!=0)
			printf("%d",a[10]);
	}
	if(rep==0)
		printf("The input list does not contain any duplicate");
}

int main()
{
	int n;
	struct node *head;
	printf("Enter how many numbers you will input");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	head=createlist(n,a);
	duplicate(head);
	return 0;
}

