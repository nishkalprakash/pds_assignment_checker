#include<stdio.h>
int main(){
  int amount_deposited;
  int period;
  printf("enter the amount deposited  : \n");
  scanf("%d",&amount_deposited);
  printf("enter period : ");
  scanf("%d", &period);
  float rate;
  printf("enter rate : ");
  scanf("%f",&rate);
  float intrest;
  intrest = (amount_deposited*period*rate)/100;

  printf("total amount payable is : %f", amount_deposited+intrest);

  return 0;
}
