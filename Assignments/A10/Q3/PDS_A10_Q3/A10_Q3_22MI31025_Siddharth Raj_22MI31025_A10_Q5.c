/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:10
Question no:5
description:maximum minimum*/

#include <stdio.h>
#include <stdlib.h>
//define structure
struct list{
	int data;
	struct list*next;
};
struct list *head;//head and tail pointers
struct list* tail;
void insert()
{
	int value;
	struct list*ptr;
	ptr=(struct list*)malloc (sizeof (struct list));
	printf("Enter value:");
	scanf("%d",&value);//accept value
	if(head==NULL)
	{
	    head=ptr;
	    tail=head;
	    ptr->data=value;
	    ptr->next=NULL;
	}
	else
	{
		tail->next=ptr;//link the previous and current list
		tail=ptr;
		ptr->data=value;
		ptr->next=NULL;
	}
}
void maximum()
{
	struct list*temp=head;
	struct list*prev=head;
	int max=head->data;
	while(temp!=NULL)//traverse list
	{
		if((temp->data)>max)
			max=temp->data;
		temp=temp->next;
	}
	printf("Maximum is:%d\n",max);//prints maximum
}
void minimum()
{
	struct list*temp=head;
	struct list*prev=head;
	int min=head->data;
	while(temp!=NULL)//traverse list
	{
		if((temp->data)<min)
			min=temp->data;
		temp=temp->next;
	}
	printf("Minimum is:%d\n",min);//prints minimum
}
int main()
{
	int n;
	printf("Enter no of elements in the list:");
	scanf("%d",&n);//accept no of elements
	printf("Enter elements:\n");
	for(int i=0;i<n;i++)
	{
		insert();//inserts element
	}
	maximum();//call maximum
	minimum();//call minimum
}