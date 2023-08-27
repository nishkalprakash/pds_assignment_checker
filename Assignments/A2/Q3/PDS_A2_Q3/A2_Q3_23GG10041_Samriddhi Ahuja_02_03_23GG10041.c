//Roll No. :<23GG10041>
//Name: <Samriddhi>

#include <stdio.h>
int main ()
{
  int deposite, time;
  float interest, amount;
  printf("enter the amount deposited=\n");
  scanf("%d",&deposite);
  printf("enter the deposition period=\n");
  scanf("%d",&time);
  printf("enter the rate of interest=\n");
  scanf("%f" ,&interest);
  amount = deposite + (time*interest*deposite)/100;
  printf("total mount = %f\n",amount);
  return 0;
}
