/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 3
Description : To print the day after asking date and month from the user
*/
#include<stdio.h>
int main()
{
int day , month ;
printf("Enter day and month:\n");
scanf("%d%d",&day,&month);


if(month == 1 && day <= 31)
{
int a = day%7;
if(a==0){
printf("Friday");
}
if(a==1){
printf("Saturday");
}
if(a==2){
printf("Sunday");
}
if(a==3){
printf("Monday");
}
if(a==4){
printf("Tuesday");
}
if(a==5){
printf("Wednesday");
}
if(a==6){
printf("Thursday");
}}
else if(month == 2 && day<=28)
{
int a = day%7;
if(a==0){
printf("Monday");
}
if(a==1){
printf("Tuesday");
}
if(a==2){
printf("Wednesday");
}
if(a==3){
printf("Thursday");
}
if(a==4){
printf("Friday");
}
if(a==5){
printf("Saturday");
}
if(a==6){
printf("Sunday");
}}
else if(month == 3 && day <= 31)
{
int a = day%7;
if(a==0){
printf("Monday");
}
if(a==1){
printf("Tuesday");
}
if(a==2){
printf("Wednesday");
}
if(a==3){
printf("Thursday");
}
if(a==4){
printf("Friday");
}
if(a==5){
printf("Saturday");
}
if(a==6){
printf("Sunday");
}}
else if(month == 4 && day <= 30)
{
int a = day%7;
if(a==0){
printf("Thursday");
}
if(a==1){
printf("Friday");
}
if(a==2){
printf("Saturday");
}
if(a==3){
printf("Sunday");
}
if(a==4){
printf("Monday");
}
if(a==5){
printf("Tuesday");
}
if(a==6){
printf("Wednesday");
}}
else if(month == 5 && day <= 31)
{
int a = day%7;
if(a==5){
printf("Thursday");
}
if(a==6){
printf("Friday");
}
if(a==0){
printf("Saturday");
}
if(a==1){
printf("Sunday");
}
if(a==2){
printf("Monday");
}
if(a==3){
printf("Tuesday");
}
if(a==4){
printf("Wednesday");
}}
else if(month == 6 && day <= 30)
{
int a = day%7;
if(a==2){
printf("Thursday");
}
if(a==3){
printf("Friday");
}
if(a==4){
printf("Saturday");
}
if(a==5){
printf("Sunday");
}
if(a==6){
printf("Monday");
}
if(a==0){
printf("Tuesday");
}
if(a==1){
printf("Wednesday");
}}
else if(month == 7 && day <= 31)
{
int a = day%7;
if(a==0){
printf("Thursday");
}
if(a==1){
printf("Friday");
}
if(a==2){
printf("Saturday");
}
if(a==3){
printf("Sunday");
}
if(a==4){
printf("Monday");
}
if(a==5){
printf("Tuesday");
}
if(a==6){
printf("Wednesday");
}}
else if(month == 8 && day <= 31)
{
int a = day%7;
if(a==4){
printf("Thursday");
}
if(a==5){
printf("Friday");
}
if(a==6){
printf("Saturday");
}
if(a==0){
printf("Sunday");
}
if(a==1){
printf("Monday");
}
if(a==2){
printf("Tuesday");
}
if(a==3){
printf("Wednesday");
}}
else if(month == 9 && day <= 30)
{
int a = day%7;
if(a==1){
printf("Thursday");
}
if(a==2){
printf("Friday");
}
if(a==3){
printf("Saturday");
}
if(a==4){
printf("Sunday");
}
if(a==5){
printf("Monday");
}
if(a==6){
printf("Tuesday");
}
if(a==0){
printf("Wednesday");
}}
else if(month == 10 && day <= 31)
{
int a = day%7;
if(a==6){
printf("Thursday");
}
if(a==0){
printf("Friday");
}
if(a==1){
printf("Saturday");
}
if(a==2){
printf("Sunday");
}
if(a==3){
printf("Monday");
}
if(a==4){
printf("Tuesday");
}
if(a==5){
printf("Wednesday");
}}
else if(month == 11 && day <= 30)
{
int a = day%7;
if(a==3){
printf("Thursday");
}
if(a==4){
printf("Friday");
}
if(a==5){
printf("Saturday");
}
if(a==6){
printf("Sunday");
}
if(a==0){
printf("Monday");
}
if(a==1){
printf("Tuesday");
}
if(a==2){
printf("Wednesday");
}}
else if(month == 12 && day <= 31)
{
int a = day%7;
if(a==1){
printf("Thursday");
}
if(a==2){
printf("Friday");
}
if(a==3){
printf("Saturday");
}
if(a==4){
printf("Sunday");
}
if(a==5){
printf("Monday");
}
if(a==6){
printf("Tuesday");
}
if(a==0){
printf("Wednesday");
}}

else{
printf("Invalid date\n");
}

return 0 ;
}
