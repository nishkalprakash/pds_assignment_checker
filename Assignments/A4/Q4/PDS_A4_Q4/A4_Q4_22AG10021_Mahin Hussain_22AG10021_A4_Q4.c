/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:4
Description: Program to print the given pattern.
*/ 

#include<stdio.h>
int n;             //n stores the number
int main()
{
printf("Input a number in the range [2,10]");
scanf("%d", &n);               //asking user to input the number and storing it
if(n>=2&&n<=10)               //checking for correct input
{
for(int i=1;i<=n;i++)      //loop which prints the number of rows as inputted by the user. i is loop variable
{
for(int j=1;j<=i;j++)      //nested loop which forms the traingle as given. j is loop variable
{
if(j%2==1)
printf("1");               //condition to print '1' at all odd places
else if(j%2==0)
printf("0");                   //condition to print '0' at all even places
}
printf("\n");            //for chaging row of the pattern
}
}
else
printf("Invalid Input");   //for invalid input
return 0;
}
