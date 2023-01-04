/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:7
Description: Program to print largest number on the appending of input numbers.
*/

#include<stdio.h>
int main()
{
int c=0,n,d=0;
printf("Enter the number of elements\nn:");
scanf("%d",&n);         //asking user and storing number of elements
int a[n],b[n];
printf("Enter the number ");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);       //asking user and storing number 
b[i]=a[i];
if(a[i]>9)    //condition to check if it is 2 digit number
c++;
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n-1;j++)
{
if(b[j]<b[j+1])
{
int temp=b[j];
b[j]=b[j+1];
b[j+1]=temp;     //sorting the array in descending order
}
}
}
if(c==0)
{
for(int i=0;i<n;i++)
printf("%d",b[i]);
}
else
{
for(int i=0;i<n;i++)
printf("%d",b[i]);
printf("\n(");
for(int i=0;i<n;i++)
printf("%d ",a[i]);
printf(")");               //printing in given form
}
return 0;
}
