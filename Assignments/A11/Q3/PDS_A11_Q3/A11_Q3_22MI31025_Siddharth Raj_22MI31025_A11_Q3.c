/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:11
Question no:3
description:insertion*/

#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node* next;
}*first=NULL;//create list
void create(int a[],int n)//creates the linked list
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
void print(struct node* p)
{
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
void insert(struct node* p,int x)//inserts element
{
	struct node* t,*q;
	t=(struct node*)malloc (sizeof(struct node));//create node
	t->data=x;
	t->next=NULL;
	if(x<p->data)//runs till the number is less than x that is element to be input
	{
		t->next=p;
		first=t;
	}
	else{
		while(x>p->data && p)//link the lists
		{
			q=p;
			p=p->next;
		}
		q->next=t;
		t->next=p;
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
	create(a,n);
	printf("Enter elemnet to be inserted:");
	scanf("%d",&m);//number to be input
	insert(first,m);
	print(first);//print the list
	return 0;
}