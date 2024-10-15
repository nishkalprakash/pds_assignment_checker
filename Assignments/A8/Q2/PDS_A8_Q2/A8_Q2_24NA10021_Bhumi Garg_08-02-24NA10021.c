// Code to sort and array and insert an integer m in the correct place
// code creator bhumi garg
// roll no 24NA10021.c

#include <stdio.h>

void bubble_sort (int* A, int size){

       int i,j,t;
       
       for(i=0; i<size; i++)
      {   
         for(j=0; j< size -i-1; j++)
          {
             if (A[j] > A[j+1])
             
             {  
               t = A[j];
               A[j] = A[j+1];
               A[j+1] = t;
      
              }
           }
       
      }
}           
          
int main (){
    
        int size, m, i, A[101];
        
        scanf("%d", &size);
        
        for (i=0; i< size; i++)
         scanf("%d", &A[i]);
         
         bubble_sort (A, size);
         
         for(i=0; i<size; i++)
           printf("%d, ", A[i]);
           
         scanf("%d", &m);
         
         //This part checks the integer m with each element from the back of the array. As long as m is smaller than the elements, the elements are shifted one position to the right. The moment m becomes greater than an element, it is placed after it.//
         
         for(i=size-1; m < A[i]; i--)
         {          
           A[i+1] = A[i];
          } 
         
         A[i+1] = m;
         
         for(i=0; i<=size; i++)
          printf("%d, ", A[i]);
          
 }
         
        
