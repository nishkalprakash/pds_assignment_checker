/*Section:14
Roll no:22MI31025
Name:Siddharth Raj
Lab Test:2
Seat A
Question no:1
description:*/


#include <stdio.h>
#include <stdlib.h>
struct list{
	int data;
	struct list * next;
};
struct list* init(int a)
{
	struct list*ptr;
	ptr=(struct list*)malloc(sizeof(struct list));
	ptr->data=a;
	ptr->next=NULL;
	return ptr;
}
struct list* createlist(int a[100],int n)
{
	struct list*head=NULL;
	struct list*tail=NULL;
	struct list*ptr=NULL;
	for(int i=0;i<n;i++)
	{
		if(head==NULL)
		{
			ptr=init(a[i]);
			head=ptr;
			tail=head;
		}
		else
		{
			ptr=init(a[i]);
			tail->next=ptr;
			tail=ptr;
		}
	}
	return head;
}
void printnewlist(struct list*head,struct list*head1)//prints L1+L2
{
	struct list *temp=head1;
	while(head!=NULL)
	{
		while(head1!=NULL)
		{
			printf("%d ",head->data+head1->data);
			head1=head1->next;
		}
		head=head->next;
		head1=temp;
	}
}
void printlist(struct list*head)//prints the list
{
	if (head==NULL)
		printf("List is empty\n");
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}
}
int main()
{
      struct list*head;
      struct list*head1;
      int n;int n1;//size of arrays
      int i;
      printf("Enter number of elements:");
      scanf("%d",&n);
      int a[n];
      for(i=0;i<n;i++)
      	scanf("%d",&a[i]);//accept elemnets in a list
      head=createlist(a,n);//creates a list
      printf("Enter number of elements:");
      scanf("%d",&n1);
      int b[n1];
      for(i=0;i<n1;i++)
      	scanf("%d",&b[i]);
      head1=createlist(b,n1);//creates the list
      printf("L1:");printlist(head);//prints
      printf("\n");
      printf("L2:");printlist(head1);
      printf("\n");
      printf("L1+L2:");printnewlist(head,head1);
}


