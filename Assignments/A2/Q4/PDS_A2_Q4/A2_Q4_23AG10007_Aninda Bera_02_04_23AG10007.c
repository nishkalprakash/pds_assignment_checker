# include <stdio.h>
int main()
{
  int m,n,sum,product,integer_quotient,integer_remainder,sum_square,square_sum;
  float avg,floating_pt_quotient,avg_square; 
  printf("Enter the first number:\n");
  scanf("%d",&m);
  printf("Enter the second number:\n");
  scanf("%d",&n);
  sum= m+n;
  printf("The sum:%d\n",sum);
  product=m*n;
  printf("the product is:%d\n",product);
  integer_quotient=m/n;
  printf("the integer quotient is:%d\n",integer_quotient);
  integer_remainder=m%n;
  printf("the integer remainder is:%d\n",integer_remainder);
  floating_pt_quotient=m/n;
  printf("the floating point quotient:%f\n",floating_pt_quotient);
  sum_square=m*m+n*n;
  printf("the sum of the squares:%d\n",sum_square);
  square_sum=(m+n)*(m+n);
  printf("the square of the sum:%d\n",square_sum);
  avg=(m+n)/2;
  printf("the average:%f\n",avg);
  avg_square=(m*m+n*n)/2;
  printf("the average of the sum of the squares:%f\n",avg_square);
  return 0;
}
