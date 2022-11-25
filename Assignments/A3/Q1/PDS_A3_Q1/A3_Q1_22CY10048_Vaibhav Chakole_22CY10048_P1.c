/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 3
Description : program to print valid time
*/

#include<stdio.h>
int main()
{
int s,m,h;
printf("enter seconds in SS format\n");
scanf("%d", &s); // demanding seconds
printf("enter minutes in MM format\n");
scanf("%d", &m); // demanding minutes
printf("enter hours in HH format\n");
scanf("%d", &h); // demanding hours
if(h>23) // to check whether the input time is vlid or not 
{
printf("Invalid time");
}
else if(m>59)
{
printf("Invalid time");
}
else if(s>59)
{
printf("Invalid time");
}
else
{
printf("valid time - %d:%d:%d",h,m,s); // printing time
}
return 0;
}

