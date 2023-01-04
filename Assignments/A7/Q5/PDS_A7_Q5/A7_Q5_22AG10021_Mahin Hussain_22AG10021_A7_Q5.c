/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:7
Description: Program to find how many elements are “Out of order" in the array .
*/

#include<stdio.h>
int main()
{
int n,f=0;
printf("Enter the number of elements(<=10)\nn:");
scanf("%d",&n);
int a[n],b[n];
printf("Enter the number ");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
b[i]=a[i];
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n-1;j++)
{
if(b[j]>b[j+1])
{
int temp=b[j+1];
b[j+1]=b[j];
b[j]=temp;
}
}
}
for(int i=0;i<n;i++)
{
if(a[i]!=b[i]);
f++;
}
printf("Out of order : %d",f);
return 0;
}

