//Roll No:23NA30028//
//Name: Ritvik Puvvada//

#include<stdio.h>
int main()
{
  unsigned int p,t;
  float r,si;
  printf("Enter the amount deposited:");
  scanf("%u",&p); //unsigned//
  printf("Enter the time period in years:");
  scanf("%u",&t);
  printf("Enter the rate of interest:");
  scanf("%f",&r);
  si=(p*r*t)/100;//formula of simple interest//
  printf("Total amount payable at the end: %f",p+si);
  return 0;
}
  
  
