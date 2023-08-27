// Roll No. 23CE10005
// Name - Adarsh Kumar Singh

#include<stdio.h>
int main ()
{
  int p, y;                                                                                 /* p - Principal Amount
                                                                                               y - No. of years */
  printf("\nEnter the Principal amount you want to deposit ( in rupees): ");
  scanf("%d", &p);
  printf("Please specify the no. of years years of fixed deposit. Enter here: ");
  scanf("%d", &y);
  float i, f, I;                                                                            /* i - Interest rate
                                                                                               f - Final amount 
                                                                                               I - Total interest */
  printf("Enter the interest rate: ");
  scanf("%f", &i);
  I = p*(i/100)*y;
  f = p + I;
  printf("\nTotal interest amount at an interest rate of %f \nadded for %d years is %.2f", i, y, I);
  printf("\nAnd,\nFinal amount is %.2f", f);
  printf("\n\nThankyou\n");
  return 0;
}
  
