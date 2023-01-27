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

void main()
{
	printf("\n");

	int n;
	printf("Enter the number of elements : ");
	scanf("%d",&n);


	int A[n];

	printf("\nEnter the %d elements\n\n",n );
	for (int i = 0; i < n; ++i)
	{
		int a;
		printf("Enter element %d : ",i+1);
		scanf("%d",&a);
		A[i]=a;
	}

	printf("\n");

	struct node* p1,*head1=createlist(n,A);
	p1=head1;

	int n1;
	printf("Enter the number of elements : ");
	scanf("%d",&n1);


	int A1[n];

	printf("\nEnter the %d elements\n\n",n );
	for (int i = 0; i < n1; ++i)
	{
		int a;
		printf("Enter element %d : ",i+1);
		scanf("%d",&a);
		A1[i]=a;
	}

	struct node* p2,*head2=createlist(n,A);
	p2=head2;

	return;

}