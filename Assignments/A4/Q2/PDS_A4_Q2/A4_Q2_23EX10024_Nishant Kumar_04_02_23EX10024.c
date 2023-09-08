//ROLL 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,x,max=0;
  for(i=0;i<20;i++){
    printf("%d\n", x= 1+rand()%100);
    if(x>max)max=x;
  }
  printf("The max number is %d\n", max);
  return 0;
}
