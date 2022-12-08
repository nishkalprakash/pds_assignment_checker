/*
Section 14
Roll no : 22CE10065
Name : Saloni Shaw
Assignment 5
Description - Program to find CoPrime numbers
*/

#include <stdio.h>
int f=0,c=0;//initializing values
int gcd (int a, int b )
{ 
int t;
if(a>b)
{
t=a;
a=b;
b=t;
}
while ((b%a)!=0) 

{
t=b%a;
b=a;
a=t;
}
if(a==1)//checking 
f=1;
return f;
}
void CoPrime ( int a, int b)
{
f= gcd (a,b);
if(f==1) 
{
c=c+1;
printf ("%d and %d are CoPrime \n" ,a ,b);//printing if they are coprime numbers
}
}
void pair(int a[])//function for coprime numbers
{

CoPrime (a[0],a[1]);
CoPrime (a[0],a[2]);
CoPrime (a[0],a[3]);
CoPrime (a[0],a[4]);

CoPrime (a[1],a[2]);

CoPrime (a[1],a[4]);

CoPrime (a[2],a[3]);
CoPrime (a[2],a[4]);

CoPrime (a[3],a[4]);
 
return;
}
int main ()//main function
{
int num[5];
int i ;
for(i=0;i<5;i++)//loop to enter array numbers
{
printf("enter the array numbers ");
scanf("%d",&num[i]);
}
pair(num);
if(c==0)//checking for no coprime numbers
printf("No coprime found\n");
return 0;
}
//end of program
