// Roll no. : 23EE10056 //
// Name : Ritwik Suresh //
#include<stdio.h>
int main()
{
  float fp_quo,fp_avg,fp_sqavg ;
  int m,n ;
  printf("Enter the value of 2 integers(m and n):\n");
  scanf("%d %d",&m,&n);
  fp_quo = (float)m/n ;
  fp_avg = (float)(m+n)/2 ;
  fp_sqavg = (float)(m*m + n*n)/2 ;
  printf("The sum of %d and %d = %d\n",m,n,m+n);
  printf("The difference between %d and %d = %d\n",m,n,m-n);
  printf("The product of %d and %d = %d\n",m,n,m*n);
  printf("The integer quotient of %d and %d = %d\n",m,n,(m/n));
  printf("The integer remainder of %d and %d = %d\n",m,n,(m%n));
  printf("The floating point quotient of %d and %d = %f\n",m,n,fp_quo);
  printf("The sum of the squares of %d and %d = %d\n",m,n,(m*m + n*n));
  printf("The square of the sum of %d and %d = %d\n",m,n,((m+n)*(m+n)));
  printf("The average of %d and %d as a floating point no. = %5.2f\n",m,n,fp_avg);
  printf("The average of the sum of the squares of %d and %d  as a floating point no. = %5.2f\n",m,n,fp_sqavg);
  return 0;
 }
	 
  
  
