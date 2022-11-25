/*
Section 14
Roll No : 22CH30025
Name: Rajdeep Lahiri
Assignment No : 3
Description: Program to compute the electric bill.*/

#include <stdio.h>
int main()
{
  float units,cost;
  printf("enter the number of units");
  scanf("%f",&units);
  if (units<=100)
{
   cost = 1.2*50;
   printf("the cost is %f",cost);
}
  else if (units>100 && units<=200){
   cost = 1.2*(50.0+(units-100.0)*0.75);
   printf("the cost is %f",cost);
}
  else if (units>200 && units<=300){
   cost = 1.2*(125.0+ (units-200.0)*1.2);
   printf("the cost is %f",cost);
}
  else 
{
   cost = 1.2*(245.0 + (units-300.0)*1.50);
   printf("the cost is %f",cost);
}
return 0;
}


 
