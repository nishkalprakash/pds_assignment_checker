//Roll No.: 23IE10011
//Name: Avik Ghosh 
#include <stdio.h>

int main( )
{
  //amt variable is used to store amount being deposited and per variable is used to store period and rate variable is used to store rate of interest 
  unsigned int amt,per;
  float rate, tot;
  printf("Enter the amount to be deposited and period of deposit in years\n");
  scanf("%d %d",&amt, &per);
  printf("Enter the applicable interest rate\n");
  scanf("%f", &rate);
  tot = ((float)amt) + ((amt*rate*per)/100.0);
  printf("Total amount payable at the end of deposit period=%f\n",tot);
}
