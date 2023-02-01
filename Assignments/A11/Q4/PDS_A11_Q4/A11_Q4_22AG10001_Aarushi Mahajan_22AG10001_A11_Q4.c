/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 11
Description : Program to print sum of harmonic series upto n.
*/

#include <stdio.h>
#include <stdlib.h>
 
struct node {
int data;
struct list * next;
};

struct node * insert (struct node * head, int x)
{
   struct node *newnode, *temp;
   newnode= (struct node *)malloc(sizeof(struct node));
   newnode->data=x;
   newnode->next=NULL;
   if (head==NULL)
   {
	head= newnode;
	return head;
   }
   for (temp=head;temp->next!=NULL;temp=temp->next);
   temp->next=newnode;
   return head;
}
 
void printlist(struct node *head)
{
   struct node *temp;
   for (temp=head;temp!=NULL;temp=temp->next)
   {
	printf("%d ->",temp->data);
   }
}

int main()
{
   int n,m,i;
   struct node *head=NULL;
   printf("Enter number of nodes.\n");
   scanf("%d",&n);
   for (i=0;i<n;i++)
   {
	printf("Enter value to be inserted.\n");
	scanf("%d",&m);
	head= insert(head,m);
   }
   printlist(head);
   return 0;
}
