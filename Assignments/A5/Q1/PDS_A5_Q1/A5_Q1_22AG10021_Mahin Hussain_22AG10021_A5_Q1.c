/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:5
Description: Program to display sum of the series.
*/

#include<stdio.h>
int power(int x,int n)             //function to calculate x raised to the power n
{
  int f=1;
  for(int i=1;i<=n;i++)        //loop to multiply x,n times.
    f=f*x;
  return f;
}
int fact(int n)                //function to calculate factorial
{
   int ft=1;
   for(int j=1;j<=n;j++)         //loop to multiply numbers from 1 to the given number
     ft=ft*j;
   return ft;
}
int main()
{
int x,n;
double v=0.0;              //to store value of series
printf("Enter the value of x and n such that n<=10 \n");
scanf("%d %d",&x,&n);
if(n<=10)                                  //checking for correct input of n
{
  for(int i=0;i<n;i++)                     //loop to calculate the series
   v=v+((double)power(x,i)/fact(i));      //series calculation,by calling the power and fact functions
  printf("%f",v);
}
else
  printf("Wrong input");             //error message if value of n is wrong
return 0;
}
