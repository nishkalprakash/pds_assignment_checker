/*
Name : Govind Jaiswal
Roll no. : 22CH10024
Section : 14
Assignment no. : 7
Description : Program to create the largest number possible from  a set of numbers
*/

#include <stdio.h>

int main()
{
    int arr[10],i,n;
    printf("Enter no. of elements in the array :");    //taking user input
    scanf("%d",&n);
    printf("Enter elements in the array :");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);   //for taking array elements
    for(i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1])
        {
            int t = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = t;
            printf("%d",arr[i]);    //for printing the final result
        }
    }
}    
