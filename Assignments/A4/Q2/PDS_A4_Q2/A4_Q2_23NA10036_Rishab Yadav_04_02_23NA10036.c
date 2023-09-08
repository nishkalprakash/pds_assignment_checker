//Roll no - 23NA10036
//Rishab Yadav


#include <stdio.h>
#include <stdlib.h>

int main(){

  printf("Program to generate random numbers between 1 - 100:\n");

  int max = 0, var;

  for(int i = 1; i <= 20; i++){
    
    var = rand()%50; //generates random number
    printf("%d\n", var);

    if(var > max){
      max = var;
    }
  }

  printf("The maximum number is: %d\n", max);

  return 0;
}
