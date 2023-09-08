#include<stdio.h>
#include<stdlib.h>

int main(){
  int x,max=1;
  for(int i = 1;i<=20;i++){
    x=rand()%100;
    printf("%d \n",x);
    
    
    if(x>max)max = x;
    
  }
  printf("the maximum of these numbers is %d \n",max);
  return 0;
}
