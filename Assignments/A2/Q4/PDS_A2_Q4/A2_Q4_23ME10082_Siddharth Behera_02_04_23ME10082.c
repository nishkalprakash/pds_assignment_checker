#include<stdio.h>

void main()
{
  int m,n;
  printf("enter the two digits=");
  scanf("%d,%d",&m,&n);
  
  printf("the sum%d\n",m+n);
  
  printf("the difference%d\n",m-n);
  
  printf("the product%d\n",m*n);
  
  printf("the integer quotient%d\n",m/n);
  
  printf("the integer reminder%d\n",m%n);

  printf("the floating point quotient%d\n",m/n);
  
  printf("the sum of the squares%d\n",(m*m)+(n*n));
  
  printf("the sum of the squares%d\n",(m+n)*(m+n));
  
  printf( "the average %f\n",(float)(m+n)/2);
  
  printf("the average of the sum of the squares%d\n",(m*m+n*n)/2);

}
	 
