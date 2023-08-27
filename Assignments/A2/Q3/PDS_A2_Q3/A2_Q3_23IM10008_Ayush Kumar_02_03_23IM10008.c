#include<stdio.h>
//Roll NO: 23IM10008
//Name: AYUSH KUMAR
int main()
{
int depositedamount,time;
float interest,simpleinterest,finalamount; 
printf("\nEnter the amount to be deposited");
scanf("%d", &depositedamount);
scanf("%d", &time);
scanf("%f", &interest);
simpleinterest=depositedamount*interest*time/100;
finalamount= depositedamount+ simpleinterest;
printf("\nFinal Amount=%f", finalamount);
return 0;
}
