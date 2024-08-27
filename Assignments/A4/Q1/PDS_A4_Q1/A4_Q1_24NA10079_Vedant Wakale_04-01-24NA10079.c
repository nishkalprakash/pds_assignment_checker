#include <stdio.h>
int main()
{
int n;
printf("Enter a integer n:");
scanf("%d",&n);
if (n<=0)
{
printf("N is invalid ");
}

int i=1,a=0,b=1,s;
printf("1");
while (i<=n)
{
s=a+b;

if (i%2==0)
{
printf("%d ",s);
a=b,b=s;
i++;
}
else 
{
printf("%d ",-s);
a=b,b=s;
i++;
}
}
}



