/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 10
	Description : Program to do operations on list
*/

#include <stdio.h>
#include <stdlib.h>

struct node *createlist ( int n , int A[]);
void printlist( struct node* I);
void even (struct node*I);

struct node
{
	int x;
	struct node* next;
};

int main()
{
	int n;
	printf("Enter number of integers: ");
	scanf("%d" , &n);

	int *arr = (int * )malloc(n*sizeof(int));

	printf("\nEnter the integers:\n");
	for ( int i = 0 ; i < n ; i++)
		scanf("%d" , arr+i);

	struct node* list = createlist( n , arr);

	even(list);
	printlist(list);

	return 0;
}

struct node* createlist( int n , int arr[])
{ 
	struct node* head = NULL ;
	struct node* tail;

	head = (struct node*)malloc(sizeof(struct node));
	head -> x = arr[0];
	tail = head;

	for (int i = 1 ; i < n ; i++)
	{
		tail -> next = (struct node*)(malloc(sizeof(struct node)));
		tail = tail -> next;
		tail -> x = arr[i];
	}
	tail -> next = NULL;

	return head;
}

void even(struct node*I)
{
	struct node * ptr = I -> next;
	for (int i = 1 ; ptr!=NULL && ptr -> next != NULL ; i++)
	{
		if (i%2==1)
			ptr -> next = ptr -> next -> next;
		ptr = ptr ->next;
	}
}
void printlist( struct node* I)
{
	printf("Elements of MODIFIED list are:\n");

	for ( ;I!= NULL;)
	{
		printf("%d " , I -> x);
		I = I -> next;
	}
	printf("\n");
		
}
