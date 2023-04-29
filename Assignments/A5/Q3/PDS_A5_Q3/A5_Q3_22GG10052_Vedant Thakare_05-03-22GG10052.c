/*
* Section 2
* Roll no : 22GG10052
* Name : Vedant Thakare
* Assignment : 5
* Description :
*/
#include<stdio.h>
void swap(int *p,int *q)
{
   int temp;
   temp=*p;
   *p=*q;
   *q=temp;
}

int main()
{
   int i,n,d,t;
   printf("Enter the value of n and direction\n");
   scanf("%d %d",&n,&d);
   int arr[n],arr2[n];
   printf("Enter the elements of the array\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("Original array :");
   for(i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }
   printf("\n");
   for(i=0;i<n;i++)
   {
       arr2[i]=arr[i];
   }
   if(n%2==1)
   {
    for(i=0;i<=n/2;i++)
    {
       swap(&arr2[i],&arr2[n-1-i]);
    }
   }
   else
   {
      for(i=0;i<=n/2-1;i++)
    {
       swap(&arr2[i],&arr2[n-1-i]);
    }
   }
   printf("Array after reverse :\n");
   for(i=0;i<n;i++)
   {
       printf("%d ",arr2[i]);
   }
   if(d==1)
   {
       arr[n-1]=t;
       for(i=1;i<n;i++)
       {
           arr[i]=arr[i=1];
       }
       arr[0]=t;


   }
    for(i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }

   return 0;



}
