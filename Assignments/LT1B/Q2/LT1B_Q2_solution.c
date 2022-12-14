// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print pattern
// 

#include <stdio.h>
int main()
{
    int N;                                          // N stores the row count
    scanf("%d", &N);
    for (int i = 1; i <= N; i++,printf("\n"))       // Note how \n is in the modification part, as it runs after the j loop
        for (int j = 1; j <= i; j++)                // No bracket needed for both i and j
           printf("%d ",i);                        // Directly remainder is printed
}
