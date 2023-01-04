/*
section 14
roll no:22MI10013
name:animesh mishra
assignment no:6
description:
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int arr[100],i,j,n,count=0,min;
   scanf("%d" , &n);

   for(i=0;i<n;i++)
   {
      scanf("%d" , &arr[i]);
   }

   for(i=0;i<n;i++)
   {
       min=i;
       for(j=i+1;j<n;j++)
       {
           if(arr[min]>arr[j])
           {
              min=j;
           }
       } 
   {
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i]=temp;
   }
}

for(i=1;i<n;i++)
{

  if(arr[i]==arr[i-1])
  {
      count++;
      while(arr[i]==arr[i-1])  i++;
  }
}
printf("%d" , count);

return 0;

}
