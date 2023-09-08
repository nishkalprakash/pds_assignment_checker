#include<stdio.h>
#include<stdlib.h>
int main(){
  int i;
  for(i=0;i<=20;++i){
    printf("%d\n",rand()%100);
  }
  int x,max,rand;
  x=0;
  if(x>=rand){
    max=x+rand;
    printf("The maximum number is %d");
  }
  
  return 0;
}
    
    
