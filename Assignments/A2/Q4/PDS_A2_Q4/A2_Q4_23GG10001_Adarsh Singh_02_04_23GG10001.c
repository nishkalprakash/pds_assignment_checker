#include<stdio.h>
int main(){
  int m,n;
  printf("Enter the values of m and n \n");
  scanf("%d%d",&m,&n);
  printf("The sum is %d \n",m+n);
  printf("The difference is %d \n",m-n);
  printf("The product is %d \n",m*n);
  printf("The integer quotient is %d \n",(int)(m/n));
  printf("The integer remainder is %d \n",(int)(m%n));
  printf("The floating point quotient is %f \n",(float)(m/n));
  printf("The sum of squares is %d \n", (m*m)+(n*n));
  printf("The square of the sum is %d \n",(m+n)*(m+n));
  printf("The average of m and n as floating point number is %f \n",(float)(m+n)/2);
  printf("The average of the sum of the squares as a floating point number is %f \n",(float)((m*m)+(n*n))/2);
  return 0;
}  
