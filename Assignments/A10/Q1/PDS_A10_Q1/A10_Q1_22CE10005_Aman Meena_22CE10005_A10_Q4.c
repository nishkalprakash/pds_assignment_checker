
/*
Section 14

Roll No : 22CE10005

Name : #Aman Meena#

Assignment No : 9*/


#include<stdio.h>
#include<stdlib.h>
       
        struct node{

  	int data;

  	struct list *next;
	};

 	struct node *createlist(int n,int A[])
	{

        struct node*head=NULL;

        struct node*tail;

        int i;

        head =(struct node*)malloc(size of(struct Node));
	head->data =A[0];

	tail=head
	for(i=1;i<n;i++)
	{
	tail->next={struct node*)malloc(sizeof(struct node();
	tail=tail->next;
	tail->data=A[i];
	}

	tail->next=NULL;
	return head;
	}
	void printlist(struct node*I)

	{
	struct node*temp;
	temp=I;
	while(temp!=NULL)

	{
	if(temp->next==NULL)
	printf("%d END OF LIST\n",temp->data);
	else
	printf("%d ->",temp->data);


	temp =temp->data;

	}
	}
	void even(struct node*I)
	{

	 struct node*head;
	struct node *ptr;
	struct node *prev;
	head=I
	if(head->data)%2!=0);
	head =I->next;
	free(I);
	ptr= head;
	while(ptr!=NULL)
	{
	prev=ptr;
	ptr=ptr->next;
	if(ptr->data)%2!=0)
	{


	prev->next=ptr->next;
	free(ptr);
	}
        }

	}
	int main()
	{functionfuntion
	int i,n;
	struct node*I;

	int a[10];
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter the elements\n");


	for(i=0;i<n;i++)
	printlist(I);
	return 0;
