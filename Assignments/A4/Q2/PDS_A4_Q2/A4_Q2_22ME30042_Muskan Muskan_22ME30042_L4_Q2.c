/*Assignment 4
  Muskan
  Section - 14*/
#include<stdio.h>
int main()
{
int i,num,n,sum=0;
printf("Enter a number;");
scanf("%d",&n);
if((n>0)&&(n<99999))
{
while(n!=0)
{
i= n%(10);
sum=sum+i;

n=n/10;
}
printf("%d",sum);
}
if((n>-9999)&&(n<0))
{n=n*1;
while(n!=0)
{
i= n%(10);
sum=sum+i;

n=n/10;
}
printf("%d",sum);
}
return 0;
}


