#include<stdio.h>
int main()
{
  int a,b,c,d,e,f ,x;
  printf("enter the coeffients;");
  scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
  printf("polynomial=%d*x^5+%d*x^4+%d*x^3+%d*x^2+%d*x^1+%d*x^0",a,b,c,d,e,f);
  printf("derivative=%d*5*x^4+%d*4*x^3+%d*3*x^2+%d*2*x^1+%d*1*x^0",a,b,c,d,e);
  return 0;
}
  
