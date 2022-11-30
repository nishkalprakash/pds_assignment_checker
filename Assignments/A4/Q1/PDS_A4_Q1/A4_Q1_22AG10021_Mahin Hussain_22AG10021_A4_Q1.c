/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:4
Description: Program to display all the factors of the number.
*/

#include<stdio.h>
long int n;       //n stores the number, long int is used as large  numbers are also used
int main()
{
printf("Enter a number in the range [-999999,999999]");    //asking user to input a number and entering a number
scanf("%ld",&n);
if(n>0&&n<=999999)         //for positive numbers
{
for(long int i=1;i<=n;i++)       //loop from 1 to the number. i is loop variable
{
if(n%i==0)                        //condition checks if the number in the range of 1 to number is the factor or not
printf("%ld ",i);                 //printing the factors and a space after that
}
}
else if(n>=-999999&&n<0)        //for negative numbers
{
for(long int j=1;j<=n*(-1);j++)      //loop from 1 to modulus of the number. j is loop variable
{
if(n%j==0)
printf("%ld ",j);
}
}
else if(n==0)                    //for 0
printf("%ld",n);              //printing the factor of 0 which is 0 itself
else
printf("Invalid Input");        //if the number inputted is not in the given range
return 0;
}
