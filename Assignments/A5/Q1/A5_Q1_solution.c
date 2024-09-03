// Code creator: Nishkal (nishkal@iitkgp.ac.in)
#include <stdio.h>
#define N 100   // Maximum number of elements in the array
int main()
{
    int n, arr[N]; // n is the number of elements in the array taken from user
    int i, j=0, temp;   // i is the index of the array, j is the index of the first positive number

    printf("\nEnter the number of elements (n <= %d): ", N);
    scanf("%d", &n);
    if (n > N) // Checking if the number of elements is greater than the maximum number of elements
        return printf("Error: n > %d", N); // If yes, then return an error message

    printf("\nEnter %d elements: ", n);
    
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);   

    printf("\nOriginal Array: ");
    for (i = 0; i < n; i++) // Printing the original array
        printf("%d ", arr[i]);

    for (i = 0; i < n; i++)
    {
        // If the element is negative, 
        // then shift all the elements to the right of the first positive number by one position
        if (arr[i] < 0) 
        {
            temp = arr[i];
            for (int k = i; k > j; k--) // Shifting all the elements to the right of the first positive number by one position
                arr[k] = arr[k - 1];
            arr[j] = temp;
            j++;   // Incrementing the index of the first positive number
        }
    }

    printf("\nRearranged Array: ");
    for (i = 0; i < n; i++) // Printing the rearranged array
        printf("%d ", arr[i]);

    return printf("\n");
}
