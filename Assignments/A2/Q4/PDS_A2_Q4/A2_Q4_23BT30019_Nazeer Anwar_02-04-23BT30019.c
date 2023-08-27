//ROLL NO:23BT30019
//NAME: NAZEER ANWAR
#include<stdio.h>
int main()
{
  int m ;
  int n ;
  printf("Enter two integer: ");
  scanf("%d" ,&m );
  scanf("%d" , &n );
  int sum = m+n ;
  int diff = m-n ;
  int pro = m*n ;
  int quo = m/n ;
  int rem = m%n ;
  float quo_f = m/n ;
  int sum_s = (m*m)+(n*n);
  int square_s = (m+n)*(m+n);
  float avg = (m+n)/2 ;
  float avg_s = ((m*m)+(n*n))/2 ;
  
  printf("the sum=%d\n" , sum);
  printf("the difference=%d\n" , diff );
  printf("the product=%d\n" , pro);
  printf("the integer quotient=%d\n" , quo);
  printf("the integer reminder=%d\n" , rem);
  printf("the floating quotient=%f\n" , quo_f);
  printf("sum of square=%d\n" , sum_s);
  printf("square of sum=%d\n" , square_s);
  printf("the average=%f\n" , avg);
  printf("the average of the of the sum of the square=%f\n" , avg_s );
}
  
