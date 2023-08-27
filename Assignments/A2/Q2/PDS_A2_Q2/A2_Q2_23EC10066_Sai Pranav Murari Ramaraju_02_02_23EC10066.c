#include<stdio.h>
int main (){

  int months;
  printf("enter months : \n");
  scanf("%d", &months);
  int years;
  years = months/12 + 1;
  printf("the age is : %d",years);
  return 0;
  

}
