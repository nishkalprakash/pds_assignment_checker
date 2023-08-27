//name tanishq sura
//roll no 23CS10071

#include<stdio.h>

int main(){
  int m,n;
  printf("give first integer\n");
  scanf("%d",&m);
  printf("give second integer\n");
  scanf("%d",&n);
  printf("the sum is %d\n", m+n);
  printf("the difference is %d\n", m-n);
  printf("the product is %d\n", m*n);
  printf("the integer quotient is %d\n" , m/n);//integer arithematic by default
  printf("the integer remainder is %d\n", m%n);
  printf("the floating point quotient %f\n",((float)m)/n);//typecasted one of variables to float to make mix mode arith
  printf("the sum of squares is %d\n", m*m + n*n);
  printf("the square of sum is %d\n", (m+n)*(m+n));
  printf("the average is %f\n", (m+n)/2.0);//used 2.0 so that mix mode arith to give correct float output
  printf("the average of the squares is %f\n", (m*m+n*n)/2.0);//same as line above
  return 0;
}
