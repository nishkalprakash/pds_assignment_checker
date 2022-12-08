/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 5

Description-SUM OF SERIES
*/
#include <stdio.h>
int fact(int n)
{
int f=1;
for(int i=1;i<=n;i++)
f*=i;
return f;
}
int power(int x,int n)
{
int p=1;
for(int i=1;i<=n;i++)
p=p*x;
return p;
}
int main()
{
int n,x;
printf("Enter x and n\n");
scanf("%d %d",&x,&n);
float sum=0;
for(int i=0;i<n;i++)
sum=sum+(float)(power(x,i))/(fact(i));
printf("%f",sum);
return 0;
}
