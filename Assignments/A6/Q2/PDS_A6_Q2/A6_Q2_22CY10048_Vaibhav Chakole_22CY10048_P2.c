/*
Section 14
Roll No: 22CY10048
Name: Vaibhav Tulshidas Chakole
Assignment number: 6
Description : to print pairs of co-prime numbers
*/
#include<stdio.h>
int gcd(int a, int b);
int main()
{
int a,b,c,n;
printf("How many numbers you want to test \n");
scanf("%d",&n);
float ar[n];
printf("Enter the numbers\n");
for(int i=0;i<n;i++)
{
scanf("%f",&ar[i]);
}
for(int i=0;i<n;i++)
{
if(ar[i]<0)
{
printf("Invalid Entries: All should be positive numbers");
return 0;
}
}
for(int j=0;j<n;j++)
{
if((ar[j]-(int)ar[j])!=0)
{
printf("Invalid Entries: All should be integer numbers");
return 0;
}
}
printf("Co-Prime pairs\n");
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(ar[i]>ar[j])
{
c=gcd(ar[j],ar[i]);
}
else
{
c=gcd(ar[i],ar[j]);
}
if(c==1)
{
printf("(%0.f %0.f)\n", ar[i],ar[j]);
}
}
}
return 0;
}
int gcd(int a, int b)
{
if(b==0)
return a;
else if(a>b)
return gcd(b,a);
else
return gcd(a,b%a);
}
