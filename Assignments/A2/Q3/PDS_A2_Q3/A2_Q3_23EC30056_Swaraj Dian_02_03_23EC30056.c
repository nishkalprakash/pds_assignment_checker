//Roll No.: 23Ec30056
//Name: Swaraj Dian

#include <stdio.h>
int main()
{
  int p=0,t=0;
  float r=0,i=0;
  printf("Enter the amount deposited in integer: ");
  scanf("%d",&p);
  printf("\nEnter Time in years: ");
  scanf("%d",&t);
  printf("\nEnter the rate of interest: ");
  scanf("%f",&r);
  i=p*r*t;
  printf("\nThe total payable amount=%f",i+p);
}
