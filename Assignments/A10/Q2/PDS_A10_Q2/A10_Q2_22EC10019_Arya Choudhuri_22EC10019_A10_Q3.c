/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 10
	Description : Program to find if list is sorted

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
	int n;
	printf("Enter number of integers: ");
	scanf("%d" , &n);

	int *arr = (int * )malloc(n*sizeof(int));

	printf("\nEnter the integers:\n");
	for ( int i = 0 ; i < n ; i++)
		scanf("%d" , arr+i);

	struct node* head = createlist( n , arr);

	struct node* tail = createlist( n, arr);

	if ( n==1 )
	{
		printf("Order of singleton list is not defined");
		return 0;
	}
	tail = head;

	int flag_d = 0;
	
	for ( int i = 0 ; i < n-1 ; i++)
	{
		head = tail ;
		tail = head -> next;
		if ( (head -> x) > (tail -> x) )
			flag_d ++;
	}

	if (flag_d == n-1)
	{
		printf("\nElements are in descending order");
		return 0;
	}

	struct node* head2 = createlist( n , arr);

	struct node* tail2 = createlist( n, arr);
	tail2 = head2;

	int flag_a = 0;

	for ( int i = 0 ; i < n-1 ; i++)
	{
		head2 = tail2 ;
		tail2 = head2 -> next;
		if ( (head2 -> x) < (tail2 -> x) )
			flag_a ++;
	}

	if (flag_a == n-1)
	{		
		printf("\nElements are in ascending order");
		return 0;
	}

	printf("Elements are NOT sorted" );
	
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


