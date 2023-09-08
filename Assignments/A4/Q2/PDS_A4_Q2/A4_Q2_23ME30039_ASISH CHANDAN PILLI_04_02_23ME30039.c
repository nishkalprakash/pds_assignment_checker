//name: PILLI ASISH CHANDAN
//R:NO: 23ME30039

#include<stdio.h>
#include<stdlib.h>

int main() {
  int i,max=-1,r;
  for(i=0;i<20;i++) {
    r = rand()%100;
    printf(" %d\n", r);
    if(r>max){
      max=r;
    }
  }
  printf("max is %d \n",max);
}
 
  
