/* 
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :3
 Description : Program to check valid time
 */

#include <stdio.h>
 int main()
 {
   int ss,mm,hh;//declaring variables
   printf("Enter date in SS MM HH format");
   scanf( "%2d %2d %2d",&ss,&mm,&hh);//inputing values
   if(hh>=24 || mm>=60 || ss>=60)
       printf("Invalid time");
   else
       printf("Valid time-%2d:%2d:%2d",hh,mm,ss);//printing time in HH:MM:SS format
   return 0;
  }
 //end of program
   
