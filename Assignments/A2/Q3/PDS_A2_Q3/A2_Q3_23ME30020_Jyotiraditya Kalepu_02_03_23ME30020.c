//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
int main()
{
  unsigned int amt_dep, years;              // Initiallising variables
  float int_rate, tot_pay = 0;
  printf("Please enter the amount deposited : ");
  scanf("%d",&amt_dep);                     
  printf("\nPlease enter the period of deposit : ");
  scanf("%d",&years);
  printf("\nPlease enter the applicable interest rate : ");
  scanf("%f", &int_rate);
  tot_pay = amt_dep + amt_dep*int_rate*years/100; // Find total payable amount
  printf("\nTotal amount payable is : %1.3f\n",tot_pay);
  return 0;
}
