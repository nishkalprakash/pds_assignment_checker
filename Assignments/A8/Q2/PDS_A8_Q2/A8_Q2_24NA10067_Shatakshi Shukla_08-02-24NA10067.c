//Program to sort an array and insert a number in a sorted array
#include <stdio.h>
int main()
{
  int A[20],n,m;
  printf("n=");
  scanf("%d",&n);
  printf("A[%d]=",n);
  for(int i =0;i<n;i++){
   scanf("%d",&A[i]);
   }
   printf("m=");
   scanf("%d",&m);
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<n-i-1;j++)
     {
     int t;             //a temporary variable for swapping the two numbers
      if(A[j]>A[j+1])     //Sorting the array
      {
       t=A[j];
       A[j]=A[j+1];
       A[j+1]=t;
       }
       }
       }
      
   for(int k=0;k<n;k++)
   {
     if(m>=A[k] && m<=A[k+1])    //checking in which range m lies
     {
       for(int z=n;z>k+1;z--)
       {
         A[z]=A[z-1];    //increasing the size of the array to insert m
         }
         A[k+1]=m;   //assigning m to its place in sorted array
         break;
         }
         }
    printf("Output Array:\n");  //printing the output
    printf("[ ");
    for(int a =0;a<n+1;a++){
    printf("%d ",A[a]);
    }
    printf("]");
    return 0;
    }
    
       
