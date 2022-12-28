/*
Section 14
Roll no : 22CE10065
Name : Saloni Shaw
Assignment 6
Description - Program to find the number upto k term of given series
*/

#include <stdio.h>
int print_term(int t)//function print_term
{
int n;// initialized n
if(t==0)
return 0;
else if(t==1)
return 1;
else if(t==2)
return 2;
else
{
n=3*print_term(t-1)*print_term(t-2)-2*print_term(t-2)*print_term(t-3)+1;//calculating n, using recursion
return n;//returning n
}
}
int main()//main function
{
int k, i, m ;
printf("enter the number of term\n");//entering the number of terms 
scanf("%d", &k);
if(k<=0)
printf("Invalid input");//printing invalid
else 
{
for ( i=0; i<k-1 ; i++)
{
m=print_term(i);//function calling
printf("%d,", m);
}
m=print_term(k-1);//function calling
printf("%d",m);
}
return 0;
}//end of program
