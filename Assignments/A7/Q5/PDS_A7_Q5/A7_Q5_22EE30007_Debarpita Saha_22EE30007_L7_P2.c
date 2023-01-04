/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 7
* Description : Program to find how many elements are out of order
*/
#include<stdio.h>

int main()
{
 int n, i, j, count=0;
 scanf("%d", &n);
 int arr[n];
 for(i=0;i<n; i++)
{
 scanf("%d", &arr[i]);
}
  for(i=0; i< n-1; i++)
{
  for(j=0; j< n-i-1; j++)
  {
    if(arr[j]>arr[j+1])
     {
       temp= arr[j];
       arr[j]= arr[j+1];
       arr[j+1]= temp;
     }
  }
}
for(i=0; i< n-1; i++)
{
 if(arr[i]>arr[i+1] && arr[i]<arr[i-1])
{
  count++;
  printf("%d", count);
  printf("OUT of order");
 }
else
 
 printf("%d", count);
}
return 1;
}
  
