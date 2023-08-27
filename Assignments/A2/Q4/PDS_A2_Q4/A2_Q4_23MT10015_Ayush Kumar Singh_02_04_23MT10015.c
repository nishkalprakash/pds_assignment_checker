//NAME; AYUSH KUMAR SINGH
// Roll No.: 23MT10015

#include <stdio.h>
#include <math.h>
int main(){
  int m,n;
  printf("Enter two integer\n");
  scanf("%d %d", &m,&n);
  printf("The Sum= %d\n", m+n);
  printf("The difference= %d\n", m-n);
  printf("The product= %d\n", m*n);
  printf("The Integer quotient= %d\n", m/n);
  printf("The integer remainder= %d\n", m%n);
  printf("The floating point quotient= %.2f\n", (float)m/n);
  printf("The sum of squares= %d\n", m*m+n*n);
  printf("The esquare of the sum= %d\n", (m+n)*(m+n));
  printf("The average as a floating point number= %.1f\n",(m+n)/2.0);
  printf("The average of the sum of the squares as a floating point number= %.2f\n", (m*m+n*n)/2.0);
  return 0;

}
