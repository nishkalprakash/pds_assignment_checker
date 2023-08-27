//Roll No:23EE30017
//Name:Ranga Kiranmai
#include <stdio.h>
int main()
{
  int m,n;
  float x,y,z;
  printf("Type two numbers\n");
  scanf("%d %d", &m, &n);
  printf("The sum of two numbers=%d\n",m+n);
  if(m>n) {printf("The difference of the two numbers=%d\n",m-n);}
  else {printf("The difference of the two numbers=%d\n",n-m);}
  printf("The product of the two numbers=%d\n",m*n);
  printf("The integer quotient=%d\n",m/n);
  printf("The integer remainder=%d\n",m%n);
  x=(float)m/n;
  printf("The floating point quotient=%f\n",x);
  printf("The sum of the squares=%d\n",m*m+n*n);
  printf("The square of the sum=%d\n",(m+n)*(m+n));
  y=(float)(m+n)/2;
  printf("The average=%f\n",y);
  z=(float)(m*m+n*n)/2;
  printf("The avg of sum of squares=%f",z);
  return 0;
}
  
