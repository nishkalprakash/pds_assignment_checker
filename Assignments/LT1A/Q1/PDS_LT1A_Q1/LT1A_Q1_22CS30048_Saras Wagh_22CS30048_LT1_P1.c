#include<stdio.h>
int main()
{
int n,sum=0;
printf("User please input a number:\n");
scanf("%d",&n);
if(n==1||n<=0)
{
printf("Invalid input");
}
printf("The perfect numbers less than or equal to n are:\n");
for(int j=2;j<=n;j++)
{
int sum=0;
for(int i=1;i<j;i++)
{
if(j%i==0)
sum+=i;
}
if(sum==j)
printf("%d ",j);
}
return 0;
}


