/* 
  section 14
  Roll No : 22PH10013
  Name : Bonthu Matthews 
  Assignment No : 3
  Description :  program to check if the integers represent a valid time of the day 
*/

#include <stdio.h>

int main ( )
{
  int HH,MM,SS;
  printf("please enter the hours minutes and seconds respectively");
  scanf("%d%d%d",&SS,&MM,&HH);
   
  if (HH<24)
{
  {
   if (MM<60)
   {
    if (SS<60)
       {
  printf("valid time is %d:%d:%d",HH,MM,SS);
       }
else  printf("invalid time");
   }
  }
}
  else  printf("invalid time");
 return 0;
}
  


