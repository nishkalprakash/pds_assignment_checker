/*
Section 14
Roll no : 22CE10065
Name : Saloni Shaw
Assignment 7
Description - Program to check whether an element is in order or not
*/

#include <stdio.h>
int main ()

{

int a[10];

int n=1, i=0,j,k,m,flag=0,c=0;
printf("enter size of array\n");
scanf("%d",&n);//entering size of the array
printf("enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);//taking element input
for(i=0;i<n;i++)
{
m=i;
for(j=0;j<m;j++)
{
if(a[j]>a[i])//checking if in order
flag=1;
}
for(k=m+1;k<n;k++)
{
if(a[k]<a[i])//checking if in order
flag=1;//flag increased by 1
}
if(flag==1)
c++;
}
printf("Out of order: %d\n",c);//printing if out of order
return 0;
}
//end of program

