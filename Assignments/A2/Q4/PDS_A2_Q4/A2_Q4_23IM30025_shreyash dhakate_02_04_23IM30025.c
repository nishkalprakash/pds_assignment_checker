//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
int main(){
  int m,n;//defining m ,n as integers
  printf("Enter Two integers to be evaluated:");//taking user input
  scanf("%d %d",&m,&n);
  //calculation part
  printf("the sum is:%d\n",m+n);
  printf("the difference:%d\n",m-n);
  printf("the product  is :%d\n",m*n);
  printf("the integer quotient:%d\n",m/n);
  printf("the integer remainder:%d\n",m%n);
  printf("the floating point quotient :%d\n",m/n);
  printf("the sum of the suqres:%d\n",m*m+n*n);
  printf("the squre of the sum:%d\n", (m+n)*(m+n));
  printf("the average :%f\n",(m+n)/2.0);
  printf("the average of the sum of the squres:%f\n",(m*m+n*n)/2.0);
  return 0;
}
      
  
  
