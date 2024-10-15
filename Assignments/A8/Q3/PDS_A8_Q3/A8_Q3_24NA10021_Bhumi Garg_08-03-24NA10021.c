// Code to modify the array and print the largest number formed by its elements
//code creator: bhumi garg
// roll no: 24NA10021

#include <stdio.h>

void bubble_sort (int* A, int size){

      int i,j,t;
       
       for(i=0; i<size; i++)
         for(j=size-1; j>= size - i -1; j--)
        { 
           if( A[j] > A[j-1])
           {
              t= A[j-1];
              A[j-1] = A[j];
              A[j] = A[j-1];
            
            }
         }
         
}
int main (){
    
        int A[101], size, i;
        
        scanf("%d", &size);
        
        for(i=0; i<size; i++)
         scanf("%d", &A[i]);
         
        bubble_sort (A,size);
    // This arranges thearray such that it is in decending order with single digit number in the first element place//
       if (A[size-1]/10 ==0)
       {
            
           for(i=0; i< size; i++)
           A[i+1] = A[i];
        
          A[0] = A[size+1];
          
        }
        
        
        
        
}        
