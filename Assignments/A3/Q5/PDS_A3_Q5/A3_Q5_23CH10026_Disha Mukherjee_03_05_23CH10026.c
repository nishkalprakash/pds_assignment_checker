//Name:Disha Mukherjee
//Roll no:23CH10026

#include <stdio.h>

int main()
{
  int a,b,c,d,e,f;
  printf("enter coefficient of x^0\n");
  scanf("%d",&f);
  printf("\nenter coefficient of x^1\n");
  scanf("%d",&e);
  printf("\nenter coefficient of x^2\n");
  scanf("%d",&d);
  printf("\nenter coefficient of x^3\n");
  scanf("%d",&c);
  printf("\nenter coefficient of x^4\n");
  scanf("%d",&b);
  printf("\nenter coefficient of x^5\n");
  scanf("%d",&a);
  printf("\nPolynomial:%d*x^5 + %d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d",a,b,c,d,e,f);
  printf("\nDerivative:%d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d",5*a,4*b,3*c,2*d,e);
  return 0;
}

  
