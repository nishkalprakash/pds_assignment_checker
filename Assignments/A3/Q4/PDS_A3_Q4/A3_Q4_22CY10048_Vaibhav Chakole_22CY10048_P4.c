/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 3
Description : compute and print electric bill
*/
#include<stdio.h>
int main()
{
float unit,bill;
printf("enter unit consumed\n"); //demanding units
scanf("%f",&unit);
if(unit<100)
{
printf("Electricity bill is %f",50 + (50*0.2)); // calculating bill and printinf bill by given conditions
}
else if(unit<200)
{
bill =(50+((unit-100)*0.75))+((50+((unit-100)*0.75))*0.20); // calculating bill by given conditions
printf("Electricity bill is %f", bill); //printing bill
}
else if(unit<300)
{
bill=50+75+(unit-200)*1.2+((50+75+(unit-200)*1.2)*0.20); // calculating bill by given conditions
printf("Electricity bill is %f", bill); //printing bill
}
else if(unit>=300)
{
bill=50+75+120+((unit-300)*1.50)+((50+75+120+((unit-300)*1.50))*0.20); // calculating bill by given conditions
printf("Electricity bill is %f", bill); //printing bill
}
return 0;
}
 
