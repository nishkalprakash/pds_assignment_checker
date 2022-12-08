/*  Section 14
Roll No  : 22HS10010
Name :Archit Bharani
Assignment No : 5
Description :                      */
#include<stdio.h>
void CoPrime(int ,int );
int gcd(int,int);
void pair(int);
int main()
{
int i,n;
printf("Enter 5 numbers ");
for(i=1;i<=5;i++)
{
scanf("%d",&n);
} 

return 0;
}
int gcd(int a, int b)
{
int c;
if(a>b)
{
c=a;
a=b;
b=c;
}
while((b%a)!=0)
{
c=b%a
b=a;
a=c;
}
return a;
}

