/*  *Section 14
Roll no.:22CS30048
Name:Saras Wagh
Assignment no.:5
Description:
Create an array and divide into bins.*/
#include<stdio.h>
int gcd (int a,int b)
{
int temp;
while((b%a)!=0)
{
temp=b%a;
b=a;
a=temp;}
if(a==1)
return 1;
return 0;
}
int main()
{
int a[5];
printf("Enter the values:\n");
for(int i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}
printf("The entered array is:\n");
for(int i=0;i<=4;i++)
{
printf("%d ",a[i]);
}
for(int i=0;i<5;i++)
{
for(int j=i+1;j<5;j++)
{
int m=gcd(a[i],a[j]);
if(m==1)
{

