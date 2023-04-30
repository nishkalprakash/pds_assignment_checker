/*
Section 2
Roll No : 22CS30036
Name : Lakshya Agrawal
Assignment No : 5
Description : To implement reverse and cyclic shift function
*/

#include<stdio.h>

void swap(int *p,int *q)
{
    int t = *p;
    *p = *q;
    *q = t;
}

void cyclicshift(int *a,int n,int direction)
{
    if(direction==1)
    {
      if(n==1)
           return;
       else
       {
         swap(&a[0],&a[1]);
         cyclicshift(++a,n-1,direction);
         return;
       }

    }
    else
    {
       if(n==1)
           return;
       else
       {
         cyclicshift(++a,n-1,direction);
         a--;
         swap(&a[0],&a[1]);
         return;
       }
    }
};

void reverse(int *a,int n)
{
    if(n>1)
    {
       cyclicshift(a,n,0);
       reverse(++a,n-1);
       return;
    }
}


int main()
{
    int n,d;
    printf("Enter the size of the array and directions: ");
    scanf("%d%d",&n,&d);

    int arr[n];
    printf("Enter %d integers:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("\nOriginal array : ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

    printf("\nArray after reverse : ");
    reverse(arr,n);
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

    if(d==1)
    {
      printf("\nArray after left cyclic shift : ");
      cyclicshift(arr,n,d);
      for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
      printf("\n");
    }
    else
    {
      printf("\nArray after right cyclic shift : ");
      cyclicshift(arr,n,d);
      for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
      printf("\n");
    }

    return 0;
}

