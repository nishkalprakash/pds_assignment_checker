/*
Section-14
Roll no.-22MT10042
Name- Rathin Ghosh
Assignment number-3
Program description : calculates electric bill based on number of units consumed.
*/
#include<stdio.h>
int main()
{
float n;
printf("Enter the number of units consumed : ");
scanf("%f", &n);
if (n<=100.0)
printf("Total electric bill = %f", 50.00);
if (n>100.0 && n<=200.0)
printf("Total electric bill = %f", (50.0+(n-100.0)*0.75));
if (n>200.0 && n<=300.0)
printf("Total electric bill = %f", (50.0+100.0*0.75+(n-200.0)*1.20));
if (n>300.0)
printf("Total electric bill = %f", (50.0+100.0*0.75+100.0*1.20+(n-300.0)*1.50));
return 0;
}


