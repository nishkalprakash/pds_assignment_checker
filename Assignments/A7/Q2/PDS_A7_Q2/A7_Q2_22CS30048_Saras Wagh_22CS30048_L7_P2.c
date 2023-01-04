#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
int n,m,t=0,l=0,o=1;
printf("Enter the size of the array:\n");
scanf("%d",&n);
int a[n];
printf("start entering the numbers:\n");
for(int i=0;i<=n-1;i++)
{
printf("Enter the element no.%d",i+1);
scanf("%d",&a[i]);
}
printf("Enter the value of m:\n");
scanf("%d",&m);
for(int i=0;i<=n-1;i++)
{
for(int j=0;j<=n-1;j++)
{
if(a[i]==a[j])
{
t++;
}
}
if(t==m)
{
printf("%d ",a[i]);
l++;
o++;
}


t=0;
}
if(l==0)
{
printf("NO number appears %d times",m);
}
else
{
printf("appears %d times",m);
}
return 0;
}


