/*
*	section 14
*	Name: Souvik Sarkar
*	Roll no.: 22ME10083
*	Assignment: 11
*	Question no.:4
*	
*/
//programme to delete an element from a list
#include<stdio.h>
#include<stdlib.h>

//structure initialization
struct node{
	int data;
	struct node* next;
};
// function declaration 
struct node *createlist(int n){
	struct node *head,*newnode,*temp;
	head=NULL;
	for(int i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			temp=head;
		}
		else
		{
			temp->next=newnode;//Taking the base case of the new node
			temp=newnode;
		}		
	}
	return head;
}
// Creating function for printing the elements 
void printlist(struct node *l1)
{
	struct node *temp;
	for(temp=l1;temp!=NULL;temp=temp->next)
	{
		printf("%d ",temp->data);
	}

}
//crating a function to delete an element
struct node *del(struct node *h, int n)
{
	struct node *h2,*t,*p;// t to traverse to the previous, h traveres next to the deleting node., h2 acts as a new head
	h2=h;
	while(n!=h->data && h->next !=NULL)
	{
		t=h;
		h=h->next;
	}
	if(h->next==NULL)
		printf("\n%d does not exist in linked list\n",n);
	else
	{	
		p=h;
		h=h->next;
		free(p);//deleting the node containg the the value
		t->next=h;
	}	
	return h2;
}
void main()
{
	int n1;//for total no. of elements 
	int n2;// deleting the  value
	struct node *f1,*f2;
	printf("Create the list: enter total no. of elements\n");
	scanf("%d",&n1);
	f1=createlist(n1);
	printf("Before deleting new value:\n");
	printlist(f1);
	//adding a new node
	printf("\nEnter the no. which you want to delete:\n");
	scanf("%d",&n2);
	f2=del(f1,n2);
	printf("After deleting a new value: \n");
	printlist(f2);

}