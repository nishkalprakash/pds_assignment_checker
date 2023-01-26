/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:10
description:
*/
#include<stdio.h>
#include<stdlib.h>
struct node   //definig structure
{
	int d;
	struct node* next;
};
typedef struct node ele;
typedef ele* attach;
struct node* createlist(int n,int A[])
{
attach h,t;
h=(attach)malloc(sizeof(ele));
h->d=A[0];
t=h;
for (int i=0;i<n;i++)
{
t->next=(attach)malloc(sizeof(ele));
t->d=A[i];
t=t->next;
}
t=NULL;
return h;
}
void printlist( node* h)
{
do
{
printf("%d",h->d);
h=h->next;
}
while(h!=NULL);
}
void even(struct node* h)
{
attach prev,ptr;
prev=h;
ptr=h;

if(ptr->d2!==1)
{
ptr=ptr->next;
h->next=NULL;
{
while(ptr!=NULL)
{
if(ptr->d%2==1)
{
prev->next=ptr->next;
}
}
printlist(h);
}

int main()
{
int a[]={1,2,3,4,5};
int n=5;
attach head=createlist(5,a);
even(h);
return 0;
}

