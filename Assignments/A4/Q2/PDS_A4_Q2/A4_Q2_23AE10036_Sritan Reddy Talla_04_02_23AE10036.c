#include<stdio.h>
#include<stdlib.h>
int main(){
  int x,max=0;
  for (int i=1;i<=20;i++){
    x=(rand()%100)+1;
  printf("%d \n",x);
  if (x>max){
    max=x;
  }
  }
printf("the max of numbers generated is %d \n",max);


  return 0;
}
