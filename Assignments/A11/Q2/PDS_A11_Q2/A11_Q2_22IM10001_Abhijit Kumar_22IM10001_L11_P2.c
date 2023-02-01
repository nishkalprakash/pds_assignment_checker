#include<stdio.h>
int n;
int fib(int n)
{
int t;
if(n==1)
t=0;
if(n==2)
t=1;
if(n>2)
t=fib(n-2)+fib(n-1);
return t;
}
int main()
{
int t;
printf("Enter the number :- ");
scanf("%d",&n);
for(int i=1;fib(i)<=n;i++)
{
if(fib(i)==n)
{
printf("\n Yes \n");
t=1;
}
}
if(t!=1)
printf("\n NO \n");

}
