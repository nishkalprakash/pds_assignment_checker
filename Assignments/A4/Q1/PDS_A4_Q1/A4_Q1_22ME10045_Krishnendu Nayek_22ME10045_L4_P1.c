#include<stdio.h>

int main()
{
int n,m,i;
printf("Enter the number: \n");
scanf("%d",&n);
if(n<0)
m=-n;
else
m=n;
printf("The factors are: \n");
if(m==0)
printf("0 ");
else
{
for(i=1;i<=m;i++)
{
if(m%i==0)
printf("%d ",i);
}
}
return 0;
}
