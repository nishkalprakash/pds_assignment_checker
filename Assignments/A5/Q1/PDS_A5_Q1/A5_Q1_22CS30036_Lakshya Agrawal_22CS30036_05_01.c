/*
Section 2
Roll No : 22CS30036
Name : Lakshya Agrawal
Assignment No : 5
Description : Rearrangement of elements in array
*/

#include<stdio.h>

#define N 100

int main()
{
    int n,arr[N];
    printf("Enter the value of n (N <= 100) : ");
    scanf("%d",&n);
    if(n>100)
    {
        printf("\nError: n > 100\n");
        return 0;
    }

    printf("Enter the elements of the array : ");
    for(int i=0; i<n ; i++)
        scanf("%d",&arr[i]);

    printf("\n\nOriginal Array : ");
    for(int i=0; i<n ; i++)
        printf("%d ",arr[i]);

    printf("\nRearranged Array : ");
    int temp,j;
    for(int i=0;i<(n-1);i++)
    {
        if(arr[i]>=0 && arr[i+1]<0)
        {
            j=i;
            while(arr[j]>=0)
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                j--;
            }
        }
    }
    for(int i=0; i<n ; i++)
       printf("%d ",arr[i]);
    printf("\n");

    return 0;
}
