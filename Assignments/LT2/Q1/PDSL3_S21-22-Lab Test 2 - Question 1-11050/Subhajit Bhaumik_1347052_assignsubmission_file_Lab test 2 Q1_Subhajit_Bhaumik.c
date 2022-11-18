#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

//Function for finding the sub-arrays of contiguous elements
//in the array having the largest sum.
int maxSubArraySum(int *arr, int n)
{
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

//Function for finding the corresponding sub-array having the largest sum
void maxSubArrays(int* arr, int n, int sum)
{
    int check_sum = 0;
    for (int i = 0; i < n; i++)
    {
        check_sum = 0;
        for (int j = i; j < n; j++)
        {
            check_sum += arr[j];
            if(check_sum == sum)
            {
                int length = j - i + 1;
                int* maxSubarr = (int *)malloc(sizeof(int)*length);
                int index = 0;
                for (int k = i; k <= j; k++)
                {
                    maxSubarr[index++] = arr[k];
                }
                for (int k = 0; k < length; k++)
                {
                    printf("%d ", maxSubarr[k]);
                }
                printf("\n");
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest_sum = maxSubArraySum(arr, n);

//Printing the largest sum and the corresponding sub-arrays/sub-arrays.
    printf("Largest Sum = %d\n", largest_sum);

    printf("Sub-arrays = \n");
    maxSubArrays(arr, n, largest_sum);

    return 0;
}
