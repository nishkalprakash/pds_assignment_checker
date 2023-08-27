#include<stdio.h>

int main() {
  int m , n;
  printf("Enter the first number m\n");
  scanf("%d", &m);
  printf("Enter the second number n\n");
  scanf("%d", &n);
  printf("The sum is %d\n", m+n);
  printf("The difference is %d\n", m-n);
  printf("The product is %d\n", m*n);
  printf("The integer quotient is %d\n", m/n);
  printf("The integer remainder is %d\n", m%n);
  printf("The floating point quotient is %f\n",(float) m/n);
  printf("The sum of squares is %d\n", m*m + n*n);
  printf("The square of the sum is %d\n", (m+n)*(m+n));
  printf("The average of the sum as a floating point number is %f\n",(float)(m+n)/2);
  printf("The average of the sum of the squares as a floating point number is %f\n",(float)(m*m + n*n)/2);
  return 0;
}
  
	 
  
