/*
Section 14
Roll no. 22IM10001
Name: Abhijit Kumar
Assignment no: 3
Description:Printing what day it is based on date and month input.
*/

#include<stdio.h>
#include<math.h>
int main()
{
int d,m,k;
printf("Enter day and month:");
scanf("%d %d",&d,&m);
if(d<32 && m<13)
{
if (m==1)
k=0;
else
if (m==2)
k=31;
else
if (m==3)
k=59;
else
if (m==4)
k=90;
else
if (m==5)
k=120;
else
if (m==6)
k=151;
else
if (m==7)
k=181;
else
if (m==8)
k=212;
else
if (m==9)
k=243;
else
if (m==10)
k=273;
else
if (m==11)
k=304;
else
if (m==12)
k=334;
float a= d+k;
int b= a/7;
float c= a-(b*7);
if (c==1)
printf("The day is=Saturday");
else
if (c==2)
printf("The day is=Sunday");
else
if (c==3)
printf("The day is=Monday");
else
if (c==4)
printf("The day is=Tuesday");
else
if (c==5)
printf("The day is=Wednesday");
else
if (c==6)
printf("The day is=Thursday");
}
else 
printf("Invalid Input");
return 0;
}
