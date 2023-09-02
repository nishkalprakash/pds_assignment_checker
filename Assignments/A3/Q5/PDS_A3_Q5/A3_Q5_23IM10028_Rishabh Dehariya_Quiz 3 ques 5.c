//Roll No - 23IM10028
//Name - Rishabh Dehariya

#include<stdio.h>

int main()
{
  int a,b,c,d,e,f;
  printf("Enter Coefficient of x^0:");
  scanf("%d", &f);

  printf("\nEnter Coefficient of x^1:");
  scanf("%d", &e);

  printf("\nEnter Coefficient of x^2:");
  scanf("%d", &d);

  printf("\nEnter Coefficient of x^3:");
  scanf("%d", &c);

  printf("\nEnter Coefficient of x^4:");
  scanf("%d", &b);

  printf("\nEnter Coefficient of x^5:");
  scanf("%d", &a);

  printf("\nPolynomial : %d*x^5 + %d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d", a, b, c, d, e, f);
  
  printf("\nDerivative : 5*%d*x^4 + 4*%d*x^3 + 3*%d*x^2 + 2*%d*x + 1*%d", a, b, c, d, e);

  return 0;
}
