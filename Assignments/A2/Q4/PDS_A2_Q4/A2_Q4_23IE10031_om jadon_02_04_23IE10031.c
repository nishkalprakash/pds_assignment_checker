#include <stdio.h>
// Roll no. 23IE10031
// Name - Om singh Jadon

int main()
{
  int m,n;
  printf("Type values of m and n with a space in between: ");
  scanf("%d %d", &m, &n);

  printf("The sum of m and n is: %d\n", m+n);
  printf("n subtracted from m is equal to: %d\n", m-n);
  printf("Product of m and n is: %d\n", m*n);
  printf("The integer quotient is: %d\n", m/n);
  printf("The integer remainder is: %d\n", m%n);
  printf("The floating point quotient is: %f\n",(float)m/n);
  printf("The sum of squares is: %d\n", m*m+n*n);
  printf("The square of the sum is: %d\n", (m+n)*(m+n));
  printf("The average is: %f\n", (m+n)/2.0);
  printf("The average of the sum of the squares is: %f\n", (m*m+n*n)/2.0);
}
