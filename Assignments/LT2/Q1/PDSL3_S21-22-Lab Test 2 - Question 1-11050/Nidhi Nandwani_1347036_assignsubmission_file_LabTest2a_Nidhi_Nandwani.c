/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>

int maxSum(int a[], int n)
{
    int currentmax = 0;
    int maxsum = 0;
    //using two variables to keep track of maximum sum and the current max calculated for the subarrays
    for(int i=0; i<n; i++)
    {
        if(a[i]>currentmax+a[i]) //checking if adding the next element will give a higher sum or not
        currentmax = a[i];
        else
        currentmax+=a[i];
        
        if(currentmax > maxsum)
        maxsum = currentmax;
    }
    return maxsum;
}

void findsum(int a[],int n, int sum)
{
    //using this function to trackdown the subarrays that returned the maximum sum
    int currentsum;
    for(int i=0; i<n; i++)
    {
        currentsum=0;
        //trying subarrays starting with i
        for(int j=i; j<n; j++)
        {
            currentsum += a[j];

            if(currentsum == sum)
            {
                for(int k=i; k<=j ; k++)
                printf("%d ", a[k]);
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
    int a[n];
    printf("Enter the array elements: ");
    for(int i=0;i<n;i++)
    scanf("%d", &a[i]);

    int sum = maxSum(a, n);
    printf("Largest sum = %d\n", sum);
    printf("Sub-Arrays:\n");
    findsum(a, n, sum);
}