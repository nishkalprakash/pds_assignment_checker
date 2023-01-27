/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 10
	Description : Program to do set operations
*/

#include <stdio.h>
#include <stdlib.h>

struct node *createlist ( int n , int A[]);
void printlist( struct node* I);

struct node
{
	int x;
	struct node* next;
};

int main()
{
	int n1;
	printf("Enter number of integers in list 1: ");
	scanf("%d" , &n1);

	int *arr1 = (int * )malloc(n1*sizeof(int));

	printf("\nEnter the integers:\n");
	for ( int i = 0 ; i < n1 ; i++)
		scanf("%d" , arr+i);

	struct node* list1 = createlist( n1 , arr);

	printlist(list);

	int n2;
	printf("Enter number of integers in list 2: ");
	scanf("%d" , &n2);

	int *arr = (int * )malloc(n2*sizeof(int));

	printf("\nEnter the integers:\n");
	for ( int i = 0 ; i < n2 ; i++)
		scanf("%d" , arr+i);

	struct node* list2 = createlist( n2 , arr);

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

void printlist( struct node* I)
{
	printf("Elements of MODIFIED list are:\n");

	do
	{
		printf("%d ", I -> x );
		I = I -> next;
	}
	while(I -> next != NULL);

	printf("%d" , I -> x);
}
