//Name:Dipon Sarkar
//Roll: 24NA10025
//Terminal number:26
//set:B

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define N 10
#define A 10
#define B 10


int main()
{
   float filter[N],Bin_B[B],Bin_A[A];
    int j=0,k,i,x,y,temp=0,BS;
    

      for(i=0;i<N;i++){
      srand(42);
    int randomnumber= rand()%100+1;
     printf("Random number :%d\n",randomnumber);
     }
      x=BS;     //generating a random number//
 while(1){
 
    int randomnumber= rand()%100+1;
     x=BS;  //generating a random number and computing it as x//
      for(k=1;k<=x;k++) { //creating an infinite loop so that it continues to generate number//
  
   temp+=(pow(k,2))/(2*k+1),pow(-1,k)*k;
   }
  y=temp+sin(x/3); 
  filter[i]=y;  // computing value of y//
  }
for(i=0;i<N;i++){
 for (k=1;k<=x ;k++){
 temp=(pow(k,2))/(2*k+1), pow(-1,k)*k;
 }
 y=temp+sin(x/3);
 filter[i]=y;
 //using the computed value of y in filter array until full//
 printf("%d%d",x,y);
 }
  
 

  
   for(i=0;i<=N;i++){
      if(y=filter[i]){
      Bin_A[j]=y;
      j++;
      }
    else if(y=filter[i]){
    Bin_B[k]=y;
    k++;
 }

    if(j==A || k==B){
    break;    //breaking an infinite loop//
 }
 }
     printf("\nBin_A");
    for(j=0;j<=A;j++){
    printf("%f",Bin_A[j]); // printing array//
    }
    
    printf("\nBin_B");
    for(i=0;i<N;i++){
     printf("%f", Bin_B[k]);
     }
     
     printf("\nfilter:");
      
      
     
     
     
     
     
   
   
   
   
   
   getchar();
   return 0;
   }
 

