// NAME- SATYAJIT BEHERA
// ROLL NO-21AG10034
// DEPT- AGRICULTURE AND FOOD ENGINEERING
// SECTION-03
// SOFTWARE- code block
#include <stdio.h>
#include <limits.h>
int largest_sum(int arr[], int n)
{
    int max = INT_MIN, sum, flag;
    printf("Sub-arrays = ");
    for (int i = 0; i < n; i++)
    {
        sum = 0;
// finding the max sum 
        for (int j = 0; i + j < n; j++)
        {
            sum += arr[i + j];
            
        }
        if (sum > max)
        {
            max = sum;
            flag = i;
        }
    }
   
    for (int i = flag; i < n; i++)
        printf(" %d ", arr[i]);
    for (int i = 0; i < n; i++)
    {
        if (max==arr[i])
        {
            printf("OR %d",max);
        }
    }
    printf("\n");
    
    return max;
}
int main()
{
    // taking the number  form the user
    int n, arr[100];
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter elements : ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Largest sum = %d\n", largest_sum(arr, n));

    return 0;
}