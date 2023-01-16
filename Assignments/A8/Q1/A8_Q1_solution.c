// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to Print elements in column major format

#include <stdio.h>
#define MAX 100
int main()
{
    int A[MAX][MAX];    // Initializing 2-D array
    int N;  // Size of the row/column
    int i, j;   // Loop Variables
    
    printf("Enter N: ");
    scanf("%d", &N);
    
    printf("Enter Elements: ");
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &A[i][j]);

    printf("Column Major: ");
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            printf("%d ", A[j][i]);

    return 0;
}