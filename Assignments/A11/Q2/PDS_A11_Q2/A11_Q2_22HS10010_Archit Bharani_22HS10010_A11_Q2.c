#include<stdio.h>
int fibseq(int n)
{
int fib;
if(n==0)
return 0;
if(n==1)
return 1;

fib=fibseq(n-1)+fibseq(n-2);

return fib;
}

int main()
{
int n,count=0;
printf("Enter a integer n ");
scanf("%d",&n);
for(int i=0;i<=n+1;i++)
{
if(n==fibseq(i))
{
count++;
break;
}
}
if(count==1)
printf("Yes");
else printf("No");

return 0;
}
