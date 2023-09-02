//Roll No. : 23MA10056
//Name: Shantanu

#include<stdio.h>
int main()

{
  int a,b,c,d,e,f ;
  float  Polynomial , Derivative ;

  printf("Enter the coefficient of x^o");
  scanf("%d",&f);
printf("Enter the coefficient of x^1");
  scanf("%d", &e);
  printf("Enter the coefficient of x^2");
scanf("%d", &d);
printf("Enter the coefficent of x^3");
  scanf("%d", &c);
  printf("Enter the coefficent x^4");
scanf("%d",&b);
printf("Enter the coefficient of x^5");
  scanf("%d",&a);

  printf("Polynomial: %d*x^5 + %d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d", a, b,c,d,e,f);
  printf("Derivative: 5*%d*x^4 + 4*%d*x^3 + 3*%d*x^2 +2*%d*x + % d", a ,b,c,d,e);
  


  return 0 ;
}
