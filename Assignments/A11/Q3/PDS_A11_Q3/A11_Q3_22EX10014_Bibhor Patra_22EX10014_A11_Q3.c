/*

Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment 11
Description: Program to insert new value to a already sorted linked list

*/
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;

}*first=NULL;
void create(int a[], int n)
{
	struct node*t, *last;
	first=(struct node*)malloc(sizeof(struct node));
	first->data=a[0];
	first->next=NULL;
	last=first;
	for(int i=1;i<n;i++)
	{
		t=(struct node*)malloc(sizeof(struct node));
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void print(struct node*p)
{
	while(p)
	{
		printf("%d",p->data);
		p=p->next;
	}
	printf("\n");
}
void insert(struct node*p, int x)
{
	struct node*t,*q;
	t=(struct node*)malloc(sizeof(struct node));
	t->data=x;
	t->next=NULL;
	if(x<p->data)
	{
		t->next=p;
		first=t;
	}
	else
	{
		while(x>p->data && p)
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
    int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	create(a,n);
	int k;
	scanf("%d",&k);
	insert(first,k);
	print(first);
	return 0;
}