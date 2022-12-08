/* NAME: ABHIJIT KUMAR
ROLL NO. 22IM10001
SECTION 14
LAB 5:ARRAY AMD FUCTION
TOPIC- FINDING THE VALUE OF SUM OF N TERMS OF A GIVEN SERIES*/
#include<stdio.h>

float fact(int);
float power(int,int);
int n,N,X;
int main()
{
float sum=1,term;
printf("Enter the value of x and n");
scanf("%d %d",&X,&N);
for(n=1;n<=N;n++)
{
term=(power(X,n))/(fact(n));
sum=sum+term;
}
if(N==1 || X==0)
{
sum=sum-1;
printf("The sum is= %f",sum);
}
else
{
printf("The sum is= %f",sum);
}
}
float fact(int n)
{
int i,temp=1;
for(i=1;i<=n;i++)
temp=temp*i;
return temp;
}
float power(int X,int n)
{
int count=1;
float k=1;
if(N==1) return 0;
else
{
for(count=1;count<n;count++)
k=k*X;
return k;
}
}


