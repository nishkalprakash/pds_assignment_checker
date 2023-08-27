//Roll no.: 23IE10011
//Name: Avik Ghosh
#include <stdio.h>

int main( )
{
  // m and n variables are used to take two integers
  int m,n;
  printf("Enter the two integers\n");
  scanf("%d %d",&m,&n);
  printf("The sum %d\n", m+n);
  printf("The difference %d\n", m-n);
  printf("The product %d\n", m*n);
  printf("The integer quotient %d\n", m/n);
  printf("The integer remainder %d\n", m%n);
  printf("The floating point quotient %f\n", ((float)m/n));
  printf("The sum of squares %d\n", (m*m)+(n*n));
  printf("The square of the sum %d\n", ((m+n)*(m+n)));
  printf("The average %f as a floating point number\n", ((float)(m+n))/2);
  printf("The average of the sum of the squares %f as a floating point number\n", ((float)((m*m)+(n*n)))/2);
}
