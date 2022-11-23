/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 3 
Description : Program to read the three integers representing the time of a day and to check whether it is a valid or invalid time of the day
*/

#include<stdio.h>

int main(){
int HH;// HH denotes hours
int MM;// MM denotes minutes
int SS;// SS denotes seconds
printf("enter the time :\n");
scanf("%d %d %d",&SS,&MM,&HH);

if(SS<=58 && MM<=58 && HH>=12 && HH<=24)
{
printf("Valid time\n");
}

else
{
printf("Invalid time \n");
}
return 0;
}

