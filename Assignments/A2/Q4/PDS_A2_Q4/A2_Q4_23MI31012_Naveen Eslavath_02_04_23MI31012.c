#include <stdio.h>
int main()
{
  int m,n,o,p;
  float a,b,c;
  scanf("%d",&m);
  printf("Enter first number:%d\n",m);
  scanf("%d",&n);
  printf("Enter second number:%d\n",n);
  p=m/n;
  a=m/n;
  o=m%n;
  b=(m+n)/2.0;
  c=(m^2+n^2)/2.0;
  printf("The sum:%d\n",m+n);
  printf("The difference:%d\n",m-n);
  printf("The product:%d\n",m*n);
  printf("The integer quotient:%d\n",p);
  printf("The integer remainder:%d\n",o);
  printf("The floating point remainder:%f\n",a);
  printf("The sum of the squares:%d\n",m^2+n^2);
  printf("The square of the sum:%d\n",(m=n)^2);
  printf("The average as a floating point number:%f\n",b);
  printf("The average of the sum of the squares as a floating number:%f\n",c);
  return 0;
}
  
  
