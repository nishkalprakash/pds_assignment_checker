//Roll No:23MF10042
//Name:Theyanesh Eswaramoorthy Rajahkrishnan
#include <stdio.h>
int main()
{
  unsigned int amt,time;
  float intr,si;
  printf("Enter the amount to be deposited:");
  scanf("%d",&amt);
  printf("Enter the time period in years:");
  scanf("%d",&time);
  printf("Enter the interest percentage:");
  scanf("%f",&intr);
  si=amt*time*intr/100.0;
  printf("The total amount payable at the end of %d years is %f",time,si+amt);
  return 0;
}
  
  
