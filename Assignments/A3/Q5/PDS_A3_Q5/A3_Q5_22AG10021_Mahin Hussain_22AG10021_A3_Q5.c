/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:3
Description: Program to print day from the inputted date
*/

#include<stdio.h>
int main()
{
int d,m,c,x;    //d stores day, m stores month, c stores the no. of day of the year to which the date belongs , x stores the value to be converted to day name
printf("Enter day and month of the year 2022 as DD MM:");
scanf("%d %d",&d, &m);
if(m==2&&d>29)              //conditions to check for invalid date
{
printf("Invalid date");
}
else if((m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&d>31)
{
printf("Invalid date");
}
else if((m==4||m==6||m==9||m==11)&&d>30)
{
printf("Invalid date");
}
else
{
if(m==1)                 //conditions to convert the date to the no. of the day to which the year belongs
{
c=d;
}
else if(m==2)
{
c=31+d;
}
else if(m==3)
{
c=31+28+d;
}
else if(m==4)
{
c=31+28+31+d;
}
else if(m==5)
{
c=31+28+31+30+d;
}
else if(m==6)
{
c=31+28+31+30+31+d;
}
else if(m==7)
{
c=31+28+31+30+31+30+d;
}
else if(m==8)
{
c=31+28+31+30+31+30+31+d;
}
else if(m==9)
{
c=31+28+31+30+31+30+31+31+d;
}
else if(m==10)
{
c=31+28+31+30+31+30+31+31+30+d;
}
else if(m==11)
{
c=31+28+31+30+31+30+31+31+30+31+d;
}
else if(m==12)
{
c=31+28+31+30+31+30+31+31+30+31+30+d;
}
x=c%7;       //calculating the no. which will be converted to day name
if(x==1)       //conditions to check the no. and print the day name accordingly
{
printf("Saturday");
}
else if(x==2)
{
printf("Sunday");
}
else if(x==3)
{
printf("Monday");
}
else if(x==4)
{
printf("Tuesday");
}
else if(x==5)
{
printf("Wednesday");
}
else if(x==6)
{
printf("Thursday");
}
else if(x==7)
{
printf("Friday");
}
}
return 0;
}
