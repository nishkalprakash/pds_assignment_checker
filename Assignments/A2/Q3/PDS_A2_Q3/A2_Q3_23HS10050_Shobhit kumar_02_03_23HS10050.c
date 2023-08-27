//Roll no:23HS10050
//Name:Shobhit kumar
#include<stdio.h>
int main()
{
  int amount,years;
  float interest,payamount;
  printf("enter deposite amount");
  scanf("%d",&amount);
  
  printf("Enter number of years for deposit");
  scanf("%d",&years);
  printf("Enter applicable interest");
  scanf("%f",&interest);
  payamount=(amount*years*interest/100)+amount;
  printf("payable amount is %f",payamount);
  return 0;

}
  
  
