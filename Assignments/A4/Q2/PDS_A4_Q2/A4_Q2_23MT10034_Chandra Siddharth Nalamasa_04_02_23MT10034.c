//Roll No:<23MT10034>
//Name:<N.Chandra Siddharth>
#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,x;
  int max=0;
  printf("Random numbers are");
  for(i=0;i<20;i++){
    x=rand()%100;
    printf("%d\n",x);
    if(x>max){
      max=x;
  }
    printf("Max of all random numbers are%d\n",max);
  return 0;
}
