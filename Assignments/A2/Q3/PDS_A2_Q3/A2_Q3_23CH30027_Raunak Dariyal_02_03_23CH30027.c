#include <stdio.h>
int main ()
{
  unsigned int principal,period;
  float intrestrate, intrest, totalamount;
  printf("Enter the deposit");
  scanf("%d",&principal);
  printf("Enter the period");
  scanf("%d",&period);
   printf("Enter the interest");
  scanf("%f",&intrestrate);
  intrest = (principal*intrestrate*period)/100;
  totalamount = principal + intrest;
  printf("The total amount to be paid at the end of the duration is %f",totalamount);
  return 0;
}
