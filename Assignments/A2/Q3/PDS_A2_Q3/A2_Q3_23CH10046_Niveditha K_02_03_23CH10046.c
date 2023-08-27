#include <stdio.h>
int main()
{
  unsigned int amt, yr;
  float rate,in;
  printf("Enter amount:\n");
  scanf("%d", &amt);
  printf("Enter period of deposit:\n");
  scanf("%d", &yr);
  printf("Enter interest rate (in decimal):\n");
  scanf("%f", &rate);
  in = amt*yr*rate/100;
  printf("Total amount to be paid: %f\n",in);
  return 0;
}
  
  
