//Roll No:<23NA10017>//
//Name:<Harshavarda Kumarasamy//
#include <stdio.h>

int main()
{
  int m; int n;

  printf("Type in two integrals to work with:\n");
  scanf("%d%d", &m, &n);

  printf("The sum: %d\n", m+n);
  printf("The difference: %d\n", m-n);
  printf("The product: %d\n", m*n);
  printf("The integer quotient: %d\n", m/n);
  printf("The integer remainder: %d\n", m%n);
  printf("The floating point quotient: %f\n", (float)m/(float)n);
  printf("The sum of squares: %d\n", m*m+n*n);
  printf("The square of the sum: %d\n", (m+n)*(m+n));
  printf("The average: %f\n", (float)(m+n) / 2);
  printf("The average of sum of squares: %f\n", (float)(m*m+n*n) / 2);

  return 0;
}

  
    

 
  
  
