// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to find out of order elements

#include <stdio.h>
int main()
{
    int A[100];  // A[N] = Array to store the sorted elements
    int N;       // N = Length of the actual inputted array
    int i, j, k; // Loop variables
    int ctr = 0; // Counter to count the number of elements
    printf("Enter N: ");
    scanf("%d", &N); 

    for (i = 0; i < N; i++)
        scanf("%d", &A[i]);

    for (i = 0; i < N; i++)
    {
        for (j = i; j < N; j++)
            if (A[i] > A[j])    // Check for numbers greater
            {
                ctr++;
                break;
            }
        for (k = 0; k < i; k++) // Check for numbers smaller
            if (A[i] < A[k])
            {
                ctr++;
                break;
            }
    }
    printf("Out of order: %d", ctr);
    return 0;
}
