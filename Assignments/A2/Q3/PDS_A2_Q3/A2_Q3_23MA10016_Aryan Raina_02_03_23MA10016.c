//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>

int main() {
  unsigned int amt, yr;
  printf("Enter the amount deposited: ");
  scanf("%d", &amt);
  printf("Enter the period of deposit in years: ");
  scanf("%d", &yr);
  float ir;
  printf("Enter applicable interest rate in percent: ");
  scanf("%f", &ir);
  ir /= 100;

  float ans = amt * (1 + ir*yr);

  printf("Total amount payable at the end of deposit period is %f\n", ans);

  return 0;
}
