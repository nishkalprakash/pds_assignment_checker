/*
Section 14
Roll No : 22CH30025
Name: Rajdeep Lahiri
Assignment No : 3
Description: Program to check whether time is valid or not.*/

#include <stdio.h>
int main()
{ 
   int sec,min,hr;
   printf("Enter the seconds,minutes,hours\n");
   scanf("%d %d %d",&sec,&min,&hr);
   
   if((sec>=0) && (sec<=59) && (min>=0) && (min<=59) && (hr>=0) && (hr<=59))
     printf("valid time");
   else
     printf("invalid time");

   return 0;
}  
