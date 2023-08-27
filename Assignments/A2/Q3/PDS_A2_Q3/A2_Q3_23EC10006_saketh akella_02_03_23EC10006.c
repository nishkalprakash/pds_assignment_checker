#include<stdio.h>

int main(){
  unsigned  int amount,period;
  float rate = 8.0;
  printf("this program is to give the amount payable \n");
  printf("please enter the amount deposited and period of deposit \n");
  scanf("%d%d",&amount,&period);
  printf("the rate of interest is %f",rate);
  float interest = ((amount)*(period)*(rate))/100.0;
  printf("the interest of the amount deposited is %f \n",interest);
  float amount_paid = ((float) amount)+interest;
  printf("the amount paid is : %f \n", amount_paid);
  
  
  
  return 0;
}
