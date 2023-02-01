/*
*	section 14
*	Name: Souvik Sarkar
*	Roll no.: 22ME10083
*	Assignment: 11
*	Question no.:3
*	
*/
//programme to 
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

//function to add newnode
struct node *add(struct node *h, int n)
{
	struct node *h2,*t,*nn;//nn to create add new no., t to traverse to the previous, h traveres next to the new no., h2 acts as an head
	h2=h;
	while(n> h->data)
	{
		t=h;
		h=h->next;
	}
	nn=(struct node*)malloc(sizeof(struct node));
	nn->data=n;
	t->next=nn;
	nn->next=h;
	return h2;
}
void main()
{
	int n1;//for total no. of elements 
	int n2;// adding the new value
	struct node *f1,*f2;
	printf("Create the list: enter total no. of elements\n");
	scanf("%d",&n1);
	f1=createlist(n1);
	printf("Before adding new value:\n");
	printlist(f1);
	//adding a new node
	printf("\nEnter the new no.:\n");
	scanf("%d",&n2);
	f2=add(f1,n2);
	printf("After adding a new value: \n");
	printlist(f2);

}