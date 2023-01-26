/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 10
*/
#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int data ;
	struct node * next ;
} ;


struct node* createlist(int n,int A[])
{
	struct node * head,*ptr;
	head=ptr=(struct node*)malloc(sizeof(struct node));

	for (int i = 0; i < n; ++i)
	{
		ptr->data=A[i];
		if (i==n-1)
		{
			ptr->next=NULL;
			ptr=ptr->next;
		}
		else
		{
			ptr->next=(struct node*)malloc(sizeof(struct node));
			ptr=ptr->next;
		}
	}

	return head;
}

void printlist(struct node * l)
{
	printf("The elements in the list are : ");

	for (; l!=NULL;)
	{
		printf("%d  ",l->data);
		l=l->next;
	}
	printf("\n");
}

void even(struct node *l)
{
	struct node* p=l->next;

	for (int i=1;p!=NULL && p->next!=NULL;i++)
	{
		if(i%2==1)
			p->next=p->next->next;
		p=p->next;
	}
	
}

int main()
{
	printf("\n");

	int n;
	printf("Enter the number of elements(n<10) : ");
	scanf("%d",&n);

	if (n<0 || n>9)
	{
		printf("Wrong Input!!!!\n");
		exit(0);
	}

	int A[n];

	printf("Enter the %d elements\n",n );
	for (int i = 0; i < n; ++i)
	{
		int a;
		printf("Enter element %d : ",i+1);
		scanf("%d",&a);
		A[i]=a;
	}

	struct node* head=createlist(n,A);
	printlist(head);
	even(head);
	head=head->next;
	printlist(head);

	return 0;
}