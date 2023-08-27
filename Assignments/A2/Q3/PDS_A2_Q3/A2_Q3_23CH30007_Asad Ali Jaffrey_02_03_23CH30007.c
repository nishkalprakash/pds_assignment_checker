#include<stdio.h>

int main() {
  unsigned int deposit,period;
  float interest_rate, interest, total_amount; 
  printf("Enter the amount to be deposited\n");
  scanf("%d",&deposit);
  printf("Enter the duration in years\n");
  scanf("%d",&period);
  printf("Enter the interest rate in percent per annum\n");
  scanf("%f",&interest_rate);
  interest = (deposit*interest_rate*period)/100;
  total_amount = deposit + interest;
  printf("Total amount payable after the end of deposit period is %f",total_amount);
  return 0;
}
  
  
  
