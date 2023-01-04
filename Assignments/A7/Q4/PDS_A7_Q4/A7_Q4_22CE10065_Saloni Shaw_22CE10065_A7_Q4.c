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
int a[100];
int i,j,c=0,n,b,f=0;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)//entering elements
scanf("%d",&a[i]);
for (i=0;i<n;i++)

{

for(j=0;j<n;j++)

{

if(a[i]>a[j])

max=a[i];

else

max=a[j];

}

}
return 0;
}
