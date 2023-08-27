#include<stdio.h>
int main()
{
  int amt;
  int time;
  printf(" enter the amount deposited ");
  scanf("%d",&amt);
  printf(" enter time period");
  scanf("%d", &time);
  float interest;
  printf("enter the interest");
  scanf("%f",&interest);
  printf("the amount payable at the end is %f\n",(amt*time*interest)/100+amt);
  return 0;
}
    
    
