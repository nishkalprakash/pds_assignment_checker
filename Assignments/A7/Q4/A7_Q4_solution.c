// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to insert element in an array
#include <stdio.h>

void print_A(int A[], int N) // iterative way to print
{
    for (int i = 0; i < N; i++)
        printf("%d ", A[i]);
}

int cond(int m, int i)
{
    int t;
    // m is the smaller number
    if (m > i)
    {
        if (i >= 10)
            return 1;
        if (m < 10)
            return 1;
        if (m / 10 < i)
            return 0;
        if ((m / 10) == i)
            return ((m % 10) < i) ? 0 : 1;
        return 1;
    }
    return !cond(i, m);
}

int main()
{
    int A[100];     // A[N] = Array to store the sorted elements
    int N;        // N = Length of the actual inputted array
    int m;        // M = Number to be inserted
    int i, j = 1; // Loop variable

    printf("Enter N: ");
    scanf("%d", &N);
    printf("Enter %d elements: ", N);

    // Using a modified form of insertion sort that prefers single digit number over double
    scanf("%d", &A[0]);
    for (i = 1; i < N; i++, j = i)
    {
        scanf("%d", &m);
        while (cond(m, A[--j]) && j >= 0)
            A[j + 1] = A[j];
        A[j + 1] = m;
    }
    print_A(A, N);
    return 0;
}
