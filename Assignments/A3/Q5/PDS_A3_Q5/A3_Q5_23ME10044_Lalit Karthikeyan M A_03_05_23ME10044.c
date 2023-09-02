//Roll Number: 23ME10044
//Name: Lalit Karthikeyan M A

#include<stdio.h>

int main(){

  int a,b,c,d,e,f;

  printf("\n Enter the coefficient of x^0 :");
  scanf("%d", &f);

  printf("\n Enter the coefficint of x^1 :");
  scanf("%d", &e);

  printf("\n Enter the coefficient of x^2 :");
  scanf("%d", &d);

  printf("\n Enter the coefficient of x^3 :");
  scanf("%d", &c);

  printf("\n Enter the coefficient of x^4 :");
  scanf("%d", &b);

  printf("\n Enter the coefficient of x^5 :");
  scanf("%d", &a);

  printf("\n\n Polynomial: %d*x^5 + %d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d ",a,b,c,d,e,f);

  printf("\n\n Derivative: %d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d \n\n", a*5,b*4,c*3,d*2,e);

  return 0;

}

 
