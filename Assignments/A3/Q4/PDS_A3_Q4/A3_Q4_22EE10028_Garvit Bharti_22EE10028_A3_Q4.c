#include<stdio.h>

int main()
{
float n,t,i;
printf("enter the no of units");
scanf("%f",&n);
if(n>=100)
{
if(n>100&&n<=200)
{
i = 50 + (n-100)*0.75;
t = i + (i*20)/100;
printf("the bill is : %f",t);
}
if(n>200&&n<=300)
{
i = 50 + 100*0.75+(n-200)*1.2;
t = i + (i*20)/100;
printf("the bill is : %f",t);
}
if(n>300)
{
i = 50 + 100*0.75 + 100*1.2 + (n - 300)*1.5;
t = i + (i*20)/100;
printf("the bill is : %f",t);
}
}
else
{
printf("the bill is : 50");
}
return 0;
}


