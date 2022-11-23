/*
Section-14
Roll no-22CE10025
Name:#Gaurav Meena#
Assignment No:3
Description: Program to check points
*/
#include<stdio.h>

int main(){
 int SS,MM,HH;
 printf("Enter your time in second , hour and minutes %d%d%d/n");
 scanf("%d%d%d",&SS,&MM,&HH);
 
 if(0<=SS && SS<60 , 0<=MM && MM<60 , 0<=HH && HH<24){
     printf("Valid time-HH:MM:SS");  
}

else{
   printf("Invalid time");
}
return 0;
} 
