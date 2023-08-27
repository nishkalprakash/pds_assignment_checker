//Roll no:<23MT30029>
//Name:<Tanaya Moghe>
#include <stdio.h>
int main ()
{ int m; int n;
  printf("Enter a number \n");
  scanf("%d", &m);
  printf("Enter another number \n");
  scanf("%d", &n);;
  printf("The Sum is %d \n", m+n );
  printf("The difference is %d \n" , m-n);
  printf("The product is %d \n" , m*n);
  printf("The integer quotient is %d \n" , m/n);
printf("The integer remainder is %d \n", m%n);
  printf("The floating point quotient is %f \n", (float)m/n);
  printf("The sum of the squares is %d \n", m*m+n*n);
  printf("The square of the sum is %d \n", (m+n)*(m+n));
printf("The average is %f \n",(float)(m+n)/2);
printf("The average of the sum of the squares is %f \n", (float)(m*m + n*n)/2 );
  return 0;
}
