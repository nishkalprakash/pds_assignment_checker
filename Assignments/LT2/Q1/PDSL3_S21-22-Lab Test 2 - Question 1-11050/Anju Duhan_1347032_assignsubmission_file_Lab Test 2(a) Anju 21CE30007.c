// Name --> Anju
// Roll number --> 21CE30007
// Section --> 3

#include <stdio.h>

//sybarray for finding maximum sum of the arrays
void subarray_sum(int arr[], int n)
{
    int max_sum = arr[0], l = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        // for this using while loop
        int j = i;
        while(j<n){
        {
            int sum = 0;
            int k = i;
            while(k<=j){
                sum += arr[k];
                if(sum > max_sum)
                {
                    max_sum = sum;
                    l = i;
                    r = j;

                }
                k++;
            }
            j++;
        }
    }
    }
    // printing maximum subarray sum
    printf("Maximum subarray sum : %d\n", max_sum);
    printf("The subarray is : ");
    for (int i = l; i <= r; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int arr[20], n;
    printf("Enter N = "); // PRINTING OF "N"
    scanf("%d", &n); // TAKING INPUT FROM THE USER ABOUT SUBARRAY
    printf("Enter elements of the array: "); // PRINT LETTER "THE ELEMENTS OF ARRAY"
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]); // TAKING INPUT FROM THE USER
    subarray_sum(arr, n); // CALLING THE DEFINED FUNCTION "subarray_sum"
    return 0;
}
