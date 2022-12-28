/*
Name : Rathin Ghosh
Sec: 14
Roll no. : 22MT10042
Program desc. : This program prints the value of a given series using recursion.
*/
#include<stdio.h>
int print_term(int);
int main()        //main function
{
int n,i;
printf("Enter the number of terms of the series :\n ");
scanf("%d, ",&n);  //input taken from the user
if (n>0)
{
for(i=0;i<n;i++)
printf("%d ",print_term(i));
}
else
printf("Invalid input!");
return 0;
}
int print_term(int x)     // print_term function
{
int s=0;
if (x>2)
return (3*print_term(x-1)*print_term(x-2)-2*print_term(x-2)*print_term(x-3)+1);  //recursive calling of the function
if (x==2)
return 2;
if(x==1)
return 1;
if (x==0)
return 0;
}


