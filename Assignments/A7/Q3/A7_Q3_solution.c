// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to check for anagarm
#include <stdio.h>
#define inf -

int main()
{
    char A[100],B[100]; // A[],B[] = Char Arrays to store the words
    // int N;      // N = Length of the actual inputted array
    // int C;      // C = Count required
    int i,j;      // Loop variables
    // int ctr;    // Counter Variable
    int flag=1;   // Flag variable to check for case "No element"
    printf("\nEnter A: ");
    scanf("%s", A);

    // scanf("%d", &N);
    // printf("Enter %d elements: ", N);
    // for (i = 0; i < N; i++)
        // scanf("%d", &A[i]);

    printf("\nEnter B: ");
    scanf("%s", B);



    for (i = 0; A[i]!='\0'; i++)
    {
        ctr=1;
        for (j = 0; B[j]!='\0'; j++) // inf is set to max value for integer to skip elements that are already counted
        {
            if (A[j] == A[i]) // Counting the same elements
            {
                A[j] = inf; // Setting already visited element to inf to skip next time
                break;
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