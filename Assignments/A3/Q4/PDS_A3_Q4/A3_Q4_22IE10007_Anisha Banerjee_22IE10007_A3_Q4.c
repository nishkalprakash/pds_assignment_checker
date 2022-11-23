/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 3
Program to calculate electricity bill
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{ 
float u,bill,fbill;
printf("Enter the total number of units in KWH\n");
scanf("%f", &u);
if(u>300)
{
  bill= 50+75+120+(u-300)*1.5;
  fbill= bill + 0.2*bill;
  printf("Rs.%f", fbill);
}
else if(u>200)
{
  bill=50+75+(u-200)*1.2;
  fbill= bill+0.2*bill;
  printf("Rs.%f", fbill);
}
else if(u>100)
 {
   bill = 50+(u-100)*0.75;
   fbill= bill+ 0.2*bill;
   printf("Rs.%f", fbill);
 }
else if(u<100)
 {
   bill=50;
   fbill= bill + 0.2*bill;
   printf("Rs.%f",fbill);
}
else
printf("Invalid choice");
return 0;
}

