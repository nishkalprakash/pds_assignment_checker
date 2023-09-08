//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>
#include <stdlib.h>

int main(){
  int max,a;
  max=rand()%100 + 1;
  printf("Random number 1: %d\n", max);
  for (int i=0; i<19; i++){
    a=rand()%100 + 1;
    printf("Random number %d: %d\n", i+2 ,max);
    if (a>max) max=a;
  }
  printf("The maximum number generated was %d.\n", max);
  return 0;
}

