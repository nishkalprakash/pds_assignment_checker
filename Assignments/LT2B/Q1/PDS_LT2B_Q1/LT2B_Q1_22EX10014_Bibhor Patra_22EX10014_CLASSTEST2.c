/*

Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Class test 2


*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct SET{
	int data;
	struct SET* next;

}SET;
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
int main()
{
	return 0;
}