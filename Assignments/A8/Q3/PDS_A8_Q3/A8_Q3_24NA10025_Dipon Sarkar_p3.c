// code to print the modified array and find the largest number 
// Name:- Dipon Sarkar
//Roll No.:- 24NA10025

#include<stdio.h>
int main()
{
 int n,a[102],i,t,j;
 scanf("%d", &a[i]);
 
 for(i=0;i<n;;i++)
 {
  for(j=0;j<n-i-1;;j++)
  {
   if(a[j]>a[j+1]) // condition  for swapping
   {
    // swapping a[j] and a[j+1]
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
    }
   }
  }
   printf("A[%d]",n);
   for(i=0;i<n;i++)
   {
     printf("%d",a[n]);
     printf("Largest number is:"); // printing largest number
     for(i=0;i<n;i++)
     {
     printf("%d",a[n]);
     }
     }
     return 0;
     }
     
      
     
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
