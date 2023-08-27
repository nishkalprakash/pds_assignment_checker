//Roll no. : 23EE10036
//Name : Kushagra Poonia

#include <stdio.h>

int main(){
  unsigned int amount=0;
  unsigned int period=0;
  float interest = 0;
  int payable = 0;

  printf("Enter the amount deposited: ");
  scanf("%d", &amount);

  printf("Enter the period of deposit: ");
  scanf("%d", &period);

  printf("Enter the rate of interest: ");
  scanf("%f", &interest);

  payable = (amount) + (amount*interest*period)/100;
  printf("The total amount payable after %d years is %d.\n", period, payable);
}
