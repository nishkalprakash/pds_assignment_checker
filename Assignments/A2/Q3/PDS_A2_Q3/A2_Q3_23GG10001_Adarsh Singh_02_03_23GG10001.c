#include<stdio.h>
int main()
{
  int amount;
  int period;
  float interest;
  float totalamount;
  printf("Enter the deposit amount and period of deposit in years respectively ");
  scanf("%d%d",&amount,&period);
  printf("Enter the applicable interest per year ");
  scanf("%f",&interest);
  totalamount=((period*amount*interest)/100)+amount;
  printf("Your total amount at the end of the year is=%f",totalamount);
  return 0;
}  
