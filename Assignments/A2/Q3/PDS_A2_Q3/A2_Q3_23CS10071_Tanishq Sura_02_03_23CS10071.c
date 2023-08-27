//name tanishq sura
//roll no 23CS10071

#include<stdio.h>

int main(){
  unsigned int principal,period; //declared a s unsigned int
  float rate=10,total_amt;//initialised rate
  printf("give amount to be deposited:");
  scanf("%u",&principal); 
  printf("give period of deposit:");
  scanf("%u",&period);
  printf("give rate of interest");
  scanf("%f",&rate);
  total_amt= principal + (principal*rate*period/100); //interest = prt/100
  printf("total amt payable is= %f",total_amt);
  return 0;
}
  
