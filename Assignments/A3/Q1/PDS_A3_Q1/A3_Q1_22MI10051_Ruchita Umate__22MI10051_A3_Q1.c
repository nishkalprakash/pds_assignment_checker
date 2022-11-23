/*
SECTION 14
ROLL NO:22MI10051
NAME RUCHITA UMATE
ASSIGNMENT NO 3
DISCRIPTION PROGRAM TO CHECK POINTS
*/

#include<stdio.h>

int main()
{
  int SS,MM,HH;
  printf("Enter the time in seconds,minutes,hours:");
  scanf("%d %d %d",&SS,&MM,&HH);

if(HH<24 && MM<60 && SS<60){
 printf("valid time %d:%d:%d",HH,MM,SS);
}
else{
printf("Invalid time");
}
return 0;
}
 
  


