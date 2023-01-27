/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab:10
Question no:4
description:ascending*/

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
int check()
{
	struct list*temp=head;
	struct list*prev=head;
    int aflag=0;int count=1;int dflag=0;
    //checking ascending and descending order
	if(count==1)
	{
		temp=temp->next;count++;
	}
	while(temp!=NULL)//traverse list
	{
		if((prev->data)<(temp->data))
			aflag=1;
		else
			{aflag=0;break;}
		prev=temp;
		temp=temp->next;
	}
	if(aflag==1)
		return 1;
	temp=prev=head;count=1;//reinitialize
	if(count==1)
	{
		temp=temp->next;count++;
	}
	while(temp!=NULL)
	{

		if((prev->data)>(temp->data))
			dflag=1;
		else
			{dflag=0;break;}
		prev=temp;
		temp=temp->next;
	}
	if(dflag==1)
		return -1;
	if(aflag==0&&dflag==0)
		return 0;
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
	int x= check();//checks ascending and descending order
	if(x==1)
		printf("Ascending order\n");
	else if(x==-1)
		printf("Descending order\n");
	else
		printf("Not sorted\n");
	return 0;
}
