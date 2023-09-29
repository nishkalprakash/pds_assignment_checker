//ROLL NO-23EX10004
//NAME-ANSH KUMAR
#include<stdio.h>
int main(){
  int n,digit,digit1,digit2,digit3;
  printf("enter a positive integer less than 9999");
  scanf("%d",&n);
  printf("the input integer is %d\n",n);
  digit=n%10;
  digit1=digit+1;
  digit=n%100;
  digit2=digit+1;
  digit=n%1000;
  digit3=digit+1;
  printf("%d%d%d",digit3,digit2,digit1);
  return 0;
}
  
 
  
