//Roll no: 23HS10010;
//Name: Anurag Pokhariyal
#include <stdio.h>
int main()
{
  int m,n;
  float a6,a9,ax;
  int a1,a2,a3,a4,a5,a7,a8;
  printf("Enter the first integer:\n");
  scanf("%d",&m);
  printf("Enter the second integer:\n");
  scanf("%d",&n);
  a1 = m+n;
  a2 = m-n;
  a3 = m*n;
  a4 = m/n;
  a5 = m%n;
  a6 = (float) m/n;
  a7 = m*m + n*n;
  a8 = a1*a1;
  a9 = a1/2.0;
  ax = a7/2.0;
  printf("Sum of the number:%d\n",a1);
  printf("Difference:%d\n",a2);
  printf("Product:%d\n",a3);
  printf("Integral Quotient:%d\n",a4);
  printf("Integral Remainder:%d\n",a5);
  printf("Floating Quotient:%f\n",a6);
  printf("Sum of the squares:%d\n",a7);
  printf("Square of the sum:%d\n",a8);
  printf("Average:%f\n",a9);
  printf("Average of sum of squares:%f\n",ax);
  return 0;
 }
