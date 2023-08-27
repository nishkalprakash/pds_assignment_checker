#include <stdio.h>

int main()
{
  int m;
  printf("Enter the value of m: ");
  scanf("%d", &m);

  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);

  printf("The value of m+n is %d \n", m+n);
  printf("The value of m-n is %d \n", m-n);
  printf("The value of m*n is %d \n", m*n);
  printf("The value of m/n is %f \n", m/n);
  printf("The value of remainder is %f \n", m-m/n);
  printf("The value of m/n is %f \n", m/n);
  printf("The value of m^2 + n^2 is %d \n", (m*m)+(n*n));
  printf("The value of (m+n)^2 is %d \n", (m+n)*(m+n));
  printf("The value of (m+n)/2 is %d \n", (m+n)/2);
  printf("The value of (m^2+n^2)/2 is %d \n", (m*m+n*n)/2);
}
  
