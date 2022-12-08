/*
Section 14
Roll no. - 22MT10042
Name- Rathin Ghosh
Assignment no. - 5
Description- Program calculates the co prime numbers from a given array of integers.
*/ 
#include<stdio.h>
int c=0;
int gcd(int a,int b)
{
int r;
if (a>b){
do{
r=a%b;
b=r;
a=b;
}while (r!=0);
return b;
}
else{
do{
r=b%a;
a=r;
b=a;
}while (r!=0);
return a;
}
}
void CoPrime(int a,int b)
{
if (gcd(a,b)==1)
{
c=1;
printf("%d and %d are Co Prime integers",a,b);
}
}
void pair(int a[])
{
int i,j;
for(i=0;i<4;i++)
{
for(j=i+1;j<5;j++)
{
CoPrime (a[i],a[j]);
printf("%d %d",a[i],a[j]);
}
}
}
int main()
{
int i,ar[5];
printf("Enter an array of 5 integer numbers : ");
for (i=0;i<5;i++)
{
scanf("%d",&ar[i]);
}
for (i=0;i<5;i++)
{
printf("%d\n",ar[i]);
}
pair(ar);
return 0;
}
    
