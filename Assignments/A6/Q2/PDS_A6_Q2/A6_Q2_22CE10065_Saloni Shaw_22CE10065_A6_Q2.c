/*
Section 14
Roll no : 22CE10065
Name : Saloni Shaw
Assignment 6
Description - Program to find CoPrime numbers
*/

#include <stdio.h>
int f=0,c=0,p;//initializing values
int gcd (int m, int n )//gcd function
{ 
while ((m!=0)&&(n!=0))
{
if(m==n)
return m;
if(m>n)
{
m=m%n;
return(m,n);
}
if(m<n)
{
n=n%m;
return (m,n);
}
}
if(m==0)
return n;
if(n==0)
return m;
}
void CoPrime ( int a, int b)//checking coprime numbers
{
int f;
f= gcd (a,b);//calling gcd function
if(f==1) 
{
c=c+1;
printf("(%d,%d)",a,b);
}
}
void pair(int a[])//function for coprime numbers pairing
{
for(int i=0; i<5;i++)
{
for(int j=i+1;j<5; j++)
{
CoPrime(a[i],a[j]);//pairing
}
}
return;
}
int main ()//main function
{
float num[5];
int arr[5];
int i,x ;
printf("enter the array elements \n");
for(i=0;i<5;i++)//loop to enter array numbers
{
scanf("%f",&num[i]);

for(i=0;i<5;i++)
{
if (num[i]<=0)
{
printf("invalid entry, should be in integer ");
return 0;
}
int p=(num[i]);
if(p==num[i])
arr[i]=p;
else 
printf("invalid entry, should be in integer ");
return 0;
}

pair(arr);
if(c==0)//checking for no coprime numbers
printf("No coprime found\n");
return 0;
}

//end of program
}

