// Name Bonthu Matthews
// Roll number:: 22PH100013
// Assignment 10 
#include <stdio.h>
#include <stdlib.h>
typedef struct list
{
	int data;
	struct list* next;
}list;
typedef list* link;
link crnode(int val)
{
	link new1;
	new1=(link)malloc(sizeof(list));
	new1->data=val;
	new1->next=NULL;
	return new1;
}
link createlist(int val, link head, link *prev)
{
link newp, first;
first=head;
newp=crnode(val);
if(head==NULL)
  {
	first=newp;
	*prev=newp;
	return first;
   }
(*prev)->next=newp;
*prev=newp;
return first;
}
int asc(link head)
{
	link temp;
	temp=head;
	while(temp->next!=NULL)
	{
		if(temp->data>temp->next->data)
			temp=temp->next;
	}
	return 1;
}
int dsc(link head )
{
	link temp;
	temp=head;
	while(temp->next!=NULL)
	{
		if(temp->data<temp->next->data)
		{
			temp=temp->next;
		}
	}
	return 1;
}

int main ( )
{
	printf("enter the elements\n");
	printf("enter -1 to stop\n");
	link head,tail;
	head=NULL;
	tail=NULL;
	int n;
	while(1)
	{
		scanf("%d",&n);
		// printf("\n%d\n",n);
		if(n==0)
		{ 
			break;
		}
		fflush(stdin);
		// printf("%d\n",n);
		head=createlist(n,head,&tail);
	}
	if(asc(head)) printf("the input is in ascending order");
	else if(dsc(head)) printf("the input is in descending order");
	else printf("the input list is not sorted in order");
}