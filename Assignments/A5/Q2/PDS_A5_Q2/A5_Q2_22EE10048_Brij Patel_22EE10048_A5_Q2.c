/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 5

Description-check coprime among 5 nos
*/
#include <stdio.h>
const int size=5;
int k=0;
int gcd(int a,int b)
{
int temp;
if(a>b)
{
temp=a;
a=b;
b=temp;
}
while((b%a)!=0)
{
temp=b%a;
b=a;
a=temp;
}
return a;
}
void CoPrime(int a,int b)
{
if(gcd(a,b)==1)
{
printf("%d and %d are Coprime\n",a,b);
k=1;
}
}
void pair(int a[])
{
for(int i=0;i<=4;i++)
{
for(int j=i+1;j<=4;j++)
CoPrime(a[i],a[j]);
}
}
int main()
{
int n[size];
for(int i=0;i<=4;i++)
scanf("%d",&n[i]);
pair(n);
if(k==0)
printf("No Coprime found");
return 0;
}
