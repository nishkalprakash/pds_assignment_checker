/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include<stdio.h>
int main(){
    printf("Enter n: "); // taking the input of n
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: "); // Entering the elements 
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ans=largestsum(arr,n);
    printf("Sub-arrays = "); // printing the sub-arrays with the taken input of the elements
    PickSubarrayFromArray(arr,n,ans);
    printf("\nLargest Sum = %d",ans);
}
int largestsum(int arr[], int size) // defining largestsum integer
{
    int max0 = 0, max1 = 0;
    int start =0, end = 0, s=0;
    for (int i=0; i< size; i++ )
    {
        max1 += arr[i];
        if (max0 < max1)
        {
            max0 = max1;
            start = s;
            end = i;
        }
        if (max1 < 0)
        {
            max1 = 0;
            s = i + 1;
        }
    }
    return max1;
}
void print(int arr1 [], int i, int j)
{

    for (int k = i; k <= j; k++)
	{
        printf("%d ", arr1[k]);
    }
    printf("      ");
}


void PickSubarrayFromArray(int arr1[], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        int sum_upto = 0;
        for (int j = i; j < n; j++)
        {
            sum_upto += arr1[j];
            if (sum_upto == sum)
			{
                print(arr1, i, j);
            }
        }
    }
}