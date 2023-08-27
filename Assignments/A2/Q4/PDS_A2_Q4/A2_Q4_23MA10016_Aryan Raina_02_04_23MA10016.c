//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>

int main(){
  int m, n;
  printf("Enter two numbers: ");
  scanf("%d %d", &m, &n);

  printf("The sum is %d\n", m+n);
  printf("The difference is %d\n", m-n);
  printf("The product is %d\n", m*n);
  printf("The integer quotient is %d\n", m/n);
  printf("The integer remainder is %d\n", m%n);
  printf("The sum of the squares is %d\n", (m*m) + (n*n));
  printf("The square of sum is %d\n", (m+n)*(m+n));
  printf("The average is %f\n", (m+n)/2.0);
  printf("The average of sum of squares is %f\n", ((m*m) + (n*n))/2.0);

  return 0;
}
