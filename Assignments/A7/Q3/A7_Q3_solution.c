// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to Distribute array elements into bins

#include <stdio.h>
int max(int a[], int n) // returns maximum element of the array
{
    int m = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[m])
            m = i;
    }
    return a[m];
}

int min(int a[], int n) // returns minimum element of the array
{
    int M = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < a[M])
            M = i;
    }
    return a[M];
}
bool check(int e, int l, int u) // returns 1 if e is in range [l , u] else returns 1
{
    if (e <= u && e >= l)
        return 1;
    return 0;
}

int main()
{
    int N, B;    // N=Array Length, B=Number of Bins
    int bi, ctr; // bi=bin interval,b=bin_variable
    printf("Enter Array length, N: ");
    scanf("%d", &N);
    int A[N]; // Initializing the array
    printf("Enter N integers: ");
    for (int i = 0; i < N; i++)
        scanf("%d", &A[i]);

    printf("Enter Number of Bins: ");
    scanf("%d", &B);
    int m = min(A, N), M = max(A, N); // m=min element, M=max element
    bi = (M - m) / B;
    while (m < M) // start from min element, add bin interval and stop when min reaches max element
    {
        ctr = 0;
        printf("\nbin%d [%d,%d] ->  ", m / bi + 1, m, m + bi); // also printing the interval
        for (int i = 0; i < N; i++)
        {
            if (check(A[i], m, m + bi))
            {
                ctr++; // ctr counts the number elements that fall in the range
                printf("%d, ", A[i]);
            }
        }
        printf("  Elems = %d", ctr); // printing number of elements in the bin
        m += bi + 1;                 // incrementing lower range by bin interval + 1
    }

    return 0;
}