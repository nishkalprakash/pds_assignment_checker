/*
Write a program that takes an integer between 1 and 9 as input, and prints out on the terminal a
pattern similar to the following. The example display shown is for input 5.
Example (n=5):

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5*/

// Name: Nishkal Prakash
// Roll: 19CS91R05
#include <stdio.h>

int main()
{
    int N; // N is the number of rows (user defined)
    int i, j; // i is the row number, j is the column number

    printf("Enter the number of rows: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) // i is the row number
    {
        for (j = 1; j <= i; j++) // j is the column number
        {
            printf("%d ", i); // Printing the row number
        }
        printf("\n"); // Moving to the next line
    }
    return 0;
}