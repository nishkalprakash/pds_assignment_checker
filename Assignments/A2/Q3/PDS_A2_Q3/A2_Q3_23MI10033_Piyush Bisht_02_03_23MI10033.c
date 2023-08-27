//Roll No.: 23MI10033
//Name: Piyush Bisht

#include <stdio.h>
int main()
{
  unsigned int pr, yrs;
  float rate, amt;
  printf("Enter the amount to be deposited");
  scanf("%d", &pr);
  printf("\nEnter the period of deposit (in years)");
  scanf("%d", &yrs);
  printf("\nEnter the rate of interest");
  scanf("%f", &rate);
  amt= (pr*yrs*rate)/100 + pr;
  printf("\nThe amount payable at end of deposit = %f", amt);
  return 0;
}
  
