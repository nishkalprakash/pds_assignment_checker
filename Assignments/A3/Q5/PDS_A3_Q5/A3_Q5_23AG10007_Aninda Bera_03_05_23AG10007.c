#include <stdio.h>
int main()
{
  int a,b,c,d,e,f;
  printf("enter coefficient of x^0:");
  scanf("%d", &f);
  printf("enter the coefficient of x^1:");
  scanf("%d", &e);
  printf("enter the coefficient of x^2:");
  scanf("%d", &d);
  printf("enter the coefficient of x^3:");
  scanf("%d", &c);
  printf("enter the coefficient of x^4:");
  scanf("%d", &b);
  printf("enter the coefficient of x^5;");
  scanf("%d", &a);
  printf("polynomial=%d*x^5+%d*x^4+%d*x^3+%d*x^4+%d*x^1+%d\n",a,b,c,d,e,f);
  printf("derivative=%d*x^4+%d*x^3+%d*x^2+%d*x^1+%d\n",a*5,b*4,c*3,d*2,e);
  return 0;
}
  
