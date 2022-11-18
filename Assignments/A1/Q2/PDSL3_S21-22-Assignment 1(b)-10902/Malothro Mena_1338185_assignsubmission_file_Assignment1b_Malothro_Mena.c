#include<stdio.h>
int main()
{
int a,b,sum=0,temp;
printf("enter the 3 digit number=\n");
scanf("%d",&a);
temp=a;
while(a>0)
{
b=a%10;
sum=(sum*10)+b;
a=a/10;
}
printf("%d",sum);
return 0;
}
