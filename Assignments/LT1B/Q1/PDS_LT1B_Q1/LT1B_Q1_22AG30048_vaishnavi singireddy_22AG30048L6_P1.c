#include<stdio.h>
#include<math.h>
int main()
{
int n,a,b,c;
printf("enter a number\n");
scanf("%d",&n);
if(n<=0 || n>pow(10,6))
{
printf("invalid input");

}
if(n>10)
{
printf(" 1 2 3 4 5 6 7 8 9 \n");
}

while(n>=10)
{

a=n%10;
n=n/10;

b=n%10;
n=n/10;
c=n;

printf("%d\n",c);
printf("%d\n",b);
printf("%d\n",a);

if(n==a*a*a+b*b*b+c*c*c)
{

printf("%d\n",n);

}
else 
{

printf("no");
}
n--;



}

return 0;
}

