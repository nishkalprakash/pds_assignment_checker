#include<stdio.h>
int main()
{
  int m,n,sum,diff,a,b,c,d,e;
  float g,f,h;
  printf("Enter 2 integers: ");
  scanf("%d %d", &m,&n);
  sum = m+n;
  printf("sum of m and n = %d\n", sum);
  diff = m-n;
  printf("Difference of m and n =%d\n", diff);
   a = m*n;
   printf("product of m and n = %d\n",a);
  b = m/n;
   printf("quotient m and n= %d\n",b);
   c = m%n;
   printf("remainder of m and n= %d\n", c);
   h = (float)m/n;
   printf("floating point quotient m and n = %f\n", h);
   d  = m^2+n^2;
   printf("squares of m and n=%d\n",d);
  
   e = (m+n)^2;
   printf("square of the sum of m and n=%d\n",e);
   f = (m+n)/2.0;
   printf("average of m and n=%f\n",f);
   g = (m^2+n^2)/2.0;
   printf("average of the sum of squares m and n=%f\n",g);
   return 0;
}
  
