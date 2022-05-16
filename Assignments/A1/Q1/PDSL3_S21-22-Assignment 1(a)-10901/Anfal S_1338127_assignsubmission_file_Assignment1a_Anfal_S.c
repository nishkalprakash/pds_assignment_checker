/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
Assignment class: 1
Operating System: windows
*/

#include<stdio.h>
int main()
{
float a,u,b,t,d;
printf("input the values of a,speed,acceleration,time in the given order\n");
scanf("%f%f%f%f",&a,&u,&b,&t);
d=u*t+0.5*b*t*t+a;
printf("Distance=%f\n",d);
return 0;
}

