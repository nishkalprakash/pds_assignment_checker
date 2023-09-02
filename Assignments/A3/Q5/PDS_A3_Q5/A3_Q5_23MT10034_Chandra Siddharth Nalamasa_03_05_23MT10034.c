#include<stdio.h>
int main ()
{
  int a,b,c,d,e,f;
  printf("Enter coefficient of x^0:");
  scanf("%d",&f);
  printf("Enter coefficient of x^1:");
  scanf("%d",&e);
  printf("Enter coefficient of x^2:");
  scanf("%d",&d);
  printf("Enter coefficient of x^3:");
  scanf("%d",&c);
  printf("Enter coefficient of x^4:");
  scanf("%d",&b);
  printf("Enter coefficient of x^5:");
  scanf("%d",&a);
  printf("Polynomial:%dx^5+%dx^4+%dx^3+%dx^2+%dx^1+%dx^0", a, b, c, d , e , f);
  int p,q,r,s,y,z;
  p=0*f;
  q=1*e;
  r=2*d;
  s=3*c;
  y=4*b;
  z=5*a;
  printf("Derivative:%dx^4+%dx^3+%dx^2+%dx^1+%dx^0", z , y , s , r , q);
  return 0;
}
