#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){

  int N;
  printf("enter  the   value N :");
  scanf("%d",&N);
  if (N<=0){
      printf("invalid input ");
      return 1;
      }
   
  float Filter [N];
  int x;
  int y;
  
  int a;
  int b;
  
 scanf("%d %d ", &a,&b);
 
  float Bin_A [a];
  float Bin_B [b];
  
  
  srand(42);
  for(int c=0;c<N;c++){
  
  int randomNumber=rand()%100+1;
  
  printf("Random Number:%d\n",randomNumber);
   
   x=randomNumber;
 
   for(int k=1;k<=x;k++){
   
   y+= (k*k/2*k+1)-pow(-1,k)*(k)+sin(x/3);
   
    Filter[c]=y;
    }
    }
    
  for(int k=0;k<N;k++){
    
  printf("Filter[%d]=%lf",k,Filter[k]);
  printf("\n");
  
  }
  
 
  
for(int k=0;k<(a||b);k++){
  int randomNumber=rand()%100+1;
  
  printf("Random Number:%d\n",randomNumber);
   
   x=randomNumber;
 
   for(int k=1;k<=x;k++){
   
   y+= (k*k/2*k+1)-pow(-1,k)*(k)+sin(x/3);
   
   }
   
   for (int c=0;c<N;c++){
   if (y>Filter[c]){
    Bin_B[k]=x;
    }
   else if(y<Filter[c]){
    Bin_A[k]=x;
    }
    }
    }
    for(int k=0;k<a;k++){
    
  printf("Bin_A[%d]=%lf",k,Bin_A[k]);
  
  printf("\n");
  
  }
    for(int k=0;k<b;k++){
    
  printf("Bin_B[%d]=%lf",k,Bin_B[k]);
  
  printf("\n");
  
  
  }
    
    
  return 0;
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
 
