// Name Bonthu Matthews
// Roll number:: 22PH100013
// Assignment 10 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node
{
	int data;
	struct Node* next;
};
void pushi(struct Node**head_ref, int new_data);
bool ispresent(struct Node*, int data);
struct Node* getunion(struct Node*head1,struct Node*head2)
{
	struct Node*result=NULL;
	struct Node*t1=head1,*t2=head2;
	while(t1!=NULL)
	{
		push(&result,t1->data);
		t1=t1->next;
	}
	while(t2!=NULL)
	{
		if(!ispresent(result,t2->data))
		{
			push(&result,t2->data);
			t2=t2->next;
			return result;
		}
	}
}
struct Node* getintersection(struct Node* head1, struct Node* head2)
{
	struct Node*result=NULL;
	struct Node*t1=head1;
	while(t1!=NULL)
	{
		if(ispresent(head2,t1->data))
			push(&result,t1->data);
		t1=t1->next;
	}
	return result;
}
pushi(struct Node** head_ref,int new_data)
{
	struct Node*new_node= (struct Node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}
void printlist(struct Node* node)
{
	while(node!=NULL)
	{
		printf("%d ",node->data);
		node=node->next;
	}
}
bool ispresent(struct Node* head, int data)
{
	struct Node*t=head;
	while(t!=NULL)
	{
		if(t->data==data)
			return 1;
		t=t->next;
	}
	return 0;
}
int main ( )
{
	struct Node*head1= NULL;
	struct Node*head2=NULL;
	struct Node*intersec=NULL;
	struct Node*unin=NULL;

	pushi(&head1,20);
	pushi(&head1,21);
	pushi(&head1,22);

	pushi(&head2,22);
	pushi(&head2,23);
	pushi(&head2,24);

	intersec=getintersection(head1,head2);
	unin=getunion(head1,head2);
	printlist(intersec);
	printlist(unin);
	return 0;
}