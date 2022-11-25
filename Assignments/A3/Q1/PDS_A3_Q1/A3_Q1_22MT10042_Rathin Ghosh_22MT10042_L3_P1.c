/*
Section-14
Roll no.-22MT10042
Name- Rathin Ghosh
Assignment number-3
Program description: This program takes a time as input and print it if its a valid time else prints "invalid time"
*/
#include<stdio.h>
int main()
{
int ss,mm,hh;
printf("Enter any time in SS MM HH format : ");
scanf("%d %d %d", &ss,&mm,&hh);
if ((ss>=60 && ss<0) || (mm>=60 && mm<0) || (hh>24 || hh<0))
{
printf("Invalid time!");
}
else 
printf("Valid time - %d : %d : %d",hh,mm,ss);
return 0;
}
