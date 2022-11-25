/*Section 14
Roll no:22MI31025
Name:Siddharth Raj
Assignment no:3
description:day and month
*/
#include<stdio.h>
int main()
{
int day,month;//Declaration of variables
printf("Enter day and month:");
scanf("%d %d",&day,&month);//input day and month
/*
saturday=1;
sunday=2;
monday=3;
tuesday=4;
wednesday=5;
thursday=6;
friday=7;*/int value1;
int value;//value1corresponds to above table
int flag=0;//variable stores 1 if wrong input
switch(month)
{
case 1:value=day;if(day>31) flag=1;

       break;
case 2:value=day+31;if (day>28) flag=1; 
       break;
case 3:value=day+31+28;if (day>31) flag=1;
       break;
case 4:value=day+31+28+31;if (day>30) flag=1;
       break;
case 5:value=day+31+28+31+30;if (day>31) flag=1;
       break;
case 6:value=day+31+28+31+30+31;if (day>30) flag=1;
       break;
case 7:value=day+31+28+31+30+31+30;if (day>31) flag=1;
       break;
case 8:value=day+31+28+31+30+31+30+31;if (day>31) flag=1;
       break;
case 9:value=day+31+28+31+30+31+30+31+31;if (day>30) flag=1;
       break;
case 10:value=day+31+28+31+30+31+30+31+31+30;if (day>31) flag=1;
        break;
case 11: value=day+31+28+31+30+31+30+31+31+30+31;if (day>30) flag=1;
        break;
case 12:value=day+31+28+31+30+31+30+31+31+30+31+30;if (day>31) flag=1;
        break;
}value1=value%7;//value1 corresponds to the table before switch month
if(month>12)
{flag=1;}
if(flag==1)//condition to check whether month is correct or not
printf("Invalid Input");
else
{
switch(value1)
{
case 1:printf("Saturday");break;
case 2:printf("Sunday");break;
case 3:printf("Monday");break;
case 4:printf("Tuesday");break;
case 5:printf("Wednesday");break;
case 6:printf("thursday");break;
case 7:printf("Friday");break;
}
}
return 0;
}


