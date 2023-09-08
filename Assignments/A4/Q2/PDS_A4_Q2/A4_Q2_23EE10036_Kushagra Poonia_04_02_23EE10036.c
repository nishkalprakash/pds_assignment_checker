//Roll no: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>
#include <stdlib.h>

int main(){
  int max=0;
  int num=0;

  for(int i = 0; i<20; i++){
    num = rand()%100;
    printf("%d ", num);
    if(num>max){
      max = num;
    }    
  }

  printf("\nThe biggest number generated is %d\n", max);
}
