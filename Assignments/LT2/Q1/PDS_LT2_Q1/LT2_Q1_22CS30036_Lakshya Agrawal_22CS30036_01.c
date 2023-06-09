/*
Section: 2
Roll No: 22CS30036
Name: Lakshya Agrawal
Question No: 01
Description: Finding Mean using Recursive function
*/

#include<stdio.h>
#include<stdlib.h>

void divide_e(int*a,int*L1,int*L2,int l)
{
    for(int i=0;i<l;i++)
    {
        L1[i] = a[i];
        L2[i] = a[l+i];
    }
}

void divide_o(int*a,int*L1,int*L2,int l)
{
    for(int i=0;i<l;i++)
    {
        L1[i] = a[i];
        L2[i] = a[l+i+1];
    }
}

float mean(int *a,int n)
{
    if(n==1) return *a;
    int *L1,*L2;
    float res;
    L1 = (int*)malloc((n/2)*sizeof(int));
    L2 = (int*)malloc((n/2)*sizeof(int));

    if(n%2==0)
    {
        divide_e(a,L1,L2,n/2);
        res = (mean(L1,n/2)+mean(L2,n/2))/2.0;
        free(L1);
        free(L2);
        return res;
    }
    else
    {
        divide_o(a,L1,L2,n/2);
        res = (mean(L1,n/2)+a[n/2]+mean(L2,n/2))/3.0;
        free(L1);
        free(L2);
        return res;
    }
}

int main()
{
   int n;
   scanf("%d",&n);

   int *a = (int*)malloc(n*sizeof(int));
   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }

   printf("\nList = [");
   for(int i=0;i<n;i++)
   {
       if(i!=n-1)
        printf("%d, ",a[i]);
       else
        printf("%d",a[i]);
   }
   printf("]\n");

   printf("Mean = %.2f\n",mean(a,n));

   return 0;
}
