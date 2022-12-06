// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print 0 and 1 pattern
// This is just an example to show how short a code is possible

#include <stdio.h>
int main()
{
    int N;                                          // N stores the row count
    scanf("%d", &N);
    for (int i = 1; i <= N; i++,printf("\n"))       // Note how \n is in the modification part, as it runs after the j loop
        for (int j = 1; j <= i; j++)                // No bracket needed for both i and j
           printf("%d",j%2);                        // Directly remainder is printed
}
