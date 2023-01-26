/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 10
	Description : Program to find maximum and minimum
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

	struct node* ptr = createlist( n , arr);

	int min = 99999;
	int max = 0;

	for ( int i = 0 ; i < n ; i++)
	{
		if (ptr -> x > max)
			max = ptr -> x;
		if (ptr -> x < min)
			min = ptr -> x;
		ptr = ptr -> next;
	}

	printf("Minimum number is %d\n" , min );
	printf("Maximum number is %d\n" , max);
	

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
