/*
SECTION 14
ROLL no. :22BT30022
name:Rahul choudhary
assignment:5
Description:to find the prime and coprimes.
#include<stdio.h>
const int size=5;
int t=0;
int gcd(int a,int b)
{
int x;
if(a>b)
  {
   x=a;
    a=b;
    b=x;
  }
while((b%a)!=0)
{
x=b%a;
b=a;
a=x;
}
return a;
}
void coprime(int a, int b)
{
if (gcd(a,b)==1)
{
printf("%d and %d are coprime",a,b);
t=1;
}
}
void pair (int a[])
{
for (int i=0;i<=4;i++)
{
for (int j=i+1;j<=4;j++)
coprime(a[i],a[j]);
}
}
int main()
{
int n [size];
for (int i=0;i<=4;i++)
scanf("%d",&n[i]);
pair (n);
if (t==0)
printf("no coprime");
return 0;
}

