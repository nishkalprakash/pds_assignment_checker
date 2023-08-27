//Roll no.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>

int main(){
  int m,n;
  printf("Enter 2 space separated integers: ");
  scanf("%d%d", &m, &n);
  printf("The sum %d+%d is %d\n", m,n,m+n);
  printf("The difference %d-%d is %d\n", m,n,m-n);
  printf("The product %d*%d is %d\n", m,n,m*n);
  printf("The integer quotient %d/%d is %d\n", m,n,m/n);
  printf("The integer remainder %d%c%d is %d\n", m,'%',n,m%n);
  printf("The floating point quotient %d/%d is %f\n", m,n,((float)m)/n);
  printf("The sum of squares %d^2+%d^2 is %d\n", m,n,m*m+n*n);
  printf("The square of sum (%d+%d)^2 is %d\n", m,n,(m+n)*(m+n));
  printf("The average (%d+%d)/2 as a floating point is %f\n", m,n,(m+n)/2.0);
  printf("The average of the sum of squares (%d^2+%d^2)/2 as a floating point number is %f\n", m,n,(m*m+n*n)/2.0);
  return 0;
}
