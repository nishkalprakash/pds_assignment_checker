// name vivek
// roll no 23CS10011
#include<stdio.h>
int main(){
  unsigned int p,t;
  float r;
  printf("enter amount to be deposited and period of deposit in years and interest rate");
  scanf("%d%d%f",&p,&t,&r);
  printf("the total amount payable at end of period is %f",p+p*t*r/100.0);
  return 0;}
