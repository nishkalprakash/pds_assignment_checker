//Roll no:<23MT30010>
//Name:<Purva Harde>
#include <stdio.h>
int main ()
{ int m; int n; float x; float y; float z;
  printf ("Enter a number");
  scanf ("%d", &m);
  printf("Enter another number");
  scanf("%d",&n);
  x=m/n;
  y=(m+n)/2;
  z=(m*m+n*n)/2;
  printf("The Sum id %d \n" , m+n );
  printf("The difference is %d \n", m-n);
  printf("The product is %d \n", m*n);
  printf("The integer remainder is %d \n", m%n);
  printf("The floating point quotient is %f \n",x);
  printf("The sum of the squares is %d \n", m*m+n*n);
  printf("The square of sum is %d \n", (m+n)*(m+n));
  printf("The average is %f \n", y);
  printf("The average of the sum of the squares is %f \n", z);
  return 0;
}
