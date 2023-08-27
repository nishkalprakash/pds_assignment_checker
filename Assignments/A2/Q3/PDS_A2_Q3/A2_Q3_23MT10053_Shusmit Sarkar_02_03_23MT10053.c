#include<stdio.h>
int main()
{
  int p,t;
  float r;
  printf("Enter your principal amount = Rs. ");
  scanf("%d",&p);
  printf("Enter the number of years = ");
  scanf("%d",&t);
  printf("Enter the rate of interest = ");
  scanf("%f",&r);
  float x;
  x = (p*r*t)/100;
    printf("Your simple interest is = Rs. %f",x);
  return 0;
}
  
