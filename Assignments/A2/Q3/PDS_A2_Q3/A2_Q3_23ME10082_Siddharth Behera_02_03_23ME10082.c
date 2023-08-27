#include<stdio.h>
void main()
{
  unsigned int p,t;
  float rate,amount;
  printf("enter the  amount deposited=");
    scanf("%u",&p);
    
    printf("enter the time period=");
    scanf("%u",&t);
    
    printf("enter the rate of interest=");
    scanf("%f",&rate);
    
   amount=(p*rate*t)/100;
    
   
printf("the total amount %f",p+amount);
}
    
    

    
