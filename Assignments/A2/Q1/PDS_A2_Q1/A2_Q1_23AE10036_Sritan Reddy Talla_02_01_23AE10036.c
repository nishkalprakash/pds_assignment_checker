#include<stdio.h>
int main(){
  //T.Sritan Reddy
  //23AE10036
  float a;
  

  printf("enter a number: \n");
  scanf("%f",&a);
  int inp=(int)a;
  float flp=a-inp;
  
  printf("the integral part=%d and fractional part=%f",inp, flp); 


  return 0;}
