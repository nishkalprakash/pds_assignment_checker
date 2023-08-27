#include<stdio.h>
int main()
{
  int m,n;
  printf("enter the value of m");
  scanf("%d",&m);
  printf("enter the value of n");
  scanf("%d",&n);
  printf("sum = %d\n", m+n);
  printf("difference=%d\n",m-n);
  printf("product=%d\n",m*n);
  printf("quotient=%d\n", m/n);
  printf("remainder=%d\n",m%n);
  printf("floating point quotient=%f\n",m/n);
  printf("the sum of the squares=%d\n",m*m+n*n);
  printf("square of the sum=%d\n",(m+n)*(m+n));
  printf("the average=%f\n",(m+n)/2);
  printf("the average of the sum of the squares=%f",(m*m+n*n)/2);
  return 0;
}
