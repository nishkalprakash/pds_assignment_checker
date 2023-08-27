// Roll No. 23CE10005
// Name - Adarsh Kumar Singh

#include<stdio.h>
int main ()
{
  int m, n;
  printf("\nEnter two integers (say m,n): ");
  scanf("%d%d", &m, &n);
  printf("\nThe sum is %d \nThe difference is %d \nThe product is %d \nThe integer quotient is %d \nThe integer remiander is %d \nThe floating point quotient is %.2f \nThe sum of the squares is %d \nThe square of the sum is %d \nThe average as a floating point number is %.2f \nThe average of the squares as a floating point number is %.2f\n", m+n, m-n, m*n, m/n, m%n, (float)m/n, m*m + n*n, (m+n)*(m+n), (m+n)/2.0, (m*m + n*n)/2.0);
  return 0;
}
  
