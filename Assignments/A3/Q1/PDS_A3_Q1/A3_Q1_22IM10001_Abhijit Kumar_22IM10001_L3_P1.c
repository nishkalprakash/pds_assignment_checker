/*
Section 14
Roll no. 22IM10001
Name: Abhijit Kumar
Assignment no: 3
Description: Program to print time of the day */

#include<stdio.h>
int main()
{
int HH,MM,SS;
scanf("%d %d %d",&SS,&MM,&HH);
if (HH>23) 
printf("Invalid time");
else
if (MM>59)
printf("Invalid Time");
else
if (SS>59)
printf("Invalid Time");
else
printf("Valid time-%d:%d:%d",HH,MM,SS);
return 0;
}


