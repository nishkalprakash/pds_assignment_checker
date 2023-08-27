//Roll No:23CH10026
//Name:Disha Mukherjee

#include <stdio.h>

int main()
{
  unsigned int amt,yrs;
  float rate,tamt=0.0;
  printf("enter amount deposited\n");
  scanf("%d",&amt);
  printf("\nenter years\n");
  scanf("%d",&yrs);
  printf("\nenter interest rate\n");
  scanf("%f",&rate);
  tamt=(amt*yrs*rate)/100.0;
  printf("\nTotal amount payable:%0.3f",tamt);
  return 0;
}
  
  
  
