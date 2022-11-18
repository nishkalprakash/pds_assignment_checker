#include<stdio.h>
int main()
{
int n,a,b,c,r;
printf("Enter 3-digit number:");
scanf("%d",&n);
a=n/100;
b=(n%100)/10;
c=n%10;
r=c*100+b*10+a;
printf("Reverse=%d",r);
return 0;
}
