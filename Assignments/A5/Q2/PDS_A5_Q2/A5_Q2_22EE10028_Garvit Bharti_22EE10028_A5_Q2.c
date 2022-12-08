/*
sec = 14
roll no = 22EE10028
name = garvit
assign = 5
descrp = to check whether two no are coprime or not
*/
#include<stdio.h>
int gcd(int a,int b)
{
int temp;
if(a>b)
{
temp = a;
a = b;
b = temp;
}
while(b%a!=0)
{
temp = b%a;
b = a;
a = temp;
}
return a;
}
int coprime(int a,int b)
{int c;
c = gcd(a,b);
if(c==1)
{
return 1;
}
else
{return 0;}
}
int main()
{
int a[5],i,j,c,d;
for(i=1;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=5;i++)
{
for(j=i+1;j<=5;j++)
{
c = coprime(a[i],a[j]);
if(c == 1)
{printf("%d and %d are coprime\n",a[i],a[j]);}
else
{if(c!=1)
{d = 0;}}
}
}
if(d==0)
{printf("no coprime found");}

return 0;

}

