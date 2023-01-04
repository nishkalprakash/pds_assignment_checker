/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 7
* Description : Program to output all numbers that appear m number of times
*/
#include<stdio.h>
int main()
{
 int n,m, count;
 scanf("%d", &n);
 int arr[n], i;
 for(i=0; i<n; i++){
 scanf("%d", &arr[i]);
 }
 scanf("%d", &m);
 for(i=0; i<n; i++)
{
 for(j=i+1; j<n; j++)
{ 
 if(arr[i]=arr[j])
 count++;
 if(count=m)
 break;
 printf(" %d occurs %d times ", arr[i] , count);
 }
}


 
return 1;
}
 
