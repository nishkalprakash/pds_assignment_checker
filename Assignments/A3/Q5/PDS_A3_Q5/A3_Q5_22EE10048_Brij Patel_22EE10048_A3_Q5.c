/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 3

Description-Program to find the day on a particular date
*/
#include <stdio.h>
int main()
{
int day,month;
printf("Enter day and month: ");
scanf("%d %d",&day,&month);
if(month==1)
{
if((day>31)||(day<1))
printf("Invalid Date");
else if(day%7==1)
printf("Saturday\n");
else if(day%7==2)
printf("Sunday\n");
else if(day%7==3)
printf("Monday\n");
else if(day%7==4)
printf("Tuesday\n");
else if(day%7==5)
printf("Wednesday\n");
else if(day%7==6)
printf("Thursday\n");
else if(day%7==0)
printf("Friday\n");
}
else if(month==2)
{
if((day>28)||(day<1))
printf("Invalid Date");
else if(day%7==5)
printf("Saturday\n");
else if(day%7==6)
printf("Sunday\n");
else if(day%7==0)
printf("Monday\n");
else if(day%7==1)
printf("Tuesday\n");
else if(day%7==2)
printf("Wednesday\n");
else if(day%7==3)
printf("Thursday\n");
else if(day%7==4)
printf("Friday\n");
}
else if(month==3)
{
if((day>31)||(day<1))
printf("Invalid Date");
else if(day%7==5)
printf("Saturday\n");
else if(day%7==6)
printf("Sunday\n");
else if(day%7==0)
printf("Monday\n");
else if(day%7==1)
printf("Tuesday\n");
else if(day%7==2)
printf("Wednesday\n");
else if(day%7==3)
printf("Thursday\n");
else if(day%7==4)
printf("Friday\n");
}
else if(month==4)
{
if((day>30)||(day<1))
printf("Invalid Date");
else if(day%7==2)
printf("Saturday\n");
else if(day%7==3)
printf("Sunday\n");
else if(day%7==4)
printf("Monday\n");
else if(day%7==5)
printf("Tuesday\n");
else if(day%7==6)
printf("Wednesday\n");
else if(day%7==0)
printf("Thursday\n");
else if(day%7==1)
printf("Friday\n");
}
else if(month==5)
{
if((day>31)||(day<1))
printf("Invalid Date");
else if(day%7==0)
printf("Saturday\n");
else if(day%7==1)
printf("Sunday\n");
else if(day%7==2)
printf("Monday\n");
else if(day%7==3)
printf("Tuesday\n");
else if(day%7==4)
printf("Wednesday\n");
else if(day%7==5)
printf("Thursday\n");
else if(day%7==6)
printf("Friday\n");
}
else if(month==6)
{
if((day>30)||(day<1))
printf("Invalid Date");
else if(day%7==4)
printf("Saturday\n");
else if(day%7==5)
printf("Sunday\n");
else if(day%7==6)
printf("Monday\n");
else if(day%7==0)
printf("Tuesday\n");
else if(day%7==1)
printf("Wednesday\n");
else if(day%7==2)
printf("Thursday\n");
else if(day%7==3)
printf("Friday\n");
}
else if(month==7)
{
if((day>31)||(day<1))
printf("Invalid Date");
else if(day%7==2)
printf("Saturday\n");
else if(day%7==3)
printf("Sunday\n");
else if(day%7==4)
printf("Monday\n");
else if(day%7==5)
printf("Tuesday\n");
else if(day%7==6)
printf("Wednesday\n");
else if(day%7==0)
printf("Thursday\n");
else if(day%7==1)
printf("Friday\n");
}
else if(month==8)
{
if((day>31)||(day<1))
printf("Invalid Date");
else if(day%7==6)
printf("Saturday\n");
else if(day%7==0)
printf("Sunday\n");
else if(day%7==1)
printf("Monday\n");
else if(day%7==2)
printf("Tuesday\n");
else if(day%7==3)
printf("Wednesday\n");
else if(day%7==4)
printf("Thursday\n");
else if(day%7==5)
printf("Friday\n");
}
else if(month==9)
{
if((day>30)||(day<1))
printf("Invalid Date");
else if(day%7==3)
printf("Saturday\n");
else if(day%7==4)
printf("Sunday\n");
else if(day%7==5)
printf("Monday\n");
else if(day%7==6)
printf("Tuesday\n");
else if(day%7==0)
printf("Wednesday\n");
else if(day%7==1)
printf("Thursday\n");
else if(day%7==2)
printf("Friday\n");
}
if(month==10)
{
if((day>31)||(day<1))
printf("Invalid Date");
else if(day%7==1)
printf("Saturday\n");
else if(day%7==2)
printf("Sunday\n");
else if(day%7==3)
printf("Monday\n");
else if(day%7==4)
printf("Tuesday\n");
else if(day%7==5)
printf("Wednesday\n");
else if(day%7==6)
printf("Thursday\n");
else if(day%7==0)
printf("Friday\n");
}
else if(month==11)
{
if((day>30)||(day<1))
printf("Invalid Date");
else if(day%7==5)
printf("Saturday\n");
else if(day%7==6)
printf("Sunday\n");
else if(day%7==0)
printf("Monday\n");
else if(day%7==1)
printf("Tuesday\n");
else if(day%7==2)
printf("Wednesday\n");
else if(day%7==3)
printf("Thursday\n");
else if(day%7==4)
printf("Friday\n");
}
else if(month==12)
{
if((day>31)||(day<1))
printf("Invalid Date");
else if(day%7==3)
printf("Saturday\n");
else if(day%7==4)
printf("Sunday\n");
else if(day%7==5)
printf("Monday\n");
else if(day%7==6)
printf("Tuesday\n");
else if(day%7==0)
printf("Wednesday\n");
else if(day%7==1)
printf("Thursday\n");
else if(day%7==2)
printf("Friday\n");
}
else if((month<1)||(month>12))
printf("Invalid date\n");
return 0;
}

