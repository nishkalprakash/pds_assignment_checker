//Roll No.: 23CS30029
//Name: Kshetrimayum Abo

#include<stdio.h>
int main()
{
  unsigned int deposit,period; /*Declaring the necessary variables*/
  int interest;
  printf("Enter the deposit amount and the time period of deposit in years (positive integer values only): ");
  scanf("%d%d",&deposit,&period);
  printf("Enter the interest rate (integer value only ): ");
  scanf("%d",&interest);
  printf("The total amount payable at the end of the deposit period(assuming fixed interest rate) is : %f\n",deposit+(float)deposit*period*interest/100); /*Printing the computed total amount payable at the end of the deposit period assuming fixed interest rate*/
  return 0;
}
