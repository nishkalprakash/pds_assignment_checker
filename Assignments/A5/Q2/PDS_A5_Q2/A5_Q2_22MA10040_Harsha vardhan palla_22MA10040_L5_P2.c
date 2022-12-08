/*Name:P.Sri Harsha Vardhan Roll no:22MA10040 assignment:5 assignment no:2 program:to display coprimes*/
#include<stdio.h>
int k=0;
int gcd(int a,int b)
{
int x,rem=1;
if(c>d)
{
x=c;c=d;d=x;
}
while(rem!=0)
{
rem=d%c;
d=c;c=rem;}
return d;
}
void coprime(int x,int y)
{
int c;
c=gcd(x,y);
if(c==1)
{
printf("%d ,%d coprime\n",x,y);
k+1;
}
int arr(int d[])
{
int i,j;
for(i=0;i<4;i++)
{
j=i+1;
for(;j<5;j++)
{ coprime(d[i],d[j]);}}
}
int main()
{
int d[5],i;
printf("enter 5 numbers to the program:\n");
for(i=0;i<5;i++)
{
scanf("%d",&c[i]);}
void coprime(int,int);
int gcd(int,int);
int arr(int d[]);
arr(c);
if(k==0)
printf("no coprimes are found\n");
}
