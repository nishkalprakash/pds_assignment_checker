/*
sec = 14
roll no = 22EE10028
name = garvit
assign no = 5
desc = to find the sum of n terms 
1 + x + x/2!---
*/
#include<stdio.h>
int fact(int p)
{
int i,g;
for(i=1,g=1;i<=p;i++)
{
g = g*i;
}
return g;
}
int power(int b,int p)
{
int i,g;
for(i=1,g=1;i<=p;i++)
{
g = g*b;
}
return g;
}
int main()
{
int x,n,i,a,b;
double c;
printf("enter the value of x and n");
scanf("%d %d",&x,&n);
for(i=0,c=0;i<=n-1;i++)
{
a = power(x,i);
b = fact(i);
c = c + ((double)a)/b;
}
printf("%lf",c);
return 0;
}





