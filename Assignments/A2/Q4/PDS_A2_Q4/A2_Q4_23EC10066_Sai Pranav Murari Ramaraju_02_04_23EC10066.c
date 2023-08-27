#include<stdio.h>
int main(){
  int m;
  int n;
  printf("enter m : ");
  scanf("%d",&m);
  printf("enter n : ");
  scanf("%d",&n);
  printf("the sum is : %d\n", m+n);
  printf("the difference is : %d\n", m-n);
  printf("the product is : %d\n",m*n);
  printf("the reminder is : %d \n", m%n);
  printf("the integer quoitent is : %d \n",m/n);
  printf("the floating quoitent is : %f \n",(float) m/n);
  printf("the sum of squares is :%d\n",(m*m + n*n));
  printf("the square of sum is %d\n",(m+n)*(m+n));
  printf("the avarage is %f\n",(float)(m+n/2.0));
  printf("the avarage of sum of squares is %f",(float)(m*m+n*n)/2.0);
  return 0;
  
}
