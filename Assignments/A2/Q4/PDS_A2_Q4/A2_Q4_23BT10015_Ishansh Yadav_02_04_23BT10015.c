#include<stdio.h>
#include<math.h>

int main()
{ int m, n;
  printf("Enter two integers:");
  scanf("%d%d", &m, &n);
  int sum= m+n;
  printf("The sum of the two integers is %d\n", sum);
  printf("The difference of the two integers is %d\n", m-n);
  printf("The integer quotient of the two integers is %d\n", m/n);
  printf("The integer remainder of the two integers is %d\n", m%n);
  printf("The floating point quotient of the two integers is %f\n", ((float)(m))/n);
  int sum_of_sqrs= pow(m, 2) + pow(n, 2);
  printf("The sum of the squares of the two integers is %d\n", sum_of_sqrs);
  int sqr_sum= pow(m+n, 2);
  printf("The square of the sum of the two integers is %d\n", sqr_sum);
  float avg=(m+n)/2.0;
  printf("The average of the two integers is %f\n", avg);
  float avg_of_sqrs= sum_of_sqrs/2;
  printf("The average of the sum of the squares of the two integers is %f\n", avg_of_sqrs);
  return 0;
}
  
  
