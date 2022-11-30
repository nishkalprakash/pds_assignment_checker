/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:4
Description: Program to display the digits in reverse in words.
*/ 

#include<stdio.h>
long int n; //n stores the number , long int is used as range of number is very large
int a;
int main()
{ 
printf("Enter a number in the range [0,9999999999]");
scanf("%ld", &n);                              //asks the user to input a number and stores the number
if(n>0&&n<=9999999999)              //checking for valid input
{
while(n!=0)           //while loop which extracts each number and print it in  words 
{
a=n%10;       //a stores the last digit
switch(a)
{
case 0:printf("Zero ");
break;
case 1:printf("One ");
break;
case 2:printf("Two ");
break;
case 3:printf("Three ");
break;
case 4:printf("Four ");
break;
case 5:printf("Five ");
break;
case 6:printf("Six ");
break;
case 7:printf("Seven ");
break;
case 8:printf("Eight ");
break;
case 9:printf("Nine ");                         //switch case which converts each extracted number in words
break;
}
n=n/10;       //removes the digit which has been conerted to words
}
}
else if(n==0)    
printf("Zero");       //prints 0 in words
else
printf("Invalid Input");    //for invalid input
return 0;
}
