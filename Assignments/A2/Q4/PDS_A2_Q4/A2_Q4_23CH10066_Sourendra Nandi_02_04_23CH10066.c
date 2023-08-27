//Roll No.: 23CH10066
//Name : Sourendra Nandi
#include <stdio.h>
int main()
{
  int m,n,sum,diff,pro,i_quo,i_rem;
  int sum_sq,sq_sum;
  float fl_quo,avg,avg_sum_sq;
  printf("Enter the value of m : ");
  scanf("%d",&m);
  printf("Enter the value of n : ");
  scanf("%d",&n);
  sum=m+n;
  diff=m-n;
  pro=m*n;
  i_quo=m/n;
  i_rem=m%n;
  fl_quo=((float)m)/n;
  sum_sq=m*m+n*n;
  sq_sum=(m+n)*(m+n);
  avg=sum/2.0;
  avg_sum_sq=sum_sq/2.0;
  printf("Sum = %d\n",sum);
  printf("Difference = %d\n",diff);
  printf("Product = %d\n",pro);
  printf("Inetger quotient = %d\n",i_quo);
  printf("Integer remainder = %d\n",i_rem);
  printf("Floating point quotient = %f\n",fl_quo);
  printf("Sum of the squares = %d\n",sum_sq);
  printf("Square of the sum = %d\n",sq_sum);
  printf("Average = %f\n",avg);
  printf("Average of the sum of the squares = %f\n",avg_sum_sq);
  return 0;
}
	 
  
    
  
  
