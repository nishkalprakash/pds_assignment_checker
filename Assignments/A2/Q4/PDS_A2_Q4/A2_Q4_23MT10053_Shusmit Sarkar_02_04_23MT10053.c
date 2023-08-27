#include<stdio.h>
int main()
{
  int m,n;
  printf ("Enter first number ");
  scanf("%d",&m);
  printf ("Enter second number ");
  scanf("%d",&n);
  int s,d,P;
  s = m+n;
  d = m - n;
  P = m*n;
  printf("The sum is %d",s);
  printf("\n");
  printf("The difference is %d",d);
  printf("\n");
  printf("The product is %d",P);
  printf("\n");
  int q,r;
  q = m/n;
  r = m%n;
  printf("The quotient is %d",q);
  printf("\n");
  printf("The remainder is %d",r);
  printf("\n");
  float Q;
  Q = (float)m/n;
  printf("The quotient with decimals %f",Q);
  printf("\n");
  int x,y;
  x = (m*m)+(n*n);
  y = x + (2*m*n);
  printf("The sum of squares is %d",x);
  printf("\n");
  printf("The square of sum is %d",y);
  printf("\n");
  float a,b;
  a = (float)s/2;
  b = (float)x/2;
  printf("The average is %f",a);
  printf("\n");
  printf("The average of square of numbers is %f",b);
  return 0;
}
