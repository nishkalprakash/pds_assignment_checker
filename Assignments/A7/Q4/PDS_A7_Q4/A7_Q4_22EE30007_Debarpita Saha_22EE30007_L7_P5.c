/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 7
* Description : Program to sort an existing array with a new input value
*/
#include<stdio.h>
int main()
{
 int n, temp, i ,j;
 scanf("%d", &n);
 int arr[n];
 for(i=0; i<n; i++)
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
 for(i=n-1; i>0; i++)
 {
   printf("%d", arr[i]);
 }
return 1;
}
 
