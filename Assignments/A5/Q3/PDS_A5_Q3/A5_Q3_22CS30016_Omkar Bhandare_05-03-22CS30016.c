/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Assignment No. - 05
Description - Swaps and Reverse and Cyclic Shift
*/
#include<stdio.h>

void swap (int *p, int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}

void reverse (int *a, int n, int i)
{
    if(i<n/2)
    {
    int temp;
    temp=*(a+i);
    *(a+i)=*(a+n-i-1);
    *(a+n-i-1)=temp;
    reverse(a,n,++i);
    return;
    }
}

void cyclicShift(int *a, int direction,int n,int i)
{
    if(direction==1 && i<n)
    {
        int temp;
        temp = *a;
       *(a+i) = *(a+i+1);
        cyclicShift(a,1,n,++i);
       *(a+n-1) = temp;
    }

    if(direction!=1 && i<n)
    {
        int temp;
        temp = *(a+n-1);
        *(a+n-i) = *(a+n-i-1);
        cyclicShift(a,0,n,++i);
        *a=temp;
    }
}

int main()
{
    int a[100],n,direction;
    printf("Enter the size of array and direction : ");
    scanf("%d%d", &n, & direction);
    printf("Enter %d integers : ", n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Original Array : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    reverse(a,n,0);
    printf("Array after Reverse : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    cyclicShift(a,direction,n,0);
    printf("Array after cyclic shift : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
