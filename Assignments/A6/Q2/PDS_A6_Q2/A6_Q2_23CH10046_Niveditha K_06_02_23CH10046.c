#include <stdio.h>
#include <stdlib.h>
  int array[30];

int sum(int size){
 
  int sm=array[0];
  for(int n=0; n<size; n++){
  sm = sm + sum(n+1);
  if(n==(size-1)) return sm;
  }}
int main(){


  for(int i=0; i<30; i++){
    array[i] = rand()%11 +20;
    printf("%d\t",array[i]);
  }printf("\n\n");

  int summ = sum(30);
  printf("%d\n",summ);
  
  return 0;
}
