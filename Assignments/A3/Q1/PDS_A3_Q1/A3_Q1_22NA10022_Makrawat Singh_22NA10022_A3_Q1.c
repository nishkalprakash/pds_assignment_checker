/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 3
 Description : Program to read and print the time of the day 
*/

#include <stdio.h>

int main(){
   int s,m,h;
   //taking the input of time from the user in SS MM HH format
   printf("Enter the value of time in SS MM HH format\n");
   scanf("%d%d%d",&s,&m,&h);
   if(s<60&&m<60&&h<24){
     printf("Valid Time - %d:%d:%d",h,m,s); 
     
   }
   else {
      
     printf("Invalid time");
   }

}


