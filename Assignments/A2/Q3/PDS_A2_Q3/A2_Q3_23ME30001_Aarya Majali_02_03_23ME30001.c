#include <stdio.h>
int main()
{
  int x,y;
  float z;
  printf("enter the amount to be deposited");
  scanf("%d",&x);
  printf("enter the period of deposit years");
  scanf("%d",&y);
  printf("enter applicable interest rate");
  scanf("%f",&z);
  printf("total amount payable=%f",x+((x*y*z)/100));
}
  
