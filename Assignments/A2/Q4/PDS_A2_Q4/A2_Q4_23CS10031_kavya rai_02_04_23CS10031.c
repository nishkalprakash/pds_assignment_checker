#include<stdio.h>
int main()
{
  int m,n;
  printf("enter the value of m :");
  scanf("%d",&m);
  printf("\nenter the value of n :");
  scanf("%d",&n);
  int sum = m+n;
  printf("\nThe sum = %d",sum);
  printf("\nThe difference = %d", (m-n));
  printf("\nThe product = %d", (m*n));
  int a=m/n;
  printf("\nThe integer quotient = %d ",a);
  printf("\nThe integer remainder = %d",(m%n));
  float b= (float)m/n;
  printf("\nThe floating point quotient = %f", b);
  int c=(m*m)+(n*n);
  printf("\nThe sum of the squares = %d",c);
  int e= (m+n)*(m+n);
  printf("\nThe square of the sum = %d",e);
  float g= (a+b)/2.0;
  printf("\nThe average = %f",g);
  float h= ((m*m)+(n*n))/2.0;
  printf("\nThe average of the sum of the squares = %f\n",h);
  return 0;
}
	 
  
  
