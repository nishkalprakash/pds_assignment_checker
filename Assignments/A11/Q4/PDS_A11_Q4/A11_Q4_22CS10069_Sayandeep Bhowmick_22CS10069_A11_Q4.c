/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 11
	Description : Deletion in a list
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

struct list* delete(struct list* head,int n)
{
	if (head==NULL)
	{
		printf("List is empty\n");
		return head;
	}

	struct list* t;
	if (head->data==n)
	{
		t=head->next;
		free(head);
		return t;
	}
	struct list* ptr=head;
	while(ptr->next!=NULL)
	{
		if (ptr->next->data==n)
		{
			t=ptr->next;
			ptr->next=ptr->next->next;
			free(t);
			return head;
		}
		ptr=ptr->next;
	}
	printf("%d is not present in the list\n",n);
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

	int a;
	printf("Enter number to be deleted : ");
	scanf("%d",&a);
	head=delete(head,a);

	printf("After deletion :\n");
	printlist(head);

	return;
}