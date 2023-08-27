//Roll no. 23MA10036
//Name: Nayandeep Deb

#include <stdio.h>

int main(){
  int m, n;
  printf("Give two values: ");
  scanf("%i %i",&m, &n);
  printf("Sum = %i\n",m+n);
  printf("Difference = %i\n", m-n);
  printf("Product = %i\n", m*n);
  printf("Integer Quotient = %i\n", m/n);
  printf("Integer Remainder = %i\n", m%n);
  printf("Sum of the squares = %i\n",(m*m)+(n*n));
  printf("Square of Sum = %i\n",((m+n)*(m+n)));
  printf("Average = %f\n", (m+n)/2.0);
  printf("Average of Sum of Squares = %f\n", ((m*m)+(n*n))/2.0);
  return 0;
}
