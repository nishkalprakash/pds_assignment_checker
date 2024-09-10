//Name-Amartiya Kakodiya
//Roll No.-24NA10013
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define N 15
#define A 20
#define B 25
int main(){
     int count;
     srand(count);
     int i=0;
     for(count=0;count<=14;count++){
     
     int x = rand()%100+1;
     printf("Random Number:%d\n",x);
     int k,y;
     float Filter[N];
     for(k=1;k<=x;k++)
     y=(pow(k,2)/(2*k+1))-(pow(-1,k))*k+sin(x/3);
     
     
       
       printf("Filter[%d]=%d\n",i,y);
       i++;
}
   
     return 0;
}    
     
     
     

