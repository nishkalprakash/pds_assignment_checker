//Roll No:23CH10006
//Name: Anshuman Acharya
#include<stdio.h>
int main()
{
  int m,n,x;
  float a, b, c;
  printf("Enter two integer values\n");
  scanf("%d %d", &m, &n);
  a = m/n;
  b = (m+n)/2;
  c = (m*m+n*n)/2;
  printf("The sum is %d\nThe difference is %d\nThe product is %d\nThe integer qooutient is %d\n",m+n, m-n, m*n, m/n);
  printf("The integer remainder  is %d\n",m%n);
  printf("The floating point quotient is %f\n",a);
  printf("The sum of squares is %d\n",m*m+n*n);
  printf("The square of sum is %d\n",(m+n)*(m+n));
  printf("The average is %f\n",b);
  printf("The average of squares is %f\n",c);
  return 0;
}
