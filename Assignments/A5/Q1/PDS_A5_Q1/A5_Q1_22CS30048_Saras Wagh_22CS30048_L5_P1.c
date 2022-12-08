/*  *Section 14
Roll no.:22CS30048
Name:Saras Wagh
Assignment no.:5
Description:
Create an array and divide into bins.*/
#include<stdio.h>
int x,n;
int power(int x,int n)
{
int d=1;
for(int i=1;i<=n;i++)
{
d=d*x;
}
return d;
}
int fact(n)
{
int c=1;
for(int i=1;i<=n;i++)
{
c=c*i;
}/*  *Section 14
Roll no.:22CS30048
Name:Saras Wagh
Assignment no.:5
Description:
Create an array and divide into bins.*/
return c;
}

int main()
{
printf("Enter the value of x:\n");
scanf("%d",&x);
printf("Enter the value of n:\n");
scanf("%d",&n);
double sum=0;
for(int i=0;i<=n;i++)
{
double Q=power(x,i);
double R=fact(i);
sum+=Q/R;
}
printf("The sum of the first n terms is: %lf",sum);
return 0;
}

