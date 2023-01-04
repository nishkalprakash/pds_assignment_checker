/*
Section 14
Roll no : 22CE10065
Name : Saloni Shaw
Assignment 7
Description - Program to check number of times a number appears
*/

#include <stdio.h>
int main ()
{
int a[100];
int i,j,c=0,n,b,f=0;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)//entering elements
scanf("%d",&a[i]);
printf("enter the number of times\n");
scanf("%d",&b);//taking no. of times input
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]==a[j])
c++;//increasing counter by 1
}
if(c==b)//checking the number of times
printf("%d appears %d times",a[i],b);//printing output
else
printf("NO number appears %d times",b);
}
return 0;
}

