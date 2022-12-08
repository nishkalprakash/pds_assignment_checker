// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to Distribute array elements into bins
// This is just an example to show how short a code is possible

#include <stdio.h>
int max(int a[], int n) // returns maximum element of the array
{
    int m = 0;
    for (int i = 1; i < n; i++)
        m = (a[i] > a[m]) ? i : m;
    return a[m];
}

int min(int a[], int n) // returns minimum element of the array
{
    int M = 0;
    for (int i = 0; i < n; i++)
        M = (a[i] > a[M]) ? M : i;
    return a[M];
}
bool check(int e, int l, int u) // returns 0 if e is in range [l , u] else returns 1
{
    return (e <= u && e >= l) ? 0 : 1;
}

int main()
{
    int N, B;    // N=Array Length, B=Number of Bins
    int bi, ctr; // bi=bin interval,b=bin_variable
    scanf("%d", &N);
    int A[N]; // Initializing the array
    for (int i = 0; i < N; i++)
        scanf("%d", &A[i]);
    scanf("%d", &B);
    int m = min(A, N), M = max(A, N); // m=min element, M=max element
    bi = (M - m) / B;
    while (m < M) // stop when lower index reaches max element
    {
        ctr = 0;
        printf("\nbin%d [%d,%d] ->  ", m / bi + 1, m, m + bi); // also printing the interval
        for (int i = 0; i < N; i++)
            check(A[i], m, m + bi) ? ctr++ : printf("%d, ", A[i]); // ctr counts the number elements that dont fall in the range
        printf("  Elems = %d", N - ctr);                           // printing number of elements in the bin
        m += bi + 1;                                               // incrementing lower range by bin interval + 1
    }
}