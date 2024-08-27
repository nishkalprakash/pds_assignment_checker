//Code to display the two largest positive values entered so far
// Code creator: Bhumi Garg
// Roll No: 24NA10021

#include <stdio.h>
int main ()
{
      
       int max = -1, max2 = -1, A;
       
       printf ("Enter numbers: ");
       
    
      
     while (1)
   {  
     scanf ("%d", &A); 
     if (A < 0) break; 
   
      if ( A > max ) max = A, max2 = max;
       
       if (max2 < 0)
       printf ("Second largest number: Value not yet entered");
      
       printf (" Largest number: %d\n", max);
       printf ("Second largest number: %d\n", max2);
     
    }
        
      
      
   
   
 }
       
       
      
