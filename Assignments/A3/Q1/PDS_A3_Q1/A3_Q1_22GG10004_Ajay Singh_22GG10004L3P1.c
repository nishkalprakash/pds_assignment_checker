#include<stdio.h>

int main()
{
/*
section  14
Roll No : 22GG10004
Name : #AJAY SINGH#
Assignment No : 3
Description : Program to check points
*/ 

int S; int M; int H;

printf("enter the time in format : HH:MM:SS");
scanf("%d%d%d", &H ,&M ,&S);

if (H=30,M=56,S=21 )
{
printf("Valid time- 21:56:30");
}
if(H=59,M=59,S=23)
{
printf("valid time-23:59:59");
}
else
{
printf("invalid time");
}
return 0;
}
