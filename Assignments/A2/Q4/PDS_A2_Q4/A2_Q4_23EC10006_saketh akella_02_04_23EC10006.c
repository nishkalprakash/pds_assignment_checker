#include<stdio.h>

int main(){
  int m;
  int n;
  printf("enter the first number \n");
  scanf("%d",&m);
  printf("enter the second number \n");
  scanf("%d",&n);
  printf("the first number is %d and second number is %d \n",m,n);
  printf("following are the answers of given operations \n");
  printf("the sum  %d \n",m+n);
  printf("the difference %d \n",m-n);
  printf("the product %d \n",m*n);
  printf("the interger quotient %d \n",(m/n));
  printf("the interger remainder %d \n",m%n);
  float a = (m*1.0)/n;
  printf("the floating point quotient %f \n",a);
  printf("the sum of squares %d \n",(m*m)+(n*n));
  printf("the square of sum of numbers %d \n",(m+n)*(m+n));
  float b = (m+n)/2.0 ;
  printf("the floating average %f \n",b);
  float c = ((m*m)+(n*n))/2.0;
  printf(" the average of sum of squares %f \n",c);
  return 0;
}
