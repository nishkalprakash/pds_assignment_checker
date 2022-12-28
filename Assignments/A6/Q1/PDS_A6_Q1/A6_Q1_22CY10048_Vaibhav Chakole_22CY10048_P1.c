/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 6
Description : to print first k terms of the given series
*/
#include<stdio.h>
int print_term(int a); //Initializing function
int main()
{
int a,b,k,t;
printf("Enter the value upto which you want to print the series \n");
scanf("%d",&k);
if(k<0)
{
printf("Invalid Input\n");
}
for(int i=0;i<k;i++)
{
t = print_term(i); //calling of a function to compute and then print the term
printf("%d ", t);
}
return 0;
}
int print_term(int n) //declaring the function
{
int a;
if(n==0)
{
return 0;
}
if(n==1)
{
return 1;
}
if(n==2)
{
return 2;
}
return 3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*print_term(n-3)+1;
}
