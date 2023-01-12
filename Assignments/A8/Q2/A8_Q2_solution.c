// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to find saddle point if it exists

#include <stdio.h>
#define MAX 100

int saddle(int A[][MAX], int R,int C)
{
    int i, j;        // Loop Variables
    for (i = 0; i < R; i++)
    {
        // Find the minimum element of row i.
        // Also find column index of the minimum element
        int min_row = A[i][0], min_row_corr_col = 0;
        for (j = 1; j < C; j++)
            if (min_row > A[i][j])
            {
                min_row = A[i][j];
                min_row_corr_col = j;
            }
 
        // Check if the minimum element of row is also
        // the maximum element of column or not
        for (j = 0; j < C; j++)
            // Note that min_row_corr_col is fixed
            if (min_row < A[j][min_row_corr_col])
                break;
 
        // If saddle point is present in this row then
        // print it
        if (j == R)
            return printf("Saddle Point: %d",min_row);
    }
    // If Saddle Point not found
    printf("Saddle Point: NOT FOUND");
}


int main()
{
    int A[MAX][MAX]; // Initializing 2-D array
    int R, C;        // Size of the row & column
    int i, j;        // Loop Variables

    printf("Enter R C: ");
    scanf("%d%d", &R, &C);

    printf("Enter Elements: ");
    for (i = 0; i < R; i++) // Storing Elements
        for (j = 0; j < C; j++)
            scanf("%d", &A[i][j]);

    saddle(A,R,C);

    return 0;
}
