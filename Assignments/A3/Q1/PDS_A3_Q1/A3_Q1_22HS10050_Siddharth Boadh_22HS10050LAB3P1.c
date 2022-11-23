/*
Section 14
Roll No : 22HS10050
Name : Siddharth Boadh
Assignment No : 3
Description : Program to check input integers represent a valid time or not */






#include<stdio.h>
int main()
{
int HH,MM,SS;
scanf("%d", &SS);
scanf("%d", &MM);
scanf("%d", &HH);
if((HH<=24)&&(MM<=60)&&(SS<=60))
{
printf("Valid time-%d:%d:%d",HH,MM,SS);
}
else {
printf("invalid time");
}
return 0;
}
