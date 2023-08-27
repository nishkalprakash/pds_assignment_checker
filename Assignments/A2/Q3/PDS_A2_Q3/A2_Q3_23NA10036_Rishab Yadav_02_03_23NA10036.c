//Roll number 23NA10036
#include <stdio.h>

int main(){

  int moneyDep;
  int years;
  float intRate;
  float amtPay;
  
  printf("Type your deposited money: \n");
  scanf("%d", &moneyDep);

  printf("Type the period of deposit in years: \n");
  scanf("%d", &years);

  printf("Type your applicable rate of interest: \n");
  scanf("%f", &intRate);

  amtPay = (moneyDep * intRate / 100) * years + moneyDep;
  printf("Total payable amount after %d years is: %f", years, amtPay);
 
  return 0;
}
