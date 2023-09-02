#include<stdio.h>
int main()
{
  int a,b,c,d,e,f;
  printf("Enter coefficient of x^5 : ");
  scanf("%d",&a);
  printf("\n");
  printf("Enter coefficient of x^4 : ");
  scanf("%d",&b);
  printf("\n");
  printf("Enter coefficient of x^3 : ");
  scanf("%d",&c);
  printf("\n");
  printf("Enter coefficient of x^2 : ");
  scanf("%d",&d);
  printf("\n");
  printf("Enter coefficient of x^1 : ");
  scanf("%d",&e);
  printf("\n");
  printf("Enter coefficient of x^0 : ");
  scanf("%d",&f);
  printf("\n");
  printf("Polynomial is %d*x^5 + %d*x^4+ %d*x^3+ %d*x^2+ %d*x + %d",a ,b ,c ,d ,e ,f);
  printf("\n");
  int n,m,o,p;
  n=5*a;
  m=4*b;
  o=3*c;
  p=2*d;
  printf("\n");
  printf("Derivative : %d*x^4 + %d*x^3+ %d*x^2+ %d*x + %d",n ,m, o, p, e);
  return 0; 
}
