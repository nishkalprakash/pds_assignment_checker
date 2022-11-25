/*
section 14
Roll no.  22BT30022
Name : Rahul choudhary
Assignment 3
Description: program to find day with help date and month
*/
#include<stdio.h>
int main()
{
int day,month;
printf("enter day and month");
scanf("%d%d",&day,&month);
if (month==1)
{
if((day>31)||(day<1))
printf("invalid date");
else if(day%7==1)
printf("saturday");
else if(day%7==2)
printf("sunday");
else if(day%7==3)
printf("monday");
else if(day%7==4)
printf("tuesday");
else if(day%7==5)
printf("wednesday");
else if(day%7==6)
printf("thrusday");
else if(day%7==0)
printf("friday");
}
else  if (month==2)
{
if((day>28)||(day<1))
printf("invalid date");
 else if(day%7==5)
printf("saturday");
else if(day%7==6)
printf("sunday");
else if(day%7==0)
printf("monday");
else if(day%7==1)
printf("tuesday");
else if(day%7==2)
printf("wednesday");
else if(day%7==3)
printf("thrusday");
else if(day%7==4)
printf("friday");
}
else if( month==3)
{
if((day>31)||(day<1))
printf("invalid date");
else if(day%7==1)
printf("saturday");
else if(day%7==2)
printf("sunday");
else if(day%7==3)
printf("monday");
else if(day%7==4)
printf("tuesday");
else if(day%7==5)
printf("wednesday");
else if(day%7==6)
printf("thrusday");
else if(day%7==0)
printf("friday");
}
else if (month ==4)
{
if((day>30)||(day<1))
printf("invalid date");
else if(day%7==2)
printf("saturday");
else if(day%7==3)
printf("sunday");
else if(day%7==4)
printf("monday");
else if(day%7==5)
printf("tuesday");
else if(day%7==6)
printf("wednesday");
else if(day%7==0)
printf("thrusday");
else if(day%7==1)
printf("friday");
}
else if (month ==5)
{
if((day>31)||(day<1))
printf("invalid date");
else if(day%7==0)
printf("saturday");
else if(day%7==1)
printf("sunday");
else if(day%7==2)
printf("monday");
else if(day%7==3)
printf("tuesday");
else if(day%7==4)
printf("wednesday");
else if(day%7==5)
printf("thrusday");
else if(day%7==6)
printf("friday");
}
else if (month ==6)
{
if((day>30)||(day<1))
printf("invalid date");
else if(day%7==4)
printf("saturday");
else if(day%7==5)
printf("sunday");
else if(day%7==6)
printf("monday");
else if(day%7==0)
printf("tuesday");
else if(day%7==1)
printf("wednesday");
else if(day%7==2)
printf("thrusday");
else if(day%7==3)
printf("friday");
}
else if( month ==7)
{
if((day>31)||(day<1))
printf("invalid date");
else if(day%7==2)
printf("saturday");
else if(day%7==3)
printf("sunday");
else if(day%7==4)
printf("monday");
else if(day%7==5)
printf("tuesday");
else if(day%7==6)
printf("wednesday");
else if(day%7==0)
printf("thrusday");
else if(day%7==1)
printf("friday");
}
else if(month==8)
{
if((day>31)||(day<1))
printf("invalid date");
else if(day%7==6)
printf("saturday");
else if(day%7==0)
printf("sunday");
else if(day%7==1)
printf("monday");
else if(day%7==2)
printf("tuesday");
else if(day%7==3)
printf("wednesday");
else if(day%7==4)
printf("thrusday");
else if(day%7==5)
printf("friday");
}
else if( month ==9)
{
if((day>30)||(day<1))
printf("invalid date");
else if(day%7==3)
printf("saturday");
else if(day%7==4)
printf("sunday");
else if(day%7==5)
printf("monday");
else if(day%7==6)
printf("tuesday");
else if(day%7==0)
printf("wednesday");
else if(day%7==1)
printf("thrusday");
else if(day%7==2)
printf("friday");
}
else if(month ==10)
{
if((day>31)||(day<1))
printf("invalid date");
else if(day%7==0)
printf("saturday");
else if(day%7==1)
printf("sunday");
else if(day%7==2)
printf("monday");
else if(day%7==3)
printf("tuesday");
else if(day%7==4)
printf("wednesday");
else if(day%7==5)
printf("thrusday");
else if(day%7==6)
printf("friday");
}
else if (month ==11)
{
if((day>30)||(day<1))
printf("invalid date");
else if(day%7==5)
printf("saturday");
else if(day%7==6)
printf("sunday");
else if(day%7==0)
printf("monday");
else if(day%7==1)
printf("tuesday");
else if(day%7==2)
printf("wednesday");
else if(day%7==3)
printf("thrusday");
else if(day%7==4)
printf("friday");
}
else if (month ==12)
{
if((day>31)||(day<1))
printf("invalid date");
else if(day%7==3)
printf("saturday");
else if(day%7==4)
printf("sunday");
else if(day%7==5)
printf("monday");
else if(day%7==6)
printf("tuesday");
else if(day%7==0)
printf("wednesday");
else if(day%7==1)
printf("thrusday");
else if(day%7==2)
printf("friday");
}
return 0;
}
