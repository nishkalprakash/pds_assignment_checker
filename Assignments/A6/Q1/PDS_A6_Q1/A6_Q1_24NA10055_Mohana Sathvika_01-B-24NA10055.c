#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define A 10
#define B 10

float generator(int x){
    int y,temp;   //generating the value y for a random number x
    for(int k=1;k<=x;k++){
    temp= (pow(k,2))/(2*k+1)- (pow((-1),k))*k;
    y=y+temp;
    }
    y=y+x*sin(x/3);  
    return y; } 

int main(){
    
    float Filter[N]; 
    int Bin_A[A];
    int Bin_B[B];
     // generating a random number x and adding output into filter
       srand(42);
       for(int i=0; i<N; i++){
       
       
       int x=rand() % 100 + 1;
       
       Filter[i]= generator(x); }
       srand(42);
       int min = Filter[0];
       int max=Filter[0];
       for (int i=1;i<N;i++){
             if(Filter[i]< min) min = Filter[i];
             if(Filter[i]>max) max= Filter[i];
             }
       int size_B=0;
       int size_A=0;
       while(1){
          int x=rand() % 100 + 1;
          //printf( "random number x is : %d", x);
         int y=generator(x);
               
               if(y>min || size_B<B){ //adding values into bin_b
                     
                     Bin_B[size_B]=x; 
                     size_B++;
                       } 
                      
               else if(y< max || size_A<A){ // Adding values into bin_a
                    
                    Bin_A[size_A]=x;
                    size_A++;}
                    
        if(size_A< A || size_B< B){
             break; }
             }
         printf("\n");     
        printf("the array filter is:");      
        for(int i=0;i<N;i++){
        printf("%f ", Filter[i]);
         }
         printf("\n");  
        printf("the array bin_A is:");
        for(int i=0;i<A;i++){
        printf(" %d", Bin_A[i]);}
        printf("\n");  
        printf("the array bin_B is:");
        for(int i=0; i<B; i++){
        printf(" %d",Bin_B[i]);}
        
           printf("\n");  
       
       }
    
    
    
    
    
    
    
    
    
    
    

