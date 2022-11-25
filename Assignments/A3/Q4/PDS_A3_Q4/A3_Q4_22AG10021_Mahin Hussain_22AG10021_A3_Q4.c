/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:3
Description: Program to compute and print electricity bill
*/

#include<stdio.h>
float u,v,o;         //u stores electric unit, v stores electricity bill without surcharge, o stores final electricity bill
int main()
{
printf("Enter the electric units \n");
scanf("%f", &u);
if(u<=100)
{
v=50;
}
else if(u>=101&&u<=200)
{
v=50+(u-100)*0.75;           //calculating the bill as given in Question
}
else if(u>=201&&u<=300)
{
v=50+100*0.75+(u-200)*1.20;
}
else if(u>300)
{
v=50+100*0.75+100*1.20+(u-300)*1.50;
}
o=v+v*0.2;            //adding surcharge in bill
printf("Rs. %f", o);
return 0;
}
