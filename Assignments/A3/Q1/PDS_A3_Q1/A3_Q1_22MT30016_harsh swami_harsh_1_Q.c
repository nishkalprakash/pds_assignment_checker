/*Section 14
Roll no:22MT30016
Name:#harsh#
Assignment No : 3
Description : program to check points*/

#include <stdio.h>
int main ()
{
int SS, MM , HH;

printf("enter seconds,minutes,hours \n");
scanf("%d%d%d",&SS,&MM,&HH);


if(SS>0 && SS<60 && MM>0 && MM<60 && HH>0 && HH<24)
{
printf("valid time-HH:MM:SS");

}

else
{
printf("invalid time");
}
return 0;
}
