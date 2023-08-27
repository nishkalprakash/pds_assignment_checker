#include <stdio.h>
int main()
{
  int m,n,x,y;
  float z,p;
  printf("Enter first integer=");
  scanf("%d", &m);
  printf("Enter second integer=");
  scanf("%d", &n);
  x= (m*m)+(n*n);
  y=(m+n)*(m+n);
  z=(m+n)/2.0;
  p=((m*m)+(n*n))/2.0;
  printf("The sum= %d\n", m+n);
  printf("The difference= %d\n",m-n);
  printf("The product= %d\n",m*n);
  printf("The integer quotient= %d\n",m/n);
  printf("The integer remainder= %d\n",m%n);
  printf("The floating point quotient= %f\n", (float)m/n);
  printf("The sum of the squares= %d\n" ,x);
  printf("The square of the sum=%d\n",y);
  printf("The average =%f\n",z);
  printf("The average of the sum of the squares= %f\n",p);
  return 0;
}
  
  

  
