/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:10
Question no:1
description:create list*/
#include <stdio.h>
#include <stdlib.h>
struct list{
	int data;
	struct list*next;
}*first=NULL;
void create(int a[],int n){
	struct list*t,*last;
	first=(struct list*)malloc (sizeof(struct list));
	first->data=a[0];
	first->next=NULL;
	last=first;
	for(int i=1;i<n;i++)
	{
		t=(struct list*)malloc (sizeof(struct list));
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}
void print(struct list* p)//prints original elemnts
{
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("\n");
}
void even(struct list *p)//prints even elements
{
	int count=1;
	p=p->next;
	first->next=NULL;
	first=p;
	struct list*prev;
	prev=first;
	while((p->next)!=NULL)
	{
		count++;
		if(count%2!=0)
		{
			prev->next=p->next;
			p->next=NULL;
		}
		prev=p;
		p=p->next;
	}
}
void printlist(struct list*p)
{
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
int main()
{
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements:");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	create(a,n);//call create
	print(first);//call print
	even(first);//call even
	printlist(first);//call printlist
}