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
int date,month;
printf("Enter day and month : "); //Ask for date and month
scanf("%d %d",&date,&month); // storing value
if (month==1)
{
if(date>31)
{
printf("Invalid date"); //checking whether date is valid or not
}

else if (date%7==0)
{
 printf("Friday");
}
else if (date%7==1)
{
 printf("Saturday");
}
else if (date%7==2)
{
 printf("Sunday");
}
else if (date%7==3)
{
 printf("Monday");
}
else if (date%7==4)
{
 printf("Tuesday");
}
else if (date%7==5)
{
 printf("Wednesday");
}
else if (date%7==6)
{
 printf("Thursday");
}
}
if (month==2)
{
if(date>28)
{
printf("Invalid date");
}
else if (date%7==0)
{
 printf("Monday");
}
else if (date%7==1)
{
 printf("Tuesday");
}
else if (date%7==2)
{
 printf("Wednesday");
}
else if(date%7==3)
{
 printf("Thursday");
}
else if (date%7==4)
{
 printf("Friday");
}
else if (date%7==5)
{
 printf("Saturday");
}
else if (date%7==6)
{
 printf("Sunday");
}
}
if (month==3)
{
if(date>31)
{
printf("Invalid date");
}
else if (date%7==0)
{
 printf("Monday");
}
else if (date%7==1)
{
 printf("Tuesday");
}
else if (date%7==2)
{
 printf("Wednesday");
}
else if (date%7==3)
{
 printf("Thursday");
}
else if (date%7==4)
{
 printf("Friday");
}
else if (date%7==5)
{
 printf("Saturday");
}
else if (date%7==6)
{
 printf("Sunday");
}
}
if (month==4)
{
if(date>30)
{
printf("Invalid date");
}
else if (date%7==0)
{
 printf("Thursday");
}
else if (date%7==1)
{
 printf("Friday");
}
else if (date%7==2)
{
 printf("Saturday");
}
else if (date%7==3)
{
 printf("Sunday");
}
else if (date%7==4)
{
 printf("Monday");
}
else if (date%7==5)
{
 printf("Tuesday");
}
else if (date%7==6)
{
 printf("Wednesday");
}
}
if (month==5)
{
if(date>31)
{
printf("Invalid date");
}
else if (date%7==0)
{
 printf("Saturday");
}
else if (date%7==1)
{
 printf("Sunday");
}
else if (date%7==2)
{
 printf("Monday");
}
else if (date%7==3)
{
 printf("Tuesday");
}
else if (date%7==4)
{
 printf("Wednesday");
}
else if (date%7==5)
{
 printf("Thursday");
}
else if (date%7==6)
{
 printf("Friday");
}
}
if (month==6)
{
if(date>30)
{
printf("Invalid date");
}
else if (date%7==0)
{
 printf("Tuesday");
}
else if (date%7==1)
{
 printf("Wednesday");
}
else if (date%7==2)
{
 printf("Thursday");
}
else if (date%7==3)
{
 printf("Friday");
}
else if (date%7==4)
{
 printf("Saturday");
}
else if (date%7==5)
{
 printf("Sunday");
}
else if (date%7==6)
{
 printf("Monday");
}
}
if (month==7)
{
if(date>31)
{
printf("Invalid date");
}
else if (date%7==0)
{
 printf("Thursday");
}
else if (date%7==1)
{
 printf("Friday");
}
else if (date%7==2)
{
 printf("Saturday");
}
else if (date%7==3)
{
 printf("Sunday");
}
else if (date%7==4)
{
 printf("Monday");
}
else if (date%7==5)
{
 printf("Tuesday");
}
else if (date%7==6)
{
 printf("Wednesday");
}
}
if (month==8)
{
if(date>31)
{
printf("Invalid date");
}
else if (date%7==0)
{
 printf("Sunday");
}
else if (date%7==1)
{
 printf("Monday");
}
else if (date%7==2)
{
 printf("Tuesday");
}
else if (date%7==3)
{
 printf("Wednesday");
}
else if (date%7==4)
{
 printf("Thursday");
}
else if (date%7==5)
{
 printf("Friday");
}
else if (date%7==6)
{
 printf("Saturday");
}
}
if (month==9)
{
if(date>30)
{
printf("Invalid date");
}
else if (date%7==0)
{
 printf("Wednesday");
}
else if (date%7==1)
{
 printf("Thursday");
}
else if(date%7==2)
{
 printf("Friday");
}
else if (date%7==3)
{
 printf("Saturday");
}
else if (date%7==4)
{
 printf("Sunday");
}
else if (date%7==5)
{
 printf("Monday");
}
else if (date%7==6)
{
 printf("Tuesday");
}
}
if (month==10)
{
if(date>31)
{
printf("Invalid date");
}
else if (date%7==0)
{
 printf("Friday");
}
else if (date%7==1)
{
 printf("Saturday");
}
else if (date%7==2)
{
 printf("Sunday");
}
else if (date%7==3)
{
 printf("Monday");
}
else if (date%7==4)
{
 printf("Tuesday");
}
else if (date%7==5)
{
 printf("Wednesday");
}
else if (date%7==6)
{
 printf("Thursday");
}
}
if (month==11)
{
if(date>30)
{
printf("Invalid date");
}
else if (date%7==0)
{
 printf("Monday");
}
else if (date%7==1)
{
 printf("Tuesday");
}
else if (date%7==2)
{
 printf("Wednesday");
}
else if (date%7==3)
{
 printf("Thursday");
}
else if (date%7==4)
{
 printf("Friday");
}
else if (date%7==5)
{
 printf("Saturday");
}
else if (date%7==6)
{
 printf("Sunday");
}
}
if (month==12)
{
if(date>31)
{
printf("Invalid date");
}
else if (date%7==0)
{
 printf("Wednesday");
}
else if (date%7==1)
{
 printf("Thursday");
}
else if (date%7==2)
{
 printf("Friday");
}
else if (date%7==3)
{
 printf("Saturday");
}
else if (date%7==4)
{
 printf("Sunday");
}
else if(date%7==5)
{
 printf("Monday");
}
else if (date%7==6)
{
 printf("Tuesday");
}
}
if(month>12)
{
printf("Invalid date");
}
return 0;
}

