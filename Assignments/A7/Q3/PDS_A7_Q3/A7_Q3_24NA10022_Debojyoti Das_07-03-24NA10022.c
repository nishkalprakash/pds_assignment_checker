#include<stdio.h>
//finding the range of the array
int max( int a[], int n)
{ 
   int i,temp;
   temp=a[0];
   for(i=0;i<n;i++)
   {
      if(a[i]>temp)
      temp=a[i];
   }
   return temp;
}
int min(int a[], int n)
{ 
   int i,temp;
   temp=a[0];
   for(i=0;i<n;i++)
   {
      if(a[i]<temp)
      temp=a[i];
   }
   return temp;
}
//creating bins and finding ranges
void bins( int a[], int num_bins, int n)
{ 
   int temp=(max(a)-min(a)/3);
   int bin,i,j;
   for(i=0;i<num_bins;i++)
   {   
       for(j=0;j<
      
    

