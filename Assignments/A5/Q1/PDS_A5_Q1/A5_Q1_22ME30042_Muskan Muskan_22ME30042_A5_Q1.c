/*
* Section 14
* Roll No : 22ME30042
* Name : Muskan
* Assignment No : 5
* Description :find the sum of n terms of e^x*/
#include<stdio.h>

int power(int x,int n);
int fact(int n);
float series(int x,int n);
int main()
{
 int x,n,i,f;
printf("enter the value of x,n");
scanf("\n %d %d",&x,&n);
 series(x,n);
}
int power(int x,int n)
{
if(n==0)
{
return 1;
}
int p=1;
for(int i=1;i<n;i++)
{

p=p*x;
return p;
}
} 

int fact(int n)
{
if(n==0)
{
return 1;
}
int f=1;
for(int i=1;i<n;i++)
{

f=f*i;
return f;
}
}

 float series(int x,int n)
{
  float sum=1.0;
for(int i=1;i<n;i++)
{
sum=sum+(power(x,i)/(fact (i)));
}
printf("sum of first n term of series is %f",sum);
return sum;
}


