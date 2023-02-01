#include<stdio.h>
int fib(int n)
{
int s;
if(n==1)
s=0;
else if(n==2)
s=1;
else
s=fib(n-1)+fib(n-2);
return s;
}


int main()
{
int n;
printf("\n Enter the number:");
scanf("%d",&n);
int i=1,k=0;
while(fib(i)<=n)
{
if(fib(i)==n)
{
printf("\n %d belongs to fibonacci sequence!",n);
k=1;
}
i++;
}
if(k==0)
printf("\n %d does not belong tp the fibonacci sequence!",n);
}


