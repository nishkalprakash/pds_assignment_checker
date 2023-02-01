#include<stdio.h>
int fibonacci(int z);
int main()
{
int a,m,q=0,dig;
printf("enter a number between 0 to 100\n");
scanf("%d",&m);
while(1)
{
dig=fibonacci(m++);
if(dig==m)
{
printf("yes\n");
break;
}
else if(dig>m)
{
printf("no\n");
}
break;
}
return 0 ;
}
int fibonacci(int x)
{
int y;
if(x==0)
{
return 0;
}
else if (x==1)
{
return 1;
}
else
{
y=fibonacci(x-1)+fibonacci(x-2);
}
return (y);
}
