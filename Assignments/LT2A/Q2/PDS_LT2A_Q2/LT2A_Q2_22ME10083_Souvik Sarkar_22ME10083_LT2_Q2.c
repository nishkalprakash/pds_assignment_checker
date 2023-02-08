/*
*	section 14
*	Name: Souvik Sarkar
*	Roll no.: 22ME10083
* 	SET:A
*	LAB test:2 
*	Question no.:2
*	
*/
//programme to addition of two set
#include<stdio.h>
#include<stdlib.h>
//Globally Declaration of linked list
struct node{
	int data;
	struct node* next;
};
// function declaration for creating list
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
			newnode->next=NULL;

		}		
	}
	return head;
}
//printing the list
void printlist(struct node *l1)
{
	struct node *temp;
	for(temp=l1;temp!=NULL;temp=temp->next)
	{
		printf("%d ",temp->data);
	}
}
//adding the sets(maiin logic)
struct node *add(struct node *l1, struct node *l2)
{
	struct node *l,*newhead,*temp,*t1,*t2;
	newhead=NULL;
	for(t1=l1;t1!= NULL;t1=t1->next)
	{
		for( t2=l2;t2!= NULL; t2=t2->next)
		{
			temp=(struct node*)malloc(sizeof(struct node));
			temp->data = t1->data + t2->data;
			if(newhead==NULL)
			{
				newhead=temp;
				l=newhead;
			}
			else
			{
				l->next=temp;
				l=temp;
				temp->next = NULL;
			}
		}
	}
	return newhead;
	
}
void main()
{
	struct node *l1,*l2,*l;
	int n1,n2;
	printf("Enter the 1st set:\n");
	printf("\nThe total no. of elements:\n");
	scanf("%d",&n1);
	printf("Now entr the elements\n");
	l1=createlist(n1);//creating 1st set
	printf("Enter the 2st set:\n");
	printf("\nThe total no. of elements:\n");
	scanf("%d",&n2);
	printf("Now entr the elements\n");
	l2=createlist(n2);//creating 2nd set
	printlist(l1);
	printf("\n");
	printlist(l2);
    printf("\n");
    l=add(l1,l2);
    printf("Final result:\n");
    printlist(l);
}