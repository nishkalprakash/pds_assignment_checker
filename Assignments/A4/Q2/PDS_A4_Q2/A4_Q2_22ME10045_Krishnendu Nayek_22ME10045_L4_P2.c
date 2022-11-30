#include<stdio.h>
int main()
{
int n,m,i,j=10,sum=0,r;
printf("enter the number:\n");
scanf("%d",&n);
if(n>0)
{
if(n<10)
printf("the sum of the digits is %d \n",n);
else
{
for(i=1;i<=7;i++)
{
r=n%10;
sum=sum+r;
n=(n-r)/10;
}
printf("the sum of the digits is %d \n",sum);
}
}
else
{
m=-n;
if(m<10)
printf("the sum of the digits is %d \n",n);
else
{
for(i=1;i<=7;i++)
{
r=m%10;
sum=sum+r;
m=(m-r)/10;
}
printf("the sum of the digits is %d \n",sum*(-1));
}
}


return 0;
}



