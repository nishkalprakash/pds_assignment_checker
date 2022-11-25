/*
Section 14
Roll no: 22EX10014
Name: Bibhor Patra
Assignment no:3
Description: Program to show time
*/


#include<stdio.h>
int main()
{ 
int s,m,h; // declaration of variables

printf("Please enter seconds");
scanf("%d",&s); // seconds input
printf("Please enter minutes");
scanf("%d",&m); // minutes input
printf("Please enter hours"); // hours input
scanf("%d",&h);

//inputs acquired

if(s<60 && m<60 && h<24)
{ printf("Valid time - %d:%d:%d",h,m,s);} // Printing of output in valid cases

else {
	printf("Invalid time");} //invalid time case

return 0;
}