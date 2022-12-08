/*
SECTION 14
ROLL no. :22BT30022
name:Rahul choudhary
assignment:5
Description:to find the sum of first n terms of series.
*/
#include<stdio.h>
int fact(int n)
{
int f=1;
for (int i=1;i<=n;i++)
f*=i;
return f;
}
int power(int x,int n)
{
int p=1;
 for (int i=1;i<=n;i++)
p=p*x;
return p;
}
int main()
{
int n,x;
printf("enter value of x and n");
scanf("%d %d",&x,&n);
float sum=0;
for (int i=0;i<n;i++)
sum=sum+(float)(power(x,i))/(fact(i));
printf("%f",sum);
return 0;
}
