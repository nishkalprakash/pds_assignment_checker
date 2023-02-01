/*
Name : Govind Jaiswal
Roll no : 22CH10024
Section : 14
Assignment no : 11
Description : Program to insert a value in a list
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
	int data;
	struct next *next;
}element;
typedef element* link;

link createlist(int n)
{
	link head = NULL,ptr;
	head =  (link)malloc(sizeof(element));
	ptr = head;
	while(1)
	{
		ptr->data = n;
		printf("Enter next element\n");
		scanf("%d",&n);
		if(n==-999)
		{
			ptr->next = NULL;
			break;
		}
		else
		{
			ptr->next = (link)malloc(sizeof(element));
			ptr = ptr->next;
		}
	}
	return head;
}


void print(link head)     //printing the final list
{
	if(head==NULL)
	{
		printf("\n");
	}
	else
	{
		printf("%d ",head->data);
		print(head->next);
	}
}

void print_A(int A[], int N) // iterative way to print
{
    for (int i = 0; i < N; i++)
        printf("%d ", A[i]);
}

int main()
{
    int A[100];     // A[N] = Array to store the sorted elements
    int N;          // N = Length of the actual inputted array
    int M;            // M = Number to be inserted
    int i;          // Loop variable

    printf("Enter N: ");
    scanf("%d", &N);
    printf("Enter %d sorted elements: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &A[i]);
    printf("\nBefore Insertion: ");
    print_A(A, N);
    printf("\nEnter M:");
    scanf("%d", &M);
    for (i = N++; i > 0; i--)     // Reading array from reverse
    {
        A[i] = A[i - 1];       // Making a copy of the previous element
        if (A[i] < M)
        {
            A[i] = M;      // Setting in desired spot
            break;      // Stopping after inserting
        }
    }
    if(i==0) A[0]=M;       // This is a case when the input element is the smallest
    printf("\nAfter Insertion: ");
    print_A(A, N);

	print(head);
    return 0;
}
