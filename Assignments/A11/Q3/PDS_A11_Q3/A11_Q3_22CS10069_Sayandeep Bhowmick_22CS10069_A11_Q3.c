/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 11
	Description : Insertion in a list
*/
#include <stdio.h>
#include <stdlib.h>

struct list
{
	int data;
	struct list* next;
};

struct list* createlist(int n)
{
	struct list *head,*ptr;
	head=ptr=(struct list*)malloc(sizeof(struct list));

	int a;

	while(n>0)
	{
		printf("Enter a number : ");
		scanf("%d",&a);

		ptr->data=a;

		ptr->next=(struct list*)malloc(sizeof(struct list));

		n--;
		if (n>0)
			ptr=ptr->next;
	}

	struct list* t=ptr->next;
	ptr->next=NULL;
	free(t);

	return head;
}

int isAscend(struct list* head)
{
	while(head!=NULL && head->next!=NULL)
	{
		if(head->data>head->next->data)
			return 0;
		head=head->next;
	}
	return 1;
}

struct list* insert(struct list* head,int n)
{
	if (head==NULL)
	{
		head=(struct list*)malloc(sizeof(struct list));
		head->data=n;
		head->next=NULL;
		return head;
	}

	if(head->data>n)
	{
		struct list* headnew=(struct list*)malloc(sizeof(struct list));
		headnew->data=n;
		headnew->next=head;
		return headnew;
	}


	struct list* ptr=head;
	while(ptr->next!=NULL)
	{
		if(ptr->next->data>n)
			break;
		ptr=ptr->next;
	}
	struct list *t=ptr->next;
	ptr->next=(struct list*)malloc(sizeof(struct list));
	ptr->next->data=n;
	ptr->next->next=t;
	return head;
}

void printlist(struct list* head)
{
	if (head==NULL)
	{
		printf("The list is empty\n");
		return;
	}

	printf("The list is " );
	while (head!=NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}

	printf("\n");
}

void main()
{
	int n;
	printf("Enter the number of elements : ");
	scanf("%d",&n);

	struct list* head=createlist(n);
	printlist(head);
	if (isAscend(head))
	{
		int a;
		printf("Enter number to be inserted : ");
		scanf("%d",&a);
		head=insert(head,a);
		printf("After insertion of %d :\n",a);
		printlist(head);
	}
	else
		printf("The list is not sorted\n");
	return;
}