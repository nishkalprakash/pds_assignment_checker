#include<stdio.h>

int main()
{
int n,t,i,r; 
printf("enter the no");
scanf("%d",&n);
if(n>0)
{
for(i=1;i<=n;i++)
{
t = n%i;
if(t==0)
{printf("%d ",i );}
}
}
else
{
r = (-1)*n;
for(i=1;i<=r;i++)
{
t = r%i;
if(t==0)
{printf("%d ",i);}
}
}
return 0;
}

