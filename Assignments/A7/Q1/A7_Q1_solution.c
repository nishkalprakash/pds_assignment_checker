// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to insert element in an array
#include <stdio.h>

void print_A(int A[], int N) // iterative way to print
{
    for (int i = 0; i < N; i++)
        printf("%d ", A[i]);
}

int main()
{
    int A[100]; // A[N] = Array to store the sorted elements
    int N;      // N = Length of the actual inputted array
    int M;      // M = Number to be inserted
    int i;      // Loop variable

    printf("Enter N: ");
    scanf("%d", &N);
    printf("Enter %d sorted elements: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &A[i]);
    printf("\nBefore Insertion: ");
    print_A(A, N);
    printf("\nEnter M:");
    scanf("%d", &M);
    for (i = N++; i > 0; i--)
    {
        A[i] = A[i - 1];
        if (A[i] < M)
        {
            A[i] = M;
            break;
        }
    }
    if(i==0) A[0]=M;
    printf("\nAfter Insertion: ");
    print_A(A, N);
}
