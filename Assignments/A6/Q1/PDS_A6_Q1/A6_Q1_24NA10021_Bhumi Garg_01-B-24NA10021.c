//Name:Bhumi Garg
//Roll No: 24NA10021
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define A 5
#define B 5

int main() {

     int Bin_A[A] = {0}, Bin_B[B] = {0};
     float Filter[N] = {0}, x,y;
     int i,j=0,k=0,temp=0, binAlen = 0, binBlen = 0, max=0, min=10000000;
     
     srand(50); 
    
     for(i=0; i < N; i++)
   {  
           
           int RN = rand() % 100 +1;
      
          x = RN;  //generating a random number and storing it in x//
      
          for(k=1; k<=x; k++)
        {   
            temp += pow(k,2)/(2*k + 1) - pow(-1,k)*k ;
        }
     
        y = temp + sin(x/3); // computing value of y//
        
        Filter[i] = y; 
        // Storing the computed value of y in Filter array until it is full//
        printf ("%f, %f\n",x,y); // printing the random numbers and y//
     }
     
      printf("\nFilter: ");
          for(i=0; i < N; i++)
           printf("%f, ", Filter[i]); // Printing array Filter//
           
          for (i=0; i<N; i++)
        {   
              if(Filter[i]>max) // computes max of all array values//
                 max = Filter[i];
              
              if(Filter[i] < min)// computes min of all array
              min = Filter[i];
         }
           
           temp = 0;
            
           while(1) 
  //creating an infinite loop that will continue to generate numbers//
     {      
          
              int RN = rand() % 100 +1;
      
              x = RN;  //generating a random number and storing it in x//
          
                   for(k=1; k<=x; k++)
                  {   
                       temp += pow(k,2)/(2*k + 1) - pow(-1,k)*k ;
                  }
     
              y = temp + sin(x/3); // computing value of y for x//
        
              printf ("\n%f, %f\n",x,y);
            
                
                
                 if (y>min)
                  {
                      Bin_B[k] = y; // Storing y > any value of array Filter in array Bin_B and incrementing the address of the value by 1//
                      k++;
                      binBlen++;
                   
                  }
                
                  if(y < max)
                   {
                       Bin_A[j] = y;// Storing y < any value of array Filter in array Bin_A and incrementing the address by 1//
                       j++ ;
                       binAlen++;
                   }
               
               
             if((j==A) || (k==B)) break; // breaking the infinite loop as soon as either of Bin_A or Bin_B are full//      
           
           
        }     
            
       
         printf("\nBin_A: ");
          for(j=0; j < binAlen; j++)
           printf("%d, ", Bin_A[j]); // Printing array Bin_A//
           
         printf("\nBin_B: ");
          for (k=0; k < binBlen; k++)
           printf("%d, ", Bin_B[k]); // Printing array Bin_B//
        
        
   }     
        
        
        
