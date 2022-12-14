#include<stdio.h>
int perfect(int a);
int main()
{
int n;
printf("enter a number till which perfect numbers are printed:");
scanf("%d",&n);
if(n<0 || n==1)
{
printf("invalid number");//prints invalid is the input is less that 0 or equal to 1
}
else
{
for(int i=6;i<=n;i++)
printf("%d \t",perfect(n));
}
return 0;
}

int perfect(int a)
{
int count=0,i=1;
while(i<=a/2)
{
if(a%i==0)
{
count=count+i;
i=i+1;
}
}
if(count==a)
return count;
}
