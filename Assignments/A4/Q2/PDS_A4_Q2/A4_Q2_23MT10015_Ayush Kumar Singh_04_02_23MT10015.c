//NAME: AYUSH KUMAR SINGH
//Roll No. 23MT10015

#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, x;
  int max=0;
  printf("Random numbers are:\n");
  for(i =0; i<20;i++){

    x = rand()%100;
    printf("%d\n",x);
    if(x>max){
      max = x;
    }
  }printf("Maximum of the given random numbers is: %d\n", max);
  return 0;
}
