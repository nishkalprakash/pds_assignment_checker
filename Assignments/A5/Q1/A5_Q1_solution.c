/*
1.	Consider an array of integers of size N. Do the following:
a.	Read n elements (n<=N) and store them in the array, where N = 100. 
Use macro for setting the limit.
(Hint: Set the upper limit using #define N 100)
b.	Rearrange 
i.	all negative numbers on the left side of the array and 
ii.	all positive numbers on the right side of the array
Don't use or define any other array. 
The rearranging should not change the original order of the entered numbers. 

*/
// Code creator: Abhishek Topwal (topwalabhi1998@gmail.com) and Nishkal Prakash (nishkal@iitkgp.ac.in)
#include <stdio.h>
#define N 100   // Maximum number of elements in the array

int main()
{
    int n, arr[N]; // n is the number of elements in the array taken from user
    int i, j=0, k, temp;   // i is the index of the array, j is the index of the first positive number

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
            for (k = i; k > j; k--) // Shifting all the elements to the right of the first positive number by one position
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
