// Code to read and rearrage the numbers of an array
// Code Creator: Bhumi Garg
// Roll No: 24NA10021

#include <stdio.h>
#define N 100

int main()
{
         
         int n,i,j,A;
         int arr[N];
         
        
         scanf ("%d", &n);
         // this statement scans the array size we want//
         
         if (n > N)
         printf (" Error: n > 100");
         
         for(i = 0; i < n; i++)
         scanf ("%d", &arr[i]);
         // This loop scans and stores all the values in the array//
         
        printf ("Orinigal Array: ");
        
         for (i = 0; i < n; i++)
         printf ("%d", arr[i]);
         
         
        for( j = 1; j < n; j++)
  
       {  while (arr[j] < 0, arr[j-1] > 0, j >= 1)
        
        A = arr [j-1];
        arr[j-1] = arr[j];
        arr[j] = A ;
        j = j-1;
     
      }
     
      printf ("\nRearranged Array: ");
        
         for (i = 0; i < n; i++)
         printf (" %d\n", arr[i]);
         
 }
