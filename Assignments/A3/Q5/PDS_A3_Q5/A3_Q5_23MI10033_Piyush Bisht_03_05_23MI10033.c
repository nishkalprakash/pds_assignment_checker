//Roll No.:23MI10033
//Name:Piyush Bisht

#include <stdio.h>
int main()
{
  int a, b, c, d, e, f;
  printf("Enter coefficient of x^o: ");
  scanf("%d", &f);
  printf("\nEnter coefficient of x^1: ");
  scanf("%d", &e);
  printf("\nEnter coefficient of x^2: ");
  scanf("%d", &d);
  printf("\nEnter coefficient of x^3: ");
  scanf("%d", &c);
  printf("\nEnter coefficient of x^4: ");
  scanf("%d", &b);
  printf("\nEnter coefficient of x^5: ");
  scanf("%d", &a);
  printf("\nPolynomial: %d*x^5 + %d*x^4 + %d*x^3 + %d*x^2 + %d*x^1 + %d", a, b, c, d, e, f);
  printf("\nDerivative: %d*x^4 + %d*x^3 + %d*x^2 + %d*x^1 + %d", 5*a, 4*b, 3*c, 2*d, e);
  return 0;
}
  
