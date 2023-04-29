/*
section 2
roll no:-22EE10056
Name:-rushikesh santosh jadhav
assignment no:-5
Description:-All negative on left and all positive on right of array*/
#include<stdio.h>
#define N 100
int main()
{
    int a[N],n,i,ctr,temp;
    printf("Enter no. of elements in an array:");
    scanf("%d",&n);
    if(n>100)
    {
        printf("Error:n>100");
        return 0;
    }
    printf("Enter %d numbers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Original array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    do
    {
        ctr=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]>0 && a[i+1]<0)
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                ctr++;
            }
        }
    }while(ctr != 0);
    printf("Rearranged array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
