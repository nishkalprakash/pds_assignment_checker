#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5
#define A 4
#define B 3
double calcy(int x){  //writing expression of y
    double sum=0;
    for(int k=1;k<=x;k++){
        sum+=k*k/(2*k+1) - pow(-1,k)*(k) ;
        }
    return sum+sin(x/3);
    }
    

int main(void){
    //1.Filling the filter Filter
    double Filter[N];
    
    //entering into the array
    for(int i=0;i<N;i++){
        int x=rand()%100 + 1;
        Filter[i]=calcy(x);
        
        }
    
    double min=Filter[0],max=Filter[0];    
    for(int i=1;i<N;i++){
         
         if(min>Filter[i]){
                                   //finding the minimum value in the array Filter
             min=Filter[i];
            }
     
            
         if(max<Filter[i]){ 
                                   //finding the maximum value in the array Filter
             max=Filter[i];
             }
     }
       
    
   //2.Entering values into Bin_A and Bin_B:
    int Bin_A[A],Bin_B[B];
    
    
    int a=0,b=0;
    while(a<A || b<B){
    
    int x=rand()%100 + 1;
    
    double y=calcy(x);
    
       if(y<min && a<A ){
           Bin_A[a]=y;     
           a++;
           }
       if(y>max && b<B){
           Bin_B[b]=y;
           b++;
           }
        
    }
    
    printf("Displaying Filter array: ");  // displaying the filter array 
    for(int i=0;i<N;i++){
        printf("%lf  ",Filter[i]);
        }
         
    printf("\n");
    printf("Displaying Bin_A \n");   // DISPLAYING BIN_A
    for(int i=0;i<a;i++){
        printf("%d  ",Bin_A[i]);
        }
    printf("\n");
    printf("Displaying Bin_B \n");   // DISPLAYING BIN_B
    for(int i=0;i<b;i++){
        printf("%d  ",Bin_B[i]);
        }
    
}
