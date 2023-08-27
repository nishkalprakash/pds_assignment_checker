//Roll no.:23ME10025
//Name:Gargi Mukherjee
#include <stdio.h>
int main()
{
  int amt,period;
  float rate,pay;
  printf("Enter the amount being deposited:");
  scanf("%d",&amt);
  printf("Emter the period of deposit in years:");
  scanf("%d",&period);
  printf("Enter the interest rate:");
  scanf("%f",&rate);
  pay=(amt*period*rate)/100;
  printf("The total amount payable= %f",(amt+pay));
  return 0;
}
