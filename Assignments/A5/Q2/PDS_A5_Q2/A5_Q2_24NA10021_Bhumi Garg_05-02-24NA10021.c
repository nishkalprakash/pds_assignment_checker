// Code to remove duplicates from array
// code creator: Bhumi Garg
// roll no: 24NA10021
#include <stdio.h>
#define N 100
int main ()

{ 
      int n, i,j, count = 1, A;
      int arr[N];
      scanf ("%d", &n);
      
      if (n > N)
      printf ("Error: n > 100");
      
      for (i = 0; i < n; i++)
      scanf ("%d", &arr[i]);
	      
      printf ("Original Array: ");
	      
      for (i = 0; i < n; i++)
      printf ("%d", arr[i]);
      // scan and print the original array//
    
       printf ("Duplicates:\n ");
    
      for (j = 1; j < n; j++)
       
		for (i = 0; i < n; i++)
		
		 if (arr[i] == arr [j])
	      {   
		 A = arr[j];
		 count += 1;
		     
		     for (i = j; i < n; i++)
		     arr[i] = arr[i+1];
		     n--;
	      }
      
      printf (" %d (%d)", A, count);
     
    
      printf ("Unique Array: ");
      for ( i = 0; i <n; i++)
      printf ("%d", arr[i]);
    }
