#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,n,max=0;
  for(i=1;i<=20;i++){
    n = rand()%100+1;
    printf("the random numbers are : %d\n",n);
      if (n>max){
	max=n;
      }
  }
  printf("the maximum value is %d \n",max);
}
