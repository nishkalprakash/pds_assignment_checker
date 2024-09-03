//Code creator Shatakshi Shukla
// Program to segregate negative and positive terms of an array 
// Roll no . 24NA10067
#define N 100 
#include <stdio.h>
int main()
{
   int A[N] , n ;
   printf("Enter the number of terms in an array :");
   scanf("%d",&n);
   getchar();
   printf("Original Array : ");
   for (int i = 0 ; i< n; i++)     //taking input from user (array elements)
   {
    scanf("%d" , &A[i]);
    }
    printf("\n");
    printf("Rearranged array :");
    for (int i =0; i< n ;i++)
    {
      if(A[i] < 0)                       // condition so that negative numbers are on the left hand side
      printf("%d" , A[i]);
      }
    for(int j =0 ; j<n ; j++)
    {
    // condition so that positive numbers remain on right hand side
      if(A[j] > 0)
      printf(" %d " , A[j]);
      }
      return 0;
      }
    
  
