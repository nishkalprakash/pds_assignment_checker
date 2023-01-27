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

void max(struct node* head)
{
	int max=head->data;
	struct node* p=head;
	while(p!=NULL)
	{
		max=max>p->data?max:p->data;
		p=p->next;
	}

	printf("Maximum number is : %d\n",max);
}

void min(struct node* head)
{
	int min=head->data;
	struct node* p=head;
	while(p!=NULL)
	{
		min=min<p->data?min:p->data;
		p=p->next;
	}

	printf("Minimum number is : %d\n",min);
}

int ispb(struct node* p,struct node* head)
{
	struct node* l=head;

	while(l!=p)
	{
		if(l->data==p->data)
			return 0;
		l=l->next;
	}

	return 1;
}

int ispa(struct node* p)
{
	struct node* l=p->next;

	while(l!=NULL)
	{
		if(l->data==p->data)
			return 1;
		l=l->next;
	}

	return 0;
}

void duplicate(struct node* head)
{
	struct node* p=head;
	int flag=0;

	while(p!=NULL)
	{
		if (ispb(p,head) && ispa(p))
		{
			if (flag==0)
			{
				printf("The duplicate elements are : ");
				flag++;
			}
			printf("%d  ", p->data);
		}
		p=p->next;
	}

	if (flag==0)
	{
		printf("No duplicate elements found\n");
	}

	printf("\n");
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

	max(head);
	min(head);
	duplicate(head);
	printf("\n");
	return;

}