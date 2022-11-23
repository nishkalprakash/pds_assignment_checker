/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 3
Description : To print the input value in words (from 20 to 99)
*/
#include<stdio.h>
int main()
{
int n ;
printf("Enter two digit number between 20 to 99\n");
scanf("%d",&n);// to scan
char c1 , c2 ;
int a = n % 10 ;
int b = n /10;
if (b==2 )
{
printf("twenty ");
}
if (b==3){
printf("thirty ");
}
if (b==4){
printf("fourty ");
}
if (b==5 ){
printf("fifty ");
}
if (b==6){
printf("sixty ");
}
if (b==7){
printf("seventy ");
}
if (b==8){
printf("eighty ");
}
if (b==9){
printf("ninety ");
}
if ( a == 1 ){
//char c1 = "one" ;
printf("one");
}
if ( a == 2 ){
//char c1 = "two" ;
printf("two");
}
if ( a == 3 ){
printf("three") ;
}
if ( a == 4 ){
printf("four");
}
if ( a == 5 ){
printf("five") ;
}
if ( a == 6 ){
printf("six") ;
}
if ( a == 7 ){
printf("seven" );
}
if ( a == 8 ){
printf("eight") ;
}
if ( a == 9 ){

printf("nine") ;
}


//printf("%c2 %c1",c2,c1);
return 0;
}

