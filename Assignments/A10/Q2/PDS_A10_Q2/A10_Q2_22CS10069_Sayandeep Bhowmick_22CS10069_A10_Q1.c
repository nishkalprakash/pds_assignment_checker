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

	// if (n<0 || n>9)
	// {
	// 	printf("Wrong Input!!!!\n");
	// 	exit(0);
	// }

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

	struct node* p,*head=createlist(n,A);
	p=head;

	int flag=0;

	if(head->next==NULL)
	{
		printf("Only a single element is present. So order is not defined\n\n");
		return;
	}

	else if (head->data>head->next->data)
	{
		while(p->next!=NULL)
		{
			if(p->data<p->next->data)
			{
				flag=1;
				break;
			}
			p=p->next;
		}

		if (flag==0)
		{
			printf("The input list is in descending order\n\n");
			return;
		}

	}

	else if(head->data<head->next->data)
	{
		while(p->next!=NULL)
		{
			if(p->data>p->next->data)
			{
				flag=1;
				break;
			}
			p=p->next;
		}

		if (flag==0)
		{
			printf("The input list is in ascending order\n\n");
			return;
		}

	}

	printf("The input list is not in sorted order\n\n");
	return;

}