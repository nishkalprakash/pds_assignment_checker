#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define N 10
#define A 10
#define B 10
  
int main(){
    int Bin_A[A], Bin_B[B];
    float Filter[N];
    srand(42);
    float highest = 0;
    float lowest = 10000;
    
    for(int i = 0; i<N; i++){
        //to generate random numbers.
        int randomNumber = rand()%100+1;
        float x = randomNumber;
        
        float y = sin(((x*3.141592)/180)/3);
        for(float k = 1; k<(x+1); k++){
            y+=((k*k)/(2*k+1))-(pow(-1,k));
            }
        Filter[i] = y;
        //Highest and lowest are taken so that we can do part 2 c and d.
        if(y>highest){
            highest = y;
            }
            
        if(y<lowest){
            lowest = y;
            }    
            
        }
    //Filter array has been made here. Hence part 1 is finished.
   
    int m = 1;
    int a = 0;
    int b = 0;
    //an infinite loop begins here. This will only terminate when either Bin_A or Bin_B is filled up.
    while(m!=0){
        int randomNumber = rand()%100 + 1;
        float x = randomNumber;
        float y = sin(((x*3.141592)/180)/3);
        for(float k = 1; k<(x+1); k++){
            y+=((k*k)/(2*k+1))-(pow(-1,k));
            }
        //condition for Bin_B 
        if(y>lowest){
            Bin_B[b] = y;
            b++;
            }
        //condition for Bin_A
        if(y<highest){
            Bin_A[a] = y;
            a++;
            }
        //Break Condition. if either of the Bins fill up.    
        if((b == B)||( a == A)){
            break;
            }
        }
        //Here are the array displays.
    printf("Here is the array Filter: \n");       
    for(int i = 0; i<N; i++){
        printf("%f, ", Filter[i]);
        }
        
    printf("\n\nHere is the array Bin_A:\n");
    for(int i = 0; i<a; i++){
        printf("%d, ", Bin_A[i]);
        }
        
    printf("\n\nHere is the array Bin_B:\n");
    for(int i = 0; i<b; i++){
        printf("%d, ", Bin_B[i]);   
        }     

    return 0;
    }
