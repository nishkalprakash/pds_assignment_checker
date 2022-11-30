//program calculates and prints the sum of the digits of a number.
#include<stdio.h>
int main()
{
int n,s=0,m=0;
printf("Enter any number :");
scanf("%d",&n);
while(n!=0)
{
m=n%10;
s=s+m;
n=n/10;
}
printf("The sum of digits = %d",s);
return 0;
}

