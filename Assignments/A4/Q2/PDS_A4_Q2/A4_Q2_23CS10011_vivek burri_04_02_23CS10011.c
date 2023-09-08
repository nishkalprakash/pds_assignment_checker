// roll no 23CS10011
// name vivek
#include<stdio.h>
#include<stdlib.h>
int main(){
  int a,j,max=0;
  for(j=1;j<=20;j++){
    a=(rand()%99)+1;
    printf("\n%d",a);
    if (a>max)
      max=a;}
  printf("the maximum of all random numbers is %d",max);
  return 0;}
