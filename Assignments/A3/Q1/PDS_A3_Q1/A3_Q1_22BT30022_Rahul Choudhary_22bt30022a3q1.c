/*
SECTION 14
roll No. 22BT30022
Name: Rahul choudhary
Assignment no.3
Description: To read and represent time in given format
*/
#include <stdio.h>
int main()
{
int SS,MM,HH;
printf("enter seconds");
scanf("%d",&SS);
printf("enter minutes");
scanf("%d",&MM);
printf("enter hours");
scanf("%d",&HH);
if (SS>59)
{
printf("invalid time");
}
if(MM>59)
{
printf("invalid time");
}
if (HH>23)
{
printf("invalid time");
}
else
{
printf("valid time%2d:%2d:%2d",HH,MM,SS);
}
}
