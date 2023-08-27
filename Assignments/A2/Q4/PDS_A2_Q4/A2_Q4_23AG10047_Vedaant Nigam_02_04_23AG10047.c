#include<stdio.h>
int main()
{
  int m,n,a,b,c,d,e,g;
  float h,f,i,j;
  printf("enter the values of m and n\n");
  scanf("%d%d",&m,&n);
  a=m+n;
  b=m-n;
  c=m*n;
  d=m/n;
  e=m%n;
  f=(float)m/n;
  g=m*m+n*n;
  h=a*a/2.0;
  i=a/2.0;
  j=g/2.0;
  printf("the sum %d\n the difference %d\n the product %d\n the integer quotient %d\nthe integer remainder%d\n the floating point quotient %f\n the sum of the squares%f\n the square of the sum %d\n the average %f\n the avg of the sum of squares%f",a,b,c,d,e,f,g,h,i,j);
    return 0;
}
  
  
    
    
