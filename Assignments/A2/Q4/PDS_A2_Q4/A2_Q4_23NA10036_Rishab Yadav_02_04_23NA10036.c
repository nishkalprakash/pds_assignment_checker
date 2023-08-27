//Roll number 23NA10036
#include <stdio.h>
#include <math.h>

int main(){

  int m;
  int n;

  printf("Write two integers you want to work with: \n");
  scanf("%d %d", &m, &n);

  printf("Sum: %d\n", m+n);
  printf("Difference: %d\n", m-n);
  printf("Product: %d\n", m*n);
  printf("Integer quotient: %d\n", m/n);
  printf("Integer remainder: %d\n", m%n);
  printf("Floating point quotient: %f\n",(float) m/n);
  printf("Sum of the squares: %f\n", (float)pow(m,2) + pow(n,2));
  printf("Square of the sum: %f\n",  (float)pow(m+n, 2));
  printf("Average: %f\n", (float)(m+n)/2);
  printf("Average of the sum of the squares: %f\n", (float)(pow(m,2) + pow(n,2))/2);

  return 0;
}
