
/*
SECTION:14
ROLL NO.:22MI31006
NAME:ASMIT SRIVASTAVA
ASSIGNMENT NO.:3
DESCRIPTION:PROGRAM TO ENTER UNITS AND CHECK ITS COST */

#include<stdio.h>
int main()
{
int units;
float price;
printf("enter the units used");
scanf("%d" ,&units);
if(units<=100){
printf("Rs 50");
}
else if(units>100 && units<=200){
printf("Rs-%f",50+(units-100)*0.75 +(50+((units-100)*0.75))/5);
}
else if(units>200 && units<=300){
printf("Rs-%f",125+(units-200)*1.20 +(125+((units-200)*1.20))/5);
}
else if(units>300){
printf("Rs-%f",245+(units-300)*1.50 +(245+((units-300)*1.50))/5);
}
return 0;
}


