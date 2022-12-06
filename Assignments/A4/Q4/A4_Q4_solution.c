// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print 0 and 1 pattern

#include <stdio.h>
int main()
{
    int N;                              // N stores the row count
    printf("Enter the value of N:");
    scanf("%d", &N);
    for (int i = 0; i < N; i++)         // i loop for rows
    {
        for (int j = 0; j <= i; j++)    // j loop for columns
        {
            if (j % 2)                  // if j is odd print 0 else print 1
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n");                   // This adds a new line after every j run
    }
    return 0;
}
