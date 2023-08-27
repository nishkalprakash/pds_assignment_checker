// Roll No. : 23PH10013
// Name : Bhoomik Modi
#include <stdio.h>// Invoking Header file
int main(){// creating main function
  unsigned int amt,years;
  float rate;
  float tot_amt;
  printf("Enter the amount and years(Leave a space between two) : "  );
  scanf("%u%u",&amt,&years);
  printf("Enter the Rate of Interest : ");
  scanf("%f",&rate);
  tot_amt =amt + (amt*years*rate)/100.0;
  printf("Total Payable Amount : %f",tot_amt);
  return 0;
}
