//ROLL 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,j,k,l,a,count=0;
  printf("Enter a positive integer less than or equal to 50\n");
  scanf("%d", &a);
  int x[a];
  printf("The random numbers are :\n");
  for(i=0;i<a;i++){
    printf("%d\n",x[i] = 10 + rand()% 91);
  }
  for (k=0;k<a-2; k=k+2){
    if(x[k]>x[k+2]){
      j=x[k+2];
      x[k+2]=x[k];
      x[k]=j;
      count++;
      
    }
  }
  printf("The  new series is\n");
  for(l=0;l<a;l++){
    printf("%d\n", x[l]);
  }
  printf("The numbers of changes were %d\n", count);
  return 0;
}

      
  
  
