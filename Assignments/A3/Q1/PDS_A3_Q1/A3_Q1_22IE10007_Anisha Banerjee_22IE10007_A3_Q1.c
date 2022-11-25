/*
Section 14
Roll no - 22IE10007
Name - Anisha Banerjee
Assignment 3
Program to check valid time
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{ 
int s,m,h;
printf("Enter the time in SS,MM,HH format\n");
scanf("%d %d %d", &s, &m, &h);
if (h==24)
{
if ((s==0)&&(m==0))
printf("Valid time - %d:%d:%d",h,m,s);
else
printf("Invalid time");
}
else
{ 
if(((s<0)||(s>59))||((m<0)||(m>59))||((h<0)||(h>23)))
  printf("Invalid time");
else
  printf("Valid time - %d:%d:%d",h,m,s);
}
return 0;
}

