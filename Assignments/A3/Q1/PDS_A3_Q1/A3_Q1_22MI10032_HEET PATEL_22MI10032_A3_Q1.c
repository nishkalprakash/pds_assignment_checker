/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 3
Description : To check if time given by user is valid or not
*/

#include<stdio.h>
int main ()
{
 int SS ;
 printf("Enter the value of Second\n");
 scanf("%2d",&SS);
 int MM ;
  printf("Enter the value of Minute\n");
 scanf("%2d",&MM);
 int HH ;
  printf("Enter the value of Hour\n");
 scanf("%2d",&HH);
 if(SS<=59 && MM <= 59 && HH <= 23){
 printf("Valid time - %2d:%2d:%2d\n",HH,MM,SS);
}
else {
printf("Invalid time\n");
}
 return 0 ;
}
