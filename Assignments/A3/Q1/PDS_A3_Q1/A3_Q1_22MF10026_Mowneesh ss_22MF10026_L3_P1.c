/*
 Section 14
 Roll no : 22MF10026
 Name :#your name#
 Assignment no : 3
 description : Program to check points
*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
     int ss, mm, hh;
printf("Enter the time in the order of seconds, minutes, hours: \n");
scanf("%d %d %d", &ss, &mm, &hh);
     if(ss<=59 && mm<=59 && hh<=23)
     printf("Vaild time -- %d : %d : %d", hh, mm, ss);
     else printf("Invalid time");
return 0;
}
