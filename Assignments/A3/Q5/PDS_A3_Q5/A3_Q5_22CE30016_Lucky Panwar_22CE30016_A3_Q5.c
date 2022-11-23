/*
 Section 14
 Roll No : 22CE30016
 Name : LUCKY PANWAR
 Assignment No : 3
 Description : Program to check correct time 
*/
 
#include <stdio.h>
 
int main()
{
 int date;
 int month;
 printf("Enter the date and month");
 scanf("%d %d", &date, &month);
 if(date>=1 && date<32 && month>=1 && month<13){
   printf("Valid date");
   }
 if(month==1){
   int days = date - 1;
int modd=days%7;
if (modd==1){
printf("sunday");}
if (modd==2){
printf("monday");}
if (modd==3){
printf("tuesday");}
if (modd==4){
printf("wednesday");}
if (modd==5){
printf("thrusday");}
if (modd==6){
printf("friday");}
if (modd==0){
printf("saturday");}


}






return 0;
}
