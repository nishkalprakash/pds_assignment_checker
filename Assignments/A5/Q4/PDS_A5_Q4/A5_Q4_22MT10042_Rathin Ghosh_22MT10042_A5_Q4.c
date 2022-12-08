/*
Section 14
Roll no. - 22MT10042
Name- Rathin Ghosh
Assignment no. - 5
Description- Divides an input array into bins and prints them
*/
#include<stdio.h>
int main()
{
int n,b;
printf("Enter the number of elements : ");
scanf("%d" , &n);
printf("Enter the number of bins :");
scanf("%d", &b);
printf("Enter the array of elements : ");
int ar[n];
for(i=0;i<n;i++)
scanf("%d\n",&ar[i]);
for(i=0;i<n;i++)
printf("%d",ar[i]);
return 0;
}
int max(int a[])
{
int max=0;
for(i=0;i<n-1;i++)
{
if a[i]>a[i+1]
max=a[i];
}
return max;
}
int min(int a[])
{
int min=0;
for(i=0;i<n-1;i++)
{
if (a[i]<a[i+1])
min=a[i];
}
return min;
}
void bin(int m1, int m2,int b)
{
int x= (m2-m1+1)/b;
for (i=1;i<=x;i++)
{
for (j=0;j<n;j++)
{
if ar[j]> 

