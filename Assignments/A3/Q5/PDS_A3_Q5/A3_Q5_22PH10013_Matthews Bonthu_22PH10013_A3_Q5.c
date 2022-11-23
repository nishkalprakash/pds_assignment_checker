/* 
  section 14
  Roll No : 22PH10013
  Name : Bonthu Matthews 
  Assignment No : 3
  Description: read the date and find out what day it is 
*/

#include <stdio.h>
int main ( )
{
  int month, day;
  printf("please enter the day and the month");
  scanf("%d%d",&day,&month);
   
  if( month==1 && day<32)
  {
   printf("its a valid date");
  } 
else if (month==2 && day<29)
 {
   printf("its a valid date");
  } 
else if (month ==3 && day<32)
 {
   printf("its a valid date");
  } 
else if(month==4 && day<31)
 {
   printf("its a valid date");
  } 
else if (month==5 && day<32)
 {
   printf("its a valid date");
  } 
else if (month==6 && day<31)
 {
   printf("its a valid date");
  } 
else if (month==7 && day<32)
 {
   printf("its a valid date");
  } 
else if (month==8 && day<32)
 {
   printf("its a valid date");
  } 
else if (month==9 && day<31)
 {
   printf("its a valid date");
  } 
else if (month==10 && day<32)
 {
   printf("its a valid date");
  } 
else if (month==11 && day<31)
 {
   printf("its a valid date");
  } 
else if (month==12 && day<32)
 {
   printf("its a valid date");
  } 
else  printf("invalid date");

return 0;
}

 
