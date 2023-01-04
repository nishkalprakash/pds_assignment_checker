// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print numbers that appear a certain number of times in an array

#include <stdio.h>
#define inf 2147483647

int main()
{
    int A[100]; // A[N] = Array to store the sorted elements
    int N;      // N = Length of the actual inputted array
    int C;      // C = Count required
    int i,j;      // Loop variables
    int ctr;    // Counter Variable
    int flag=1;   // Flag variable to check for case "No element"
    printf("Enter N: ");
    scanf("%d", &N);
    printf("Enter %d elements: ", N);
    for (i = 0; i < N; i++)
        scanf("%d", &A[i]);

    printf("\nEnter C: ");
    scanf("%d", &C);

    for (i = 0; i < N; i++)
    {
        ctr=1;
        for (j = i+1; j!=inf && j < N; j++) // inf is set to max value for integer to skip elements that are already counted
        {
            if (A[j] == A[i]) // Counting the same elements
            {
                ctr++;
                A[j] = inf; // Setting already visited element to inf to skip next time
            }
        }
        if (ctr == C)
        {
            printf("%d ", A[i]);
            flag = 0;
        }
    }

    if (flag) // if no element was found C times
        printf("NO number ");
    printf("Appears %d times ", C);
    return 0;
}