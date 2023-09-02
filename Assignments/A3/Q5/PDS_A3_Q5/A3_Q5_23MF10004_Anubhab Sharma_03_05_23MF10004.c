#include <stdio.h>
int main()

{
  int p,q,r,s,t,u;
  printf("Enter the coefficient of x^5 \n");
  scanf("%d", &p);
  printf("Enter the coefficient of x^4 \n");
  scanf("%d", &q);
  printf("Enter the coefficient of x^3 \n");
  scanf("%d", &r);
  printf("Enter the coefficient of x^2 \n");
  scanf("%d", &s);
  printf("Enter the coefficient of x^1 \n");
  scanf("%d", &t);
  printf("Enter the coefficient of x^0 \n");
  scanf("%d", &u);

  printf("The polynomial is %d x^5 + %d x^4 + %d x^3 + %d x^2 + %d x^1 + %d x^0 \n", p,q,r,s,t,u);
  printf("The derivative is %d x^4 + %d x^3 + %d x^2 + %d x^1 + %d x^0 \n", 5*p, 4*q, 3*r, 2*s, t);

}
 
