#include<stdio.h>



int main()
{
int n,t,i;
printf("enter the no");
scanf("%d",&n);
t = 0;
while(n!=0)
{
i = n%10;
t = t + i;
n = n/10;
}
printf("sum is %d",t);
return 0;
}

