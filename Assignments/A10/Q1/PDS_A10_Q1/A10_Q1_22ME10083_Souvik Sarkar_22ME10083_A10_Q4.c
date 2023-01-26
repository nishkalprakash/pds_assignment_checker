/*
*	section 14
*	Name: Souvik Sarkar
*	Roll no.: 22ME10083
*	Assignment: 10
*	Topic:LINKED LIST
*	Question no.:4
*	
*/
//programme operate the even no of link list
#include<stdio.h>
#include<stdlib.h>
//Globally Declaration of linked list
struct node{
	int data;
	struct node* next;
};
void printlist(struct node *l1)
{
	struct node *temp;
	for(temp=l1;(temp!=NULL && (temp->data%2==0));temp=temp->next)
	{
		printf("%d ",temp->data);
	}

}
// function defining
struct node *createlist(int n , int A[]){
	struct node *head,*newnode,*t;
	head=NULL;
	for(int i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=A[i];
		newnode->next = NULL;
		if(head==NULL)
		{	
			// first node
			head=newnode;
			t=head;
		}
		else
		{
			t->next=newnode;//Taking the base of the new node
			t=newnode;
		}		
	}

	return head;
}
void even(struct node *l, int n)
{
	struct node *temp;
	temp=l;
	for(int i=0;i<n;i++){
		if(l->data%2==0){
			temp->data=l->data;
			temp=temp->next;
		}
		l=l->next;
	}
	l=temp;

}

void main()
{
	//varriable initialization
	struct node  *l1;
	int i,n;
	printf("Enter The total no. of elements:\n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	l1=createlist(n,a);
	even(l1,n);
	printlist(l1);



}