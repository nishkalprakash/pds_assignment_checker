/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 6
Description : to perform the given operations
*/
#include<stdio.h>
int main()
{
int a,b,c,n;
printf("Enter the size of array 1");
scanf("%d",&a);
int arr1[a];
printf("Enter elements");
for(int i=0;i<a;i++)
{
scanf("%d",&arr1[i]);
}
printf("Enter the size of array 2");
scanf("%d",&b);
int arr2[b];
printf("Enter elements");
for(int i=0;i<b;i++)
{
scanf("%d",&arr2[i]);
}
printf("What operation you want to perform ");
scanf("%d",&n);
return 0;
}
