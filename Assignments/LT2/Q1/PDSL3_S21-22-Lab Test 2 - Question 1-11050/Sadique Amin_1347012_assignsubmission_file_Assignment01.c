/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>
Assignment Class: 6
*/

#include <stdio.h>


int main()
{
    int n;
    int m=0,l=0;
    int arr[1000000];
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        int s=0;
        for(int j=i;j<n;j++)
        {
            s=s+arr[j];
            if(s>max)
            {
                max=s;
                m=i;            //Storing the index where the sum of the sub-array is largest.
                l=j;            //m is the intial index and l is the final index.
            }
        }
    }
    printf("Largest Sum:%d\n",max);
    printf("Sub-array:");
    for(int i=m;i<=l;i++)
    {
        printf(" %d",arr[i]);
    }
}