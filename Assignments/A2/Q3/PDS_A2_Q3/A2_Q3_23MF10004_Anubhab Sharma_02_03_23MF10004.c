#include <stdio.h>
#include <math.h>

int main()
{
  int deposit;
  printf("Enter the deposit amount: ");
  scanf("%d", &deposit);

  int time_period;
  printf("Enter the time period of deposit in years: ");
  scanf("%d", &time_period);

  printf("The amount payable at end of term is %f \n", deposit + 0.05*deposit*time_period);
}
