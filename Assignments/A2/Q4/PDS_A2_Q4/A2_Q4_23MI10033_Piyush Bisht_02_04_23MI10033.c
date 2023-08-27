//Roll No.: 23MI10033
//Name: Piyush Bisht

#include <stdio.h>
int main()
{
  int m, n;
  printf("Enter two numbers");
  scanf("%d %d", &m, &n);
  printf("\nSum = %d", m+n);
  printf("\nDifference = %d", m-n);
  printf("\nProduct = %d", m*n);
  printf("\nInteger qoutient = %d", m/n);
  printf("\nInteger remainder = %d", m%n);
  printf("\nFloating point quotient = %f", (float)m/n);
  printf("\nSum of squares = %d", m*m+n*n);
  printf("\nSquare of the sum = %d", (m+n)*(m+n));
  printf("\nAverage = %f", (m+n)/2.0);
  printf("\nAverage of squares = %f", (m*m+n*n)/2.0);
  return 0;
}
