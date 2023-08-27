//Roll no. : 23EE10036
//Name : Kushagra Poonia

#include <stdio.h>

int main(){
  int m = 0;
  int n = 0;

  printf("Enter the value of m.\n");
  scanf("%d", &m);

  printf("Enter the value of n.\n");
  scanf("%d", &n);

  int sum = m+n;
  int difference = m-n;
  int product = m*n;
  int quotient = m/n;
  int remainder = m%n;
  float floating_quotient = ((float)m/n);
  int squared_and_summed = (m*m)+(n*n);
  int summed_and_squared = sum*sum;
  float average = (sum)/2.0;
  float mean_square = squared_and_summed/2.0;

  printf("The sum = %d\n", sum);
  printf("The difference m-n = %d\n", difference);
  printf("The product = %d\n", product);
  printf("The integer quotient of m/n = %d\n", quotient);
  printf("The integer remainder when n divides m = %d\n", remainder);
  printf("The floating point quotient of m/n = %f\n", floating_quotient);
  printf("The sum of squares = %d\n", squared_and_summed);
  printf("The square of the sum = %d\n", summed_and_squared);
  printf("The floating point average is = %f\n", average);
  printf("The floating point average of the sum of the squares = %f\n", mean_square);
}
