//Roll no.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>

int main(){
  unsigned int years, deposit;
  float rate, total;
  printf("Enter the deposited amount: ");
  scanf("%u", &deposit);
  printf("Enter the number of years: ");
  scanf("%u", &years);
  printf("Enter the interest rate (in percent): ");
  scanf("%f", &rate);
  total=deposit+(deposit*rate*years)/100.0;
  printf("Total amount payable at the end is %f.\n", total);
  return 0;
}
