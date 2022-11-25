/*
Section 14
Roll No : 22AG10001
Name : Aarushi Mahajan
Assignment No : 3
Description : Program to find day of a given date
*/

#include <stdio.h>
int main()

{
   int day, month;
   printf("Enter day and month.");
   scanf("%d %d", &day, &month);
   if (month>=12)
   printf("Invalid date");
   else if (month=1 && day>=31)
   printf("Invalid date");
   else if (month=2 && day>=28)
   printf("Invalid date");
   else if (month=3 && day>=31)
   printf("Invalid date");
   else if (month=4 && day>=30)
   printf("Invalid date");
   else if (month=5 && day>=31)
   printf("Invalid date");
   else if (month=6 && day>=30)
   printf("Invalid date");
   else if (month=7 && day>=31)
   printf("Invalid date");
   else if (month=8 && day>=31)
   printf("Invalid date");
   else if (month=9 && day>=30)
   printf("Invalid date");
   else if (month=10 && day>=31)
   printf("Invalid date");
   else if (month=11 && day>=30)
   printf("Invalid date");
   else if (month=12 && day>=31)
   printf("Invalid date");
   return 0;
}   
