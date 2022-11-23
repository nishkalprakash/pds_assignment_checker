/*
section 14
Roll no. 22BT30022
Name Rahul choudhary
Assignment no. 3
Description:  program for electric bill units
*/
#include<stdio.h>
int main()
{
float unit,bill;
printf("enter number of units");
scanf("%f",&unit);
if(unit<=100)
bill=50;
else
if(unit<=200)
bill=50+((unit-100)*.75);
else
if(unit<=300)
bill=125+((unit-200)*1.20);
else if (unit>300)
bill=245+((unit-300)*1.50);
bill=bill+bill*.2;
return 0;
}
