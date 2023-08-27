#include <stdio.h>
// Roll no. 23IE10031
// Name - Om singh Jadon

int main()
{
  unsigned int amount, period;
  float interest;
  printf("Amount being Deposited: ");
  scanf("%d", &amount);
  printf("Period: ");
  scanf("%d", &period);
  printf("Interest: ");
  scanf("%f", &interest);
  float final_amount = amount + (amount*period*interest/100);
  printf("The Final amount after interest is: %f\n", final_amount);
  
}
