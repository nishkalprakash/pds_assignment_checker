/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:10
description:find maximum ,minimum or duplicate numbers in given list
*/
#include<stdio.h>
#include<stdlib.h>

{
	struct node;
	int data;
	struct node* next;
};
	int largestelement(struct node* head)
{
	int max=INT_MIN;
	while(head!=NULL)
	{
		if(min>head->data)
		head=head->data;
		head=head->next;
	}
	return min;
}
	void push(struct node** head,int data)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=(*head);
	(*head)=newnode;
}
	void printlist(struct node* head)
{

	while(head!=NULL)
	{
		printf("%d->",head->data);
		head=head->next;
	}
	printf("NULL\n");
}
int main()
int n;
printf("enter list elements");
int a[n];
for (int i=0;i<n;i++)
scanf("%d",&a[i]);
return 0;
}
scanf("



