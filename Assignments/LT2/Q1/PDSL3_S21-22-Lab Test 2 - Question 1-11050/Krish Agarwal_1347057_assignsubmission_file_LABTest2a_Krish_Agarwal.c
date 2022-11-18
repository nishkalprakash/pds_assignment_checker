/*
Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS code
*/
#include <stdio.h>
#include <limits.h>
int maxcontiguousSum(int a[], int n) // To max continuous sum
{
    int max_sum = INT_MIN, temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = temp + a[i]; // calculating the sum
        if (max_sum < temp) // finding max value
        {
            max_sum = temp;
        }
        if (temp < 0) // for negative
        {
            temp = 0;
        }
    }
    // printf("The SubArray is : \n");//displaying the subarray
    // for (int i = initial; i <= end; i++)
    // {
    //     printf("%d\t", a[i]);
    // }
    printf("\nMaximum Contiguos sum = ");
    return max_sum;
}
void printsubarray(int s[], int n, int sum) // For printing subarrays
{
    int _sum = 0, a[n], b[n], pos = 0;
    for (int i = 0; i < n; i++)
    {
        _sum = 0;
        for (int j = i; j < n; j++)
        {
            _sum = _sum + s[j];
            if (_sum == sum)
            {
                a[pos] = i; // storing indices where the max sum occur
                b[pos] = j,
                pos++;
            }
        }
    }
    // Displaying the subarrays
    printf("\nSubArrays are: ");
    for (int i = 0; i < pos; i++)
    {
        printf("\n");
        for (int j = a[i]; j <= b[i]; j++)
        {
            printf("%d ", s[j]);
        }
    }
}

int main()
{
    int n;
    // Taking required inputs
    printf("Enter the number of integers : ");
    scanf("%d", &n);
    int num[n];
    printf("Enter the integers in the array : \n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &num[i]);
    }
    int maximum = maxcontiguousSum(num, n);
    printf(" %d", maximum); // Calling function
    printsubarray(num, n, maximum);

    return 0;
}