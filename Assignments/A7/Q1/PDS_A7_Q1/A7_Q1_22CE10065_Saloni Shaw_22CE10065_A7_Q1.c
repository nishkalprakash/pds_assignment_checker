/*
Section 14
Roll no : 22CE10065
Name : Saloni Shaw
Assignment 7
Description - Program to insert an element
*/

#include <stdio.h>
int main ()
{
int a[100];
int b[100];
int i,x,pos=0,n;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)//entering elements
scanf("%d",&a[i]);
printf("enter the number to be inserted");
scanf("%d",&x);//taking to be inserted array input
if(x<a[0])
pos=0;
if(x>a[n-1])
pos=n-1;
for(i=1;i<n;i++)
{
if((x>a[i-1])&&(x<a[i])).//condition
pos=i;
}
if(pos!=(n-1))//checking except for last array
{
for(i=0;i<pos;i++)
b[i]=a[i];
b[pos]=x;
for(i=pos+1;i<n+1;i++)
b[i]=a[i-1];
printf("Output array: ");//printing the output array
for(i=0;i<n+1;i++)
printf("%d ",b[i]);
}
if(pos==(n-1))//printing for the last insertion if required
{
printf("Output array: ");
for(i=0;i<n;i++)
printf("%d ",a[i]);
printf("%d",x);
}

return 0;
}//end of program

