//Roll No.:<23MT10034>
//Name:<N Chandra Siddharth>
#include<stdio.h>
int main ()
{
  int m,n;
  scanf("%d%d",&m,&n);
  printf("The sum %d", m+n);
  printf("The difference %d", m-n);
  printf("The product %d", m*n);
  printf("The integer quotient %d", m/n);
  printf("The integer remainder %d", m%n);
  printf("The floating point quotient %.2f",(float)  m/n);
  printf("The sum of squares %d", m*m+n*n );
  printf("The square of the sum %d", (m+n)^2);
  printf("The average %.2f",(float) (m+n)/2);
  printf("The average of sum of squares %.2f",(float) (m*m+n*n)/2);
  return 0;
}
  
