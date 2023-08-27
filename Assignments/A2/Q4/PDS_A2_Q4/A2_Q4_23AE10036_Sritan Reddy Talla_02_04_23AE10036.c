#include<stdio.h>
#include<math.h>
int main(){
  //T.Sritan Reddy
  //23AE10036
  int m,n;
  int sum,diff,product,quoitent,integral_reminder;
  int square_sum,sum_squares;
  float avg,avg_squares,flpointreminder;
  printf("enter the values of m &n \n");
  scanf("%d %d",&m,&n);

  sum=m+n;
 printf("the sum is %d \n ",sum);

 diff=m-n;
 printf("the diff is %d \n",diff);

 product=m*n;
 printf("the product is %d \n",product);
  
 quoitent= m/n;
 printf("the integral quotient is %d \n",quoitent);

 integral_reminder=m%n;
 printf("the integral reminder is %d \n", integral_reminder);
 
 square_sum=m*m+n*n;
  printf("the sum of their squares is %d \n", square_sum);

  sum_squares=(m+n)*(m+n);
 printf("the square of their sum is %d \n", sum_squares );

 avg=sum/2;
  printf("their avg is %f \n", avg );

  avg_squares =((m*m)+(n*n))/2;
    printf("their avg of the sum of squares  is %f \n", avg_squares );

    flpointreminder=m/n;
printf("the floating point quotient is %f \n",flpointreminder);  

    return 0;
  }
