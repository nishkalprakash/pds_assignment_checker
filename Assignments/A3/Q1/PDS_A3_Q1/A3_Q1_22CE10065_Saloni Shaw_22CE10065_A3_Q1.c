/*

Section 14

Roll no : 22CE10065

Name : Saloni Shaw

Assignment 3

Description - Program to check valid time of the day

*/

#include <stdio.h>

int main ()

{

int ss,mm,hh;

printf(" Enter time of the day in seconds, minutes and hours format respectively");

scanf ("%d" "%d" "%d" ,&ss,&mm,&hh);

if(((ss<60)&&(ss>=0))&&((mm<60)&&(mm>0))&&((hh<24)&&(hh>0)))

{

printf("Valid time - %d:%d:%d\n" ,hh,mm,ss);

}

else

printf("invalid time\n");

return 0;

}
