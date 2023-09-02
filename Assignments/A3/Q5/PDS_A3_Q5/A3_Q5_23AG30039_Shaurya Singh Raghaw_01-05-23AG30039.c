//SHAURYA SINGH RAGHAW
// 23AG30039

#include<stdio.h>
int main()
{
  signed int a,b,c,d,e,f,p,q,r,s;
  printf("enter the coefficient of x^0:\n");
  scanf("%d",&f);
  printf("enter the coefficient of x^1:\n");
  scanf("%d",&e);
  printf("enter the coefficient of x^2:\n");
  scanf("%d",&d);
  printf("enter the coefficient of x^3:\n");
  scanf("%d",&c);
  printf("enter the coefficient of x^4:\n");
  scanf("%d",&b);
  printf("enter the coefficient of x^5:\n");
  scanf("%d",&a);

  printf("the polynomial is:%d*x^5 + %d*x^4 + %d*x^3  + %d*x^2 + %d*x + %d\n",a,b,c,d,e,f);

  p=5*a,q=4*b,r=3*c,s=2*d;

  printf("derrivative of polynomial is: (%d)*(x^4)+ (%d)*(x^3)+ (%d)*(x^2)+ (%d)*(x)+%d",p,q,r,s,e);

  return 0;

}
