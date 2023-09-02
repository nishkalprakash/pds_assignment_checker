//Roll number:23ME10082
//Name:Siddharth Behera
#include<stdio.h>
int main()
{
  int a,b,c,d,e,f;

  printf("enter the cooeficient of x^0");
  scanf("%d",&f);
   printf("enter the cooeficient of x^1");
  scanf("%d",&e);
   printf("enter the cooeficient of x^2");
  scanf("%d",&d);
   printf("enter the cooeficient of x^3");
  scanf("%d",&c);
   printf("enter the cooeficient of x^4");
  scanf("%d",&b);
   printf("enter the cooeficient of x^5");
  scanf("%d",&a);
  printf("polynomial:%dx^5+%dx^4+%dx^3+%dx^2+%dx+%d\n",a,b,c,d,e,f);
  printf("Derivative:(5*%d)x^4+(4*%d)x^3+(3*%d)x^2+%dx+%d",a,b,c,d,e);
}
  
