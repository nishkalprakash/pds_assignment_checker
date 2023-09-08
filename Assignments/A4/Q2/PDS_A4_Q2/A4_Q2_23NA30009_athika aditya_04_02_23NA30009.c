#include <stdio.h>
#include <stdlib.h>

int main(){
  printf("program to generate random numbers btw 1-100:\n");

  int max=0,var;

  for(int i=1;1<=20;i++){
    var=rand()%50;
    printf("%d\n",var);

    if(var>max){
      max=var;
    }
  }

  printf("the maximum is %d\n",max);
  return 0;
}

 
