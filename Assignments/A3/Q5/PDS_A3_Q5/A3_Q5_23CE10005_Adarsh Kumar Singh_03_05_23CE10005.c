// Name - Adarsh Kumar Singh
// Roll No. 23CE10005

#include<stdio.h>
int main ()
{
  float a, b, c, d, e, f;
  printf("\nEnter the co-efficient of x^0: ");
  scanf("%f", &f);
  printf("\nEnter the co-efficient of x^1: ");
  scanf("%f", &e);
  printf("\nEnter the co-efficient of x^2: ");
  scanf("%f", &d);
  printf("\nEnter the co-efficient of x^3: ");
  scanf("%f", &c);
  printf("\nEnter the co-efficient of x^4: ");
  scanf("%f", &b);
  printf("\nEnter the co-efficient of x^5: ");
  scanf("%f", &a);

  printf("\nThe polynomial of degree 5 is   %.2f*x^5 + %.2f*x^4 + %.2f*x^3 + %.2f*x^2 + %.2f*x + %.2f", a, b, c, d, e, f);
  printf("\nAnd, \nIt's derivative is   %.2f*x^4 + %.2f*x^3 + %.2f*x^2 + %.2f*x + %.2f", 5*a, 4*b, 3*c, 2*d, e);
  printf("\n\nThankyou\n\n");
  return 0;
}
  
