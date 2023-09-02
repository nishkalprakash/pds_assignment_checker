#include<stdio.h>
int main(){
  int a,b,c,d,e,f;
  int a1,b1,c1,d1;
  printf("Enter the coefficient of x^0:");
  scanf("%d",&f);
  printf("Enter the coefficient of x^1:");
  scanf("%d",&e);
  printf("Enter the coefficient of x^2:");
  scanf("%d",&d);
  printf("Enter the coefficient of x^3:");
  scanf("%d",&c);
  printf("Enter the coefficient of x^4:");
  scanf("%d",&b);
  printf("Enter the coefficient of x^5:");
  scanf("%d",&a);
  a1=5*a;
  b1=4*b;
  c1=3*c;
  d1=2*d;
  printf("The polynomial thus formed is: %d*x^5+%d*x^4+%d*x^3+%d*x^2+%d*x+%d \n",a,b,c,d,e,f);
  printf("The first derevative of the polynomial is: %d*x^4+%d*x^3+%d*x^2+%d*x+%d",a1,b1,c1,d1,e);
  return 0;
}  
