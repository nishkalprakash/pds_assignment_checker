// Roll no: 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
int main()
{
  int time,amount;
  float interest,final;
  printf("Enter the amount:");
  scanf("%d",&amount);
  printf("Enter the period of deposit in years:");
  scanf("%d",&time);
  printf("Enter the interest rate:");
  scanf("%f",&interest);
  final = (amount*time*interest)/100 +amount;
  printf("The total amount payable at the end of the deposit period:%f\n",final);
  return 0;
}
