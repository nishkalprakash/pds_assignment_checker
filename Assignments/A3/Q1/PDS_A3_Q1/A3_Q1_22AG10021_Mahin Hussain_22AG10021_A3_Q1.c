/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:3
Description: Program to check if inputted time is valid or invalid.
*/

#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter the time in the format of SS MM HH ");
scanf("%d %d %d",&a, &b, &c);           //a stores SS, b stores MM, c stores HH
if(a>=60||b>=60||c>=24)
{
printf("Invalid time ");
}
else
{
printf("Valid time-%d:%d:%d" ,c,b,a);      //to print valid time in the format HH:MM:SS
}
return 0;
}
