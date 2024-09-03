// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
#include <stdio.h>
#define N 100 // Maximum number of elements in the array

int main()
{
    int n, arr[N];        // n is the number of elements in the array taken from user
    int i, ctr = 0, j, k, flag=0; // i is the index of the array,

    printf("\nEnter the number of elements (n <= %d): ", N);
    scanf("%d", &n);
    if (n > N)                             // Checking if the number of elements is greater than the maximum number of elements
        return printf("Error: n > %d", N); // If yes, then return an error message

    printf("\nEnter %d elements: ", n);
    for (i = 0; i < n; i++) // Reading the elements of the array
        scanf("%d", &arr[i]);

    printf("\nOriginal Array: ");
    for (i = 0; i < n; i++) // Printing the original array
        printf("%d ", arr[i]);

    // Printing all the duplicate elements with their Frequency
    printf("\nDuplicates: ");
    for (i = 0; i < n; i++)
    {
        ctr = 1; // Frequency of the duplicate element
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                ctr++; // Incrementing the frequency of the duplicate element
                // Shift all elements to the left by one position and decrease the size of the array by one
                for (k = j; k < n - 1; k++)
                    arr[k] = arr[k + 1];
                n--; // Decreasing the size of the array by one
                j--; // Decrementing the index of the array
            }
        }
        if (ctr > 1) // If the frequency of the duplicate element is greater than 1, then print it
        {
            printf("\n\t%d (%d)", arr[i], ctr);
            flag=1;
        }
    }
    if(flag==0)
        printf("\n\tNo Duplicates Found");

    printf("\nUnique Array: ");
    for (i = 0; i < n; i++) // Printing the unique array
        printf("%d ", arr[i]);

    return printf("\n");
}
