/*
SECTION 14
ROLL NO. : 22HS10010
Name: Archit Bharani
Assignment No. : 3
Description:To check if time entered is valid or invalid
*/
#include<stdio.h>

int main()
{
int HH,MM,SS;
printf("Enter second hand of time:\n");
scanf("%d",&SS);
printf("Enter minute hand of time:\n");
scanf("%d",&MM);
printf("Enter Hour hand of time:\n");
scanf("%d",&HH);
if(SS>=60 || MM>=60 || HH>=24){
printf("Invalid Time");
}else printf("Valid Time-%d:%d:%d",HH,MM,SS);
/*Time is printed in HH:MM:SS format where HH,MM,SS, represent hours,minutes and seconds r respectively*/
return 0;
}


